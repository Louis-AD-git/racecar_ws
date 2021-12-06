#include <iostream>
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/TwistStamped.h>

// ros::Subscriber cmd_vel_sub;
// ros::Publisher cmd_vel_pub;

// using namespace std;

// double vx = 0.0;
// double vth = 0.0;

// //filling the velocity
// geometry_msgs::Twist velocity;

// void cmd_velCallback(const geometry_msgs::TwistStamped &msg)
// {
//     vx = msg.twist.linear.x;
//     vth = msg.twist.angular.z;

//     velocity.linear.x = vx;
//     velocity.angular.z = vth;

//     cout << "vx: " << velocity.linear.x << endl;
//     cout << "vth: " << velocity.angular.z << endl;

//     cmd_vel_pub.publish(velocity);
//     ros::spinOnce();
// }



//ros::Subscriber cmd_vel_sub;
//ros::Publisher cmd_vel_pub;

using namespace std;

// double vx = 0.0;
// double vth = 0.0;

//filling the velocity
//geometry_msgs::Twist velocity;

// void velTop_control(geometry_msgs::TwistStamped &msg)
// {
//     msg.twist.linear.x=0.1;
//     msg.twist.angular.z=0;
//     cmd_vel_pub.publish(msg)
//     ros::spinOnce();
// }



// void cmd_velCallback(const geometry_msgs::TwistStamped &msg)
// {
//     vx = msg.twist.linear.x;
//     vth = msg.twist.angular.z;

//     velocity.linear.x = vx;
//     velocity.angular.z = vth;

//     cout << "vx: " << velocity.linear.x << endl;
//     cout << "vth: " << velocity.angular.z << endl;

//     cmd_vel_pub.publish(velocity);
//     ros::spinOnce();
// }

// int main(int argc, char** argv)
// {
//     ros::init(argc, argv, "cmd_vel_trans");
//     ros::NodeHandle n;

//     cmd_vel_sub = n.subscribe("/twist_cmd", 10, cmd_velCallback);
//     cmd_vel_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel", 10);//发布速度

//     ros::Rate loop_rate(20);

//     while (ros::ok())
//     {
//         ros::spinOnce();
//         loop_rate.sleep();
//     }

//     return 0;

// }
int main(int argc, char** argv)
{
    ros::init(argc, argv, "velTop_control");
    ros::NodeHandle n;

    ros::Publisher v_pub = n.advertise<geometry_msgs::TwistStamped>("/twist_cmd", 10);//发布速度
    ros::Rate loop_rate(20);

    int count = 0;
   while (ros::ok())
{
    geometry_msgs::TwistStamped ve;
    ve.twist.linear.x = 0.5;
    ve.twist.angular.z = 0.2;

    v_pub.publish(ve);

    // ros::spinOnce();
    loop_rate.sleep();
    cout<<count<<endl;
    count++;
}
    return 0;

}
