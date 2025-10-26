# tests/test_structure_correct.py
from pathlib import Path


# Names/paths commonly created by tools that should be ignored
IGNORED_TOPLEVEL = {'.git', '.github', '.venv', '.idea'}
IGNORED_ANYWHERE = {'__pycache__', '.pytest_cache', '.DS_Store'}


def _rel(path: Path, root: Path) -> str:
    """Return a POSIX-style path relative to repo root."""
    return path.relative_to(root).as_posix()


def _gather_paths(root: Path) -> tuple[set[str], set[str]]:
    """
    Collect directory and file paths relative to repo root.

    Skips common transient artifacts and anything inside 'tests/' (but not the
    folder itself).
    """
    dirs: set[str] = set()
    files: set[str] = set()

    for path in root.rglob('*'):
        try:
            rel = _rel(path, root)
        except ValueError:
            # Defensive: ignore entries outside the repo root
            continue

        parts = rel.split('/')
        name = parts[-1]

        # Ignore selected top-level tool folders
        if len(parts) == 1 and name in IGNORED_TOPLEVEL:
            continue

        # Ignore anything beneath tests/ (the folder itself is kept)
        if parts[0] == 'tests' and len(parts) > 1:
            continue

        # Ignore transient artifacts anywhere
        if any(part in IGNORED_ANYWHERE for part in parts):
            continue

        if path.is_dir():
            dirs.add(rel)
        elif path.is_file():
            files.add(rel)

    return dirs, files


def test_required_structure_present() -> None:
    """Verify the required structure exists; allow additional entries."""
    repo_root = Path(__file__).resolve().parents[1]

    required_dirs = {
        'ros2-sample-package-cmake',
        'ros2-sample-package-cmake/include',
        'ros2-sample-package-cmake/include/ros2-sample-package-cmake',
        'ros2-sample-package-cmake/src',
        'ros2-sample-package-python',
        'ros2-sample-package-python/resource',
        'ros2-sample-package-python/ros2-sample-package-python',
        'ros2-sample-package-python/test',
        'tests',
    }

    required_files = {
        'README.md',
        'ros2-sample-package-cmake/CMakeLists.txt',
        'ros2-sample-package-cmake/LICENSE',
        'ros2-sample-package-cmake/package.xml',
        'ros2-sample-package-python/LICENSE',
        'ros2-sample-package-python/package.xml',
        'ros2-sample-package-python/resource/ros2-sample-package-python',
        'ros2-sample-package-python/ros2-sample-package-python/__init__.py',
        'ros2-sample-package-python/setup.cfg',
        'ros2-sample-package-python/setup.py',
        'ros2-sample-package-python/test/test_copyright.py',
        'ros2-sample-package-python/test/test_flake8.py',
        'ros2-sample-package-python/test/test_pep257.py',
    }

    actual_dirs, actual_files = _gather_paths(repo_root)

    missing_dirs = sorted(required_dirs - actual_dirs)
    missing_files = sorted(required_files - actual_files)

    assert not missing_dirs, (
        'Missing required directories: ' + ', '.join(missing_dirs)
    )
    assert not missing_files, (
        'Missing required files: ' + ', '.join(missing_files)
    )


def test_package_folder_names_not_duplicated_elsewhere() -> None:
    """
    Ensure package directory names appear only in allowed locations.

    Allowed: as the top-level package folder; and for the CMake package, as the
    third segment in 'ros2-sample-package-cmake/include/ros2-sample-package-cmake'.
    """
    repo_root = Path(__file__).resolve().parents[1]
    actual_dirs, _ = _gather_paths(repo_root)

    py_name = 'ros2-sample-package-python'
    cmake_name = 'ros2-sample-package-cmake'

    violations: list[str] = []

    for d in actual_dirs:
        parts = d.split('/')

        # Python package name must only appear as the top-level segment.
        if py_name in parts and parts[0] != py_name:
            violations.append(d)
            continue

        # CMake package name is allowed as top-level segment or specific include path.
        if cmake_name in parts:
            if parts[0] == cmake_name:
                continue
            if (
                len(parts) >= 3
                and parts[0] == cmake_name
                and parts[1] == 'include'
                and parts[2] == cmake_name
            ):
                continue
            violations.append(d)

    assert not violations, (
        'Disallowed occurrences of package directory names found: '
        + ', '.join(sorted(violations))
    )
