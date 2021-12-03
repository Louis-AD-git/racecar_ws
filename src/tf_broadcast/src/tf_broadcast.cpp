#include "ros/ros.h"
#include "tf2_ros/static_transform_broadcaster.h" //发布对象依赖的头文件
#include "geometry_msgs/TransformStamped.h" //组织发布坐标系之间的关系所需要的头文件
#include "tf2/LinearMath/Quaternion.h" //设置四元数所需要的头文件,用来把欧拉角转变成四元数
/*
  发布两个坐标系的相对关系
    包含头文件
    初始化节点
    创建发布对象
    组织被发布的消息
    发布数据
    spin（） 
*/
int main(int argc,char *argv[])
{
     
 ros::init(argc,argv,"tf_broadcast_node");
 ros::NodeHandle nh("~");
 
 double position_x_ = 0.0;
 double position_y_ = 0.0;
 double position_z_ = 0.0;

 double roll_ = 0.0;
 double pitch_ = 0.0;
 double yaw_ = 0.0;

 std::string child_frame_id_ , parent_frame_id_ ;
 
 nh.param<double>("position_x", position_x_, 0.1);
 nh.param<double>("position_y", position_y_, 0.1);
 nh.param<double>("position_z", position_z_, 0.1);

 nh.param<double>("roll", roll_, 0.1);
 nh.param<double>("pitch", pitch_, 0.1);
 nh.param<double>("yaw", yaw_, 0.1);


 nh.param<std::string>("parent_frame_id", parent_frame_id_, "base_link");
 nh.param<std::string>("child_frame_id", child_frame_id_, "");

 tf2_ros::StaticTransformBroadcaster pub;//创建发布对象

 geometry_msgs::TransformStamped tfs; //组织被发布的数据
 tfs.header.stamp=ros::Time::now(); //设置时间辍，设置为ros系统的当前时间
 tfs.header.frame_id= parent_frame_id_ ;//设置被参考的坐标系名称（父系坐标系）

 tfs.child_frame_id= child_frame_id_ ; //设置子系坐标系
 tfs.transform.translation.x= position_x_ ;//设置子坐标系在父坐标系的xyz方向上的偏移量
 tfs.transform.translation.y= position_y_ ;
 tfs.transform.translation.z= position_z_ ;
 //设置欧拉角转换为四元数
  tf2::Quaternion qtn;
  //向该对象设置欧拉角
  qtn.setRPY(roll_ ,pitch_ , yaw_); //其中的参数是在xyz轴上的旋转量，单位是弧度
  //设置四元数
  tfs.transform.rotation.x=qtn.getX();
  tfs.transform.rotation.y=qtn.getY();
  tfs.transform.rotation.z=qtn.getZ();
  tfs.transform.rotation.w=qtn.getW();
  //发布数据

  pub.sendTransform(tfs);
  
  ros::spin(); //回调函数，循环发布坐标信息
    return 0;
}

