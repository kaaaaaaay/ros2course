import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/root/ros2course/ch2-3-make-the-nodes-talk/install/broadcast_node'
