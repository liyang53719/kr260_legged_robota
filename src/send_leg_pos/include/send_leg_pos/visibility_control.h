#ifndef SEND_LEG_POS__VISIBILITY_CONTROL_H_
#define SEND_LEG_POS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define SEND_LEG_POS_EXPORT __attribute__ ((dllexport))
    #define SEND_LEG_POS_IMPORT __attribute__ ((dllimport))
  #else
    #define SEND_LEG_POS_EXPORT __declspec(dllexport)
    #define SEND_LEG_POS_IMPORT __declspec(dllimport)
  #endif
  #ifdef SEND_LEG_POS_BUILDING_LIBRARY
    #define SEND_LEG_POS_PUBLIC SEND_LEG_POS_EXPORT
  #else
    #define SEND_LEG_POS_PUBLIC SEND_LEG_POS_IMPORT
  #endif
  #define SEND_LEG_POS_PUBLIC_TYPE SEND_LEG_POS_PUBLIC
  #define SEND_LEG_POS_LOCAL
#else
  #define SEND_LEG_POS_EXPORT __attribute__ ((visibility("default")))
  #define SEND_LEG_POS_IMPORT
  #if __GNUC__ >= 4
    #define SEND_LEG_POS_PUBLIC __attribute__ ((visibility("default")))
    #define SEND_LEG_POS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define SEND_LEG_POS_PUBLIC
    #define SEND_LEG_POS_LOCAL
  #endif
  #define SEND_LEG_POS_PUBLIC_TYPE
#endif
#endif  // SEND_LEG_POS__VISIBILITY_CONTROL_H_
// Generated 20-Jul-2024 22:40:12
 