#include <ros/ros.h>
#include <dynamic_reconfigure/server.h>
#include <dynamic_tutorials/ImageProcConfig.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "dynamic_bool");
  ROS_INFO("Dynamic reconfigure iamge check box server is opened.");


  dynamic_reconfigure::Server<dynamic_tutorials::ImageProcConfig> server;

  ros::spin();

  return 0;
}
