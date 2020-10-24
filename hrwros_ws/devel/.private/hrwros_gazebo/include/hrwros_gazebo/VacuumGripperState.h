// Generated by gencpp from file hrwros_gazebo/VacuumGripperState.msg
// DO NOT EDIT!


#ifndef HRWROS_GAZEBO_MESSAGE_VACUUMGRIPPERSTATE_H
#define HRWROS_GAZEBO_MESSAGE_VACUUMGRIPPERSTATE_H


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
struct VacuumGripperState_
{
  typedef VacuumGripperState_<ContainerAllocator> Type;

  VacuumGripperState_()
    : enabled(false)
    , attached(false)  {
    }
  VacuumGripperState_(const ContainerAllocator& _alloc)
    : enabled(false)
    , attached(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enabled_type;
  _enabled_type enabled;

   typedef uint8_t _attached_type;
  _attached_type attached;





  typedef boost::shared_ptr< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> const> ConstPtr;

}; // struct VacuumGripperState_

typedef ::hrwros_gazebo::VacuumGripperState_<std::allocator<void> > VacuumGripperState;

typedef boost::shared_ptr< ::hrwros_gazebo::VacuumGripperState > VacuumGripperStatePtr;
typedef boost::shared_ptr< ::hrwros_gazebo::VacuumGripperState const> VacuumGripperStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "60714eed20fb6d744d2c10a1fb15dc69";
  }

  static const char* value(const ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x60714eed20fb6d74ULL;
  static const uint64_t static_value2 = 0x4d2c10a1fb15dc69ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_gazebo/VacuumGripperState";
  }

  static const char* value(const ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Vacum gripper state message\n"
"# This structure contains the state of the gripper.\n"
"\n"
"# Is the suction enabled?\n"
"bool enabled\n"
"\n"
"# Is an object attached to the gripper?\n"
"bool attached\n"
;
  }

  static const char* value(const ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enabled);
      stream.next(m.attached);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VacuumGripperState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_gazebo::VacuumGripperState_<ContainerAllocator>& v)
  {
    s << indent << "enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enabled);
    s << indent << "attached: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.attached);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_GAZEBO_MESSAGE_VACUUMGRIPPERSTATE_H
