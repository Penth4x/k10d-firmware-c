#ifndef _COMPAT_STDINT_H
#define _COMPAT_STDINT_H
#include <string.h>
typedef signed char        int8_t;
typedef unsigned char      uint8_t;
typedef short              int16_t;
typedef unsigned short     uint16_t;
typedef int                int32_t;
typedef unsigned int       uint32_t;
typedef long long          int64_t;
typedef unsigned long long uint64_t;
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
static uint32_t __frv_popcountll(uint64_t x){ uint32_t n=0; while(x){ n+=(uint32_t)(x&1u); x>>=1; } return n; }
static uint32_t __frv_clzll(uint64_t x){ uint32_t n=0; if(!x) return 64; while(!((x>>63)&1u)){ x<<=1; n++; } return n; }
#define __builtin_popcountll(x) __frv_popcountll((uint64_t)(x))
#define __builtin_clzll(x)      __frv_clzll((uint64_t)(x))
#endif
