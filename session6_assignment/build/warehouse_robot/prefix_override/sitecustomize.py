import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/razanhmede/session6_assignment-razan/session6_assignment/install/warehouse_robot'
