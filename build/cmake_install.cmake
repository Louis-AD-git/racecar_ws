# Install script for directory: /home/lzh/racecar_ws/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/lzh/racecar_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lzh/racecar_ws/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lzh/racecar_ws/install" TYPE PROGRAM FILES "/home/lzh/racecar_ws/build/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lzh/racecar_ws/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lzh/racecar_ws/install" TYPE PROGRAM FILES "/home/lzh/racecar_ws/build/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lzh/racecar_ws/install/setup.bash;/home/lzh/racecar_ws/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lzh/racecar_ws/install" TYPE FILE FILES
    "/home/lzh/racecar_ws/build/catkin_generated/installspace/setup.bash"
    "/home/lzh/racecar_ws/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lzh/racecar_ws/install/setup.sh;/home/lzh/racecar_ws/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lzh/racecar_ws/install" TYPE FILE FILES
    "/home/lzh/racecar_ws/build/catkin_generated/installspace/setup.sh"
    "/home/lzh/racecar_ws/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lzh/racecar_ws/install/setup.zsh;/home/lzh/racecar_ws/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lzh/racecar_ws/install" TYPE FILE FILES
    "/home/lzh/racecar_ws/build/catkin_generated/installspace/setup.zsh"
    "/home/lzh/racecar_ws/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lzh/racecar_ws/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lzh/racecar_ws/install" TYPE FILE FILES "/home/lzh/racecar_ws/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/lzh/racecar_ws/build/gtest/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/bringup/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/lslidar_ws/src/lslidar_c16/lslidar_c16/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/navigation/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/racecar_description/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/cartographer_ros-release-1.0/cartographer_ros_msgs/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/map_server/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/lslidar_ws/src/lslidar_c16/lslidar_c16_msgs/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/carTop/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/imu_driver/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/lslidar_ws/src/lslidar_c16/lslidar_c16_driver/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/lslidar_ws/src/lslidar_c16/lslidar_c16_decoder/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/amcl/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/fake_localization/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/pointcloud_to_laserscan-lunar-devel/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/tf_broadcast/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/cartographer_ros-release-1.0/cartographer_ros/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/cartographer_ros-release-1.0/cartographer_rviz/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/voxel_grid/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/costmap_2d/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/nav_core/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/base_local_planner/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/carrot_planner/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/clear_costmap_recovery/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/dwa_local_planner/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/move_slow_and_clear/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/navfn/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/global_planner/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/rotate_recovery/cmake_install.cmake")
  include("/home/lzh/racecar_ws/build/navigation-melodic-devel/move_base/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/lzh/racecar_ws/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
