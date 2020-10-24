// Generated by gencpp from file hrwros_gazebo/VacuumGripperControlRequest.msg
// DO NOT EDIT!


#ifndef HRWROS_GAZEBO_MESSAGE_VACUUMGRIPPERCONTROLREQUEST_H
#define HRWROS_GAZEBO_MESSAGE_VACUUMGRIPPERCONTROLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hrwros_gazebo
{
template <class ContainerAllocator>
struct VacuumGripperControlRequest_
{
  typedef VacuumGripperControlRequest_<ContainerAllocator> Type;

  VacuumGripperControlRequest_()
    : enable(false)  {
    }
  VacuumGripperControlRequest_(const ContainerAllocator& _alloc)
    : enable(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enable_type;
  _enable_type enable;





  typedef boost::shared_ptr< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct VacuumGripperControlRequest_

typedef ::hrwros_gazebo::VacuumGripperControlRequest_<std::allocator<void> > VacuumGripperControlRequest;

typedef boost::shared_ptr< ::hrwros_gazebo::VacuumGripperControlRequest > VacuumGripperControlRequestPtr;
typedef boost::shared_ptr< ::hrwros_gazebo::VacuumGripperControlRequest const> VacuumGripperControlRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hrwros_gazebo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'hrwros_gazebo': ['/home/mostafa/hrwros_ws/src/hrwros_gazebo/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c1211af706069c994c06e00eb59ac9e";
  }

  static const char* value(const ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c1211af706069c9ULL;
  static const uint64_t static_value2 = 0x94c06e00eb59ac9eULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_gazebo/VacuumGripperControlRequest";
  }

  static const char* value(const ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"bool enable\n"
"\n"
;
  }

  static const char* value(const ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VacuumGripperControlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_gazebo::VacuumGripperControlRequest_<ContainerAllocator>& v)
  {
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_GAZEBO_MESSAGE_VACUUMGRIPPERCONTROLREQUEST_H
