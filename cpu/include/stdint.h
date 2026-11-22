#ifndef _COMPAT_STDINT_H
#define _COMPAT_STDINT_H
#include <string.h>
typedef signed char        int8_t;
typedef unsigned char      uint8_t;
typedef short              int16_t;
typedef unsigned short     uint16_t;
typedef int                int32_t;
typedef unsigned int       uint32_t;
/* 64-bit types are the ONLY source of the unsuppressable W1450B "long long nonstandard" warning
 * (fcc911s: no __int64, no per-message -w granularity, no warning pragma — confirmed in the manual).
 * Only ~1% of files use 64-bit, so build.sh passes -DUSES_64_BIT to just those and the rest compile
 * warning-free. The CONCAT/SUB/ZEXT/SEXT/CARRY/POPCOUNT macros in frv_intrinsics.h expand to
 * uint64_t, so any file using them is detected and gets the define too. */
#ifdef USES_64_BIT
typedef long long          int64_t;
typedef unsigned long long uint64_t;
#endif
typedef int                intptr_t;
typedef unsigned int       uintptr_t;
#define __builtin_memcpy  memcpy
#define __builtin_memmove memmove
#define __builtin_memset  memset
#define __builtin_strcpy  strcpy
#define __builtin_strncpy strncpy
#define __builtin_strcat  strcat
#define __builtin_strncat strncat
#define __builtin_strlen  strlen
#ifdef USES_64_BIT
static uint32_t __frv_popcountll(uint64_t x){ uint32_t n=0; while(x){ n+=(uint32_t)(x&1u); x>>=1; } return n; }
static uint32_t __frv_clzll(uint64_t x){ uint32_t n=0; if(!x) return 64; while(!((x>>63)&1u)){ x<<=1; n++; } return n; }
#define __builtin_popcountll(x) __frv_popcountll((uint64_t)(x))
#define __builtin_clzll(x)      __frv_clzll((uint64_t)(x))
#endif
#endif
