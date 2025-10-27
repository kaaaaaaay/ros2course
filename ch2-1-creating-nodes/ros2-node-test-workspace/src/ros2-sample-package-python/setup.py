from setuptools import find_packages, setup

package_name = 'ros2-sample-package-python'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Kay',
    maintainer_email='k.engelmann@campus.tu-berlin.de',
    description='This is some description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'test_our_node = ros2_sample_package_python.sample_node:main',
        ],
    },
)
