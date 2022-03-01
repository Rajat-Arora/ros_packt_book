// Generated by gencpp from file mastering_ros_demo_pkg/demo_srvRequest.msg
// DO NOT EDIT!


#ifndef MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_SRVREQUEST_H
#define MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_SRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mastering_ros_demo_pkg
{
template <class ContainerAllocator>
struct demo_srvRequest_
{
  typedef demo_srvRequest_<ContainerAllocator> Type;

  demo_srvRequest_()
    : in()  {
    }
  demo_srvRequest_(const ContainerAllocator& _alloc)
    : in(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _in_type;
  _in_type in;





  typedef boost::shared_ptr< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct demo_srvRequest_

typedef ::mastering_ros_demo_pkg::demo_srvRequest_<std::allocator<void> > demo_srvRequest;

typedef boost::shared_ptr< ::mastering_ros_demo_pkg::demo_srvRequest > demo_srvRequestPtr;
typedef boost::shared_ptr< ::mastering_ros_demo_pkg::demo_srvRequest const> demo_srvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator1> & lhs, const ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.in == rhs.in;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator1> & lhs, const ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mastering_ros_demo_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2718218ecd3037e7050a0e8416c50c33";
  }

  static const char* value(const ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2718218ecd3037e7ULL;
  static const uint64_t static_value2 = 0x050a0e8416c50c33ULL;
};

template<class ContainerAllocator>
struct DataType< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mastering_ros_demo_pkg/demo_srvRequest";
  }

  static const char* value(const ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string in\n"
;
  }

  static const char* value(const ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.in);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct demo_srvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mastering_ros_demo_pkg::demo_srvRequest_<ContainerAllocator>& v)
  {
    s << indent << "in: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.in);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MASTERING_ROS_DEMO_PKG_MESSAGE_DEMO_SRVREQUEST_H
