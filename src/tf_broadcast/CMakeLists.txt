cmake_minimum_required(VERSION 2.8.3)
project(tf_broadcast)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation 
  dynamic_reconfigure
  rosconsole
  roscpp_serialization 
  roslib 
  rostime
  sensor_msgs
  #0seria
  tf2_ros
  tf2
)



catkin_package(
 INCLUDE_DIRS src
 #CATKIN_DEPENDS serial roscpp sensor_msgs tf
 DEPENDS system_lib
 message_runtime 
)

include_directories(
	include 
	${catkin_INCLUDE_DIRS}
)

add_executable(tf_broadcast_node
  src/tf_broadcast.cpp
)

target_link_libraries(tf_broadcast_node
  #serial
  ${catkin_LIBRARIES}
)

