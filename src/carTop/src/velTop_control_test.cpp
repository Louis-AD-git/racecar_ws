#include <iostream>
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/TwistStamped.h>

using namespace std;

int main(int argc, char** argv)
{
    ros::init(argc, argv, "velTop_control_test");
    ros::NodeHandle n;

    double twist_linear_x_ = 0.0;
    double twist_angular_z_ = 0.0;

    n.param<double>("twist_linear_x",twist_linear_x_,0.1);
    n.param<double>("twist_angular_z",twist_angular_z_,0.1);
    ros::Publisher v_pub = n.advertise<geometry_msgs::TwistStamped>("/twist_cmd", 10);//发布速度
    ros::Rate loop_rate(20);

    int count = 0;

   while (ros::ok())
{
    geometry_msgs::TwistStamped ve;

    
    ve.twist.linear.x = twist_linear_x_;
    ve.twist.angular.z = twist_angular_z_;


    v_pub.publish(ve);

    loop_rate.sleep();
    count++;

    cout<<count<<endl;

    cout<<"当前速度为："<<ve.twist.linear.x<<endl;
    cout<<"当前转角为："<<ve.twist.angular.z<<endl;
    cout<<"----------------------------------------"<<endl;
}
    return 0;

}
