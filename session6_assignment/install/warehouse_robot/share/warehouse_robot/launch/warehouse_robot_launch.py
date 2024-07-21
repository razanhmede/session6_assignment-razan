import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='warehouse_robot',
            executable='stock_checker_service_server',
            name='stock_checker_service_server',
            output='screen'
        ),
        Node(
            package='warehouse_robot',
            executable='stock_checker_service_client',
            name='stock_checker_service_client',
            output='screen',
            arguments=['item1']
        ),
        Node(
            package='warehouse_robot',
            executable='Item_delivery_action_server',
            name='Item_delivery_action_server',
            output='screen'
        ),
        Node(
            package='warehouse_robot',
            executable='Item_delivery_action_client',
            name='Item_delivery_action_client',
            output='screen',
            arguments=['item1', '5']
        )
    ])
