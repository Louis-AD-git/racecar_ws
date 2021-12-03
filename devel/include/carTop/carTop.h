// Generated by gencpp from file carTop/carTop.msg
// DO NOT EDIT!


#ifndef CARTOP_MESSAGE_CARTOP_H
#define CARTOP_MESSAGE_CARTOP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace carTop
{
template <class ContainerAllocator>
struct carTop_
{
  typedef carTop_<ContainerAllocator> Type;

  carTop_()
    : back_wheel_speed(0.0)
    , turn_angle(0.0)
    , battery_level(0)
    , error_flag(0)  {
    }
  carTop_(const ContainerAllocator& _alloc)
    : back_wheel_speed(0.0)
    , turn_angle(0.0)
    , battery_level(0)
    , error_flag(0)  {
  (void)_alloc;
    }



   typedef double _back_wheel_speed_type;
  _back_wheel_speed_type back_wheel_speed;

   typedef double _turn_angle_type;
  _turn_angle_type turn_angle;

   typedef uint8_t _battery_level_type;
  _battery_level_type battery_level;

   typedef uint8_t _error_flag_type;
  _error_flag_type error_flag;





  typedef boost::shared_ptr< ::carTop::carTop_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::carTop::carTop_<ContainerAllocator> const> ConstPtr;

}; // struct carTop_

typedef ::carTop::carTop_<std::allocator<void> > carTop;

typedef boost::shared_ptr< ::carTop::carTop > carTopPtr;
typedef boost::shared_ptr< ::carTop::carTop const> carTopConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::carTop::carTop_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::carTop::carTop_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::carTop::carTop_<ContainerAllocator1> & lhs, const ::carTop::carTop_<ContainerAllocator2> & rhs)
{
  return lhs.back_wheel_speed == rhs.back_wheel_speed &&
    lhs.turn_angle == rhs.turn_angle &&
    lhs.battery_level == rhs.battery_level &&
    lhs.error_flag == rhs.error_flag;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::carTop::carTop_<ContainerAllocator1> & lhs, const ::carTop::carTop_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace carTop

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::carTop::carTop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::carTop::carTop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carTop::carTop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carTop::carTop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carTop::carTop_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carTop::carTop_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::carTop::carTop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2399edfa2a8160084c724032695e45ee";
  }

  static const char* value(const ::carTop::carTop_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2399edfa2a816008ULL;
  static const uint64_t static_value2 = 0x4c724032695e45eeULL;
};

template<class ContainerAllocator>
struct DataType< ::carTop::carTop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "carTop/carTop";
  }

  static const char* value(const ::carTop::carTop_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::carTop::carTop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 back_wheel_speed\n"
"float64 turn_angle\n"
"char battery_level\n"
"char error_flag\n"
;
  }

  static const char* value(const ::carTop::carTop_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::carTop::carTop_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.back_wheel_speed);
      stream.next(m.turn_angle);
      stream.next(m.battery_level);
      stream.next(m.error_flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct carTop_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::carTop::carTop_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::carTop::carTop_<ContainerAllocator>& v)
  {
    s << indent << "back_wheel_speed: ";
    Printer<double>::stream(s, indent + "  ", v.back_wheel_speed);
    s << indent << "turn_angle: ";
    Printer<double>::stream(s, indent + "  ", v.turn_angle);
    s << indent << "battery_level: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.battery_level);
    s << indent << "error_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOP_MESSAGE_CARTOP_H
