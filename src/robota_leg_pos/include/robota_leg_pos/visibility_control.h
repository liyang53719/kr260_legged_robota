#ifndef ROBOTA_LEG_POS__VISIBILITY_CONTROL_H_
#define ROBOTA_LEG_POS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROBOTA_LEG_POS_EXPORT __attribute__ ((dllexport))
    #define ROBOTA_LEG_POS_IMPORT __attribute__ ((dllimport))
  #else
    #define ROBOTA_LEG_POS_EXPORT __declspec(dllexport)
    #define ROBOTA_LEG_POS_IMPORT __declspec(dllimport)
  #endif
  #ifdef ROBOTA_LEG_POS_BUILDING_LIBRARY
    #define ROBOTA_LEG_POS_PUBLIC ROBOTA_LEG_POS_EXPORT
  #else
    #define ROBOTA_LEG_POS_PUBLIC ROBOTA_LEG_POS_IMPORT
  #endif
  #define ROBOTA_LEG_POS_PUBLIC_TYPE ROBOTA_LEG_POS_PUBLIC
  #define ROBOTA_LEG_POS_LOCAL
#else
  #define ROBOTA_LEG_POS_EXPORT __attribute__ ((visibility("default")))
  #define ROBOTA_LEG_POS_IMPORT
  #if __GNUC__ >= 4
    #define ROBOTA_LEG_POS_PUBLIC __attribute__ ((visibility("default")))
    #define ROBOTA_LEG_POS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define ROBOTA_LEG_POS_PUBLIC
    #define ROBOTA_LEG_POS_LOCAL
  #endif
  #define ROBOTA_LEG_POS_PUBLIC_TYPE
#endif
#endif  // ROBOTA_LEG_POS__VISIBILITY_CONTROL_H_
// Generated 20-Jul-2024 23:32:10
 