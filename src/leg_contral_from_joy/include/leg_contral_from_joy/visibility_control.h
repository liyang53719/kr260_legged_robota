#ifndef LEG_CONTRAL_FROM_JOY__VISIBILITY_CONTROL_H_
#define LEG_CONTRAL_FROM_JOY__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define LEG_CONTRAL_FROM_JOY_EXPORT __attribute__ ((dllexport))
    #define LEG_CONTRAL_FROM_JOY_IMPORT __attribute__ ((dllimport))
  #else
    #define LEG_CONTRAL_FROM_JOY_EXPORT __declspec(dllexport)
    #define LEG_CONTRAL_FROM_JOY_IMPORT __declspec(dllimport)
  #endif
  #ifdef LEG_CONTRAL_FROM_JOY_BUILDING_LIBRARY
    #define LEG_CONTRAL_FROM_JOY_PUBLIC LEG_CONTRAL_FROM_JOY_EXPORT
  #else
    #define LEG_CONTRAL_FROM_JOY_PUBLIC LEG_CONTRAL_FROM_JOY_IMPORT
  #endif
  #define LEG_CONTRAL_FROM_JOY_PUBLIC_TYPE LEG_CONTRAL_FROM_JOY_PUBLIC
  #define LEG_CONTRAL_FROM_JOY_LOCAL
#else
  #define LEG_CONTRAL_FROM_JOY_EXPORT __attribute__ ((visibility("default")))
  #define LEG_CONTRAL_FROM_JOY_IMPORT
  #if __GNUC__ >= 4
    #define LEG_CONTRAL_FROM_JOY_PUBLIC __attribute__ ((visibility("default")))
    #define LEG_CONTRAL_FROM_JOY_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define LEG_CONTRAL_FROM_JOY_PUBLIC
    #define LEG_CONTRAL_FROM_JOY_LOCAL
  #endif
  #define LEG_CONTRAL_FROM_JOY_PUBLIC_TYPE
#endif
#endif  // LEG_CONTRAL_FROM_JOY__VISIBILITY_CONTROL_H_
// Generated 20-Jul-2024 23:32:10
 