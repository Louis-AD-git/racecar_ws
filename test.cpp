#include <iostream>
#include <nav_msgs/Odometry.h>


double last_calculate_time = ros::Time::now().toSecond();

const double L = 0.8; //m

void odomCalculate(const double& front_wheel_theta, const double& rear_wheel_vel, nav_msgs::Odometry& odom ){

  double delta_t = ( ros::Time::now() - last_calculate_time ).toSecond();
  last_calculate_time = ros::Time::now().toSecond();

  odom.header.stamp = ros::Time::now();
  odom.heder.frame_id = "odom";
  odom.pose.pose.position.x += rear_wheel_vel * delta_t * cos( front_wheel_theta * tan(front_wheel_theta) * rear_wheel_vel / L);
  odom.pose.pose.position.y += rear_wheel_vel * delta_t * sin( front_wheel_theta * tan(front_wheel_theta) * rear_wheel_vel / L);
  
  double delta_yaw = rear_wheel_vel * atan( front_wheel_theta ) * delta_t / L;

  double yaw = delta_yaw + tf::getYaw ( odom.pose.pose.orientation ); 

  odom.pose.pose.orientation  = tf::createQuaternionMsgFromYaw( yaw );

  //odom.pose.covariance 

  odom.pose.covariance[0]  = 0.1;   // x的协方差 
  odom.pose.covariance[7]  = 0.1;	// y的协方差
  odom.pose.covariance[35] = 0.2;   //theta的协方差

  odom.pose.covariance[14] = 1e10; // set a non-zero covariance on unused    theta x axis
  odom.pose.covariance[21] = 1e10; // dimensions (z, pitch and roll); this          theta y  axis
  odom.pose.covariance[28] = 1e10; // is a requirement of robot_pose_ekf  
  

  odom.twist.twist.linear.x = rear_wheel_vel;
  odom.twist.twist.angular.z = rear_wheel_vel * atan( front_wheel_theta ) / L;

  

  //odom.twist.covariance 

}
