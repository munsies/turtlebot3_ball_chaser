// Generated by gencpp from file turtlebot_ball_chaser/DriveToBallResponse.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_BALL_CHASER_MESSAGE_DRIVETOBALLRESPONSE_H
#define TURTLEBOT_BALL_CHASER_MESSAGE_DRIVETOBALLRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot_ball_chaser
{
template <class ContainerAllocator>
struct DriveToBallResponse_
{
  typedef DriveToBallResponse_<ContainerAllocator> Type;

  DriveToBallResponse_()
    : msg_feedback()  {
    }
  DriveToBallResponse_(const ContainerAllocator& _alloc)
    : msg_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _msg_feedback_type;
  _msg_feedback_type msg_feedback;





  typedef boost::shared_ptr< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DriveToBallResponse_

typedef ::turtlebot_ball_chaser::DriveToBallResponse_<std::allocator<void> > DriveToBallResponse;

typedef boost::shared_ptr< ::turtlebot_ball_chaser::DriveToBallResponse > DriveToBallResponsePtr;
typedef boost::shared_ptr< ::turtlebot_ball_chaser::DriveToBallResponse const> DriveToBallResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot_ball_chaser

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2897a4bc4d7ca330e430870cfdee7314";
  }

  static const char* value(const ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2897a4bc4d7ca330ULL;
  static const uint64_t static_value2 = 0xe430870cfdee7314ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_ball_chaser/DriveToBallResponse";
  }

  static const char* value(const ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string msg_feedback\n\
\n\
";
  }

  static const char* value(const ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msg_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DriveToBallResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot_ball_chaser::DriveToBallResponse_<ContainerAllocator>& v)
  {
    s << indent << "msg_feedback: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.msg_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_BALL_CHASER_MESSAGE_DRIVETOBALLRESPONSE_H
