# ROS SESSION6 ASSIGNMENT: Warehouse Robot System with Actions and Services

## Project Overview

This project aims at implemeting a warehouse robot system using ROS2.The robot can handle delivering items and checking stock levels for these items.The system includes an item delivery action and a stock checker service.The stock checker service provides the stock levels of various items, and the item delivery action server handles delivery requests for items

## Features

### Item Delivery Action Server:
-Implement an action server that handles item delivery requests.

-Simulate the delivery process and provide feedback on the delivery status.
#### Action name:
 DeliverItem
#### Goal:
 string item_name, int32 quantity
#### Feedback:
 string status
#### Result:
 bool success, string message

### Item Delivery Action Client
-Implement a client node that sends delivery requests to the action server.

-Handle the delivery feedback and result

### Stock Checker Service Server
Implement a service server that checks the stock level of a requested item.
#### Service name: 
CheckStock
#### Request: 
string item_name
#### Response: 
int32 stock_level

### Stock Checker Service Client
-Implement a client node that sends stock check requests to the service server.

-Handle the stock level response

## Prerequisites

ROS 2 Foxy 

Python 3.0+

Matplotlib

## Installation:

### Clone the repository and navigate to the package location:

```bash
git clone https://github.com/razanhmede/session6_assignment-razan.git 
cd warehouse_robot
```
### Build the package:

```bash
colcon build
```
### Source the setup files:

```bash
source install/setup.bash
```
## Run the nodes:

### You can run all nodes together using the launch file:

```bash
ros2 launch warehouse_robot warehouse_robot_launch.py
```
### Or you can run each node individually:

#### Run the stock checker server:

```bash
ros2 run warehouse_robot stock_checker_service_server
```
#### Run the stock checker client:

```bash
ros2 run warehouse_robot stock_checker_service_client item1 item2 item3
```
#### Run the item delivery action server:

```bash
ros2 run warehouse_robot item_delivery_action_server
```
#### Run the item delivery action client:

```bash
ros2 run warehouse_robot item_delivery_action_client item1 5
```



