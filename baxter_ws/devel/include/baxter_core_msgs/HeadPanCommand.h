// Generated by gencpp from file baxter_core_msgs/HeadPanCommand.msg
// DO NOT EDIT!


#ifndef BAXTER_CORE_MSGS_MESSAGE_HEADPANCOMMAND_H
#define BAXTER_CORE_MSGS_MESSAGE_HEADPANCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_core_msgs
{
template <class ContainerAllocator>
struct HeadPanCommand_
{
  typedef HeadPanCommand_<ContainerAllocator> Type;

  HeadPanCommand_()
    : target(0.0)
    , speed_ratio(0.0)
    , enable_pan_request(0)  {
    }
  HeadPanCommand_(const ContainerAllocator& _alloc)
    : target(0.0)
    , speed_ratio(0.0)
    , enable_pan_request(0)  {
  (void)_alloc;
    }



   typedef float _target_type;
  _target_type target;

   typedef float _speed_ratio_type;
  _speed_ratio_type speed_ratio;

   typedef uint8_t _enable_pan_request_type;
  _enable_pan_request_type enable_pan_request;



  enum {
    REQUEST_PAN_DISABLE = 0u,
    REQUEST_PAN_ENABLE = 1u,
    REQUEST_PAN_VOID = 2u,
  };

  static const float MAX_SPEED_RATIO;
  static const float MIN_SPEED_RATIO;

  typedef boost::shared_ptr< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> const> ConstPtr;

}; // struct HeadPanCommand_

typedef ::baxter_core_msgs::HeadPanCommand_<std::allocator<void> > HeadPanCommand;

typedef boost::shared_ptr< ::baxter_core_msgs::HeadPanCommand > HeadPanCommandPtr;
typedef boost::shared_ptr< ::baxter_core_msgs::HeadPanCommand const> HeadPanCommandConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const float
      HeadPanCommand_<ContainerAllocator>::MAX_SPEED_RATIO =
        
          1.0
        
        ;
   

   
   template<typename ContainerAllocator> const float
      HeadPanCommand_<ContainerAllocator>::MIN_SPEED_RATIO =
        
          0.0
        
        ;
   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'baxter_core_msgs': ['/home/prachu/baxter_ws/src/baxter_common/baxter_core_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "23b8a3f4b7ee9de7099d029e57660a8c";
  }

  static const char* value(const ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x23b8a3f4b7ee9de7ULL;
  static const uint64_t static_value2 = 0x099d029e57660a8cULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_core_msgs/HeadPanCommand";
  }

  static const char* value(const ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 target              # radians for target, 0 str\n\
float32 speed_ratio         # Percentage of max speed [0-1]\n\
#\n\
  float32 MAX_SPEED_RATIO = 1.0\n\
  float32 MIN_SPEED_RATIO = 0.0\n\
#\n\
uint8   enable_pan_request  # override automatic pan enable/disable\n\
# enable_pan_request is tristate: 0 = disable pan; 1 = enable pan; 2 = don't change pan\n\
  uint8   REQUEST_PAN_DISABLE = 0\n\
  uint8   REQUEST_PAN_ENABLE = 1\n\
  uint8   REQUEST_PAN_VOID = 2\n\
#\n\
";
  }

  static const char* value(const ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target);
      stream.next(m.speed_ratio);
      stream.next(m.enable_pan_request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HeadPanCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_core_msgs::HeadPanCommand_<ContainerAllocator>& v)
  {
    s << indent << "target: ";
    Printer<float>::stream(s, indent + "  ", v.target);
    s << indent << "speed_ratio: ";
    Printer<float>::stream(s, indent + "  ", v.speed_ratio);
    s << indent << "enable_pan_request: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_pan_request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_CORE_MSGS_MESSAGE_HEADPANCOMMAND_H
