#ifndef _COMPAT_STDINT_H
#define _COMPAT_STDINT_H
#include <string.h>
typedef signed char        int8_t;
typedef unsigned char      uint8_t;
typedef short              int16_t;
typedef unsigned short     uint16_t;
typedef int                int32_t;
typedef unsigned int       uint32_t;
/* 64-bit types are defined UNCONDITIONALLY. funcs.h declares 60 functions returning uint64_t
 * (timer_interrupt_handler, the kernel-service traps, rtos_context_switch, …), so every translation
 * unit that includes funcs.h references the type — there is no "only 1% need it" subset. The old
 * USES_64_BIT gate (commit 23cb9078) therefore broke fresh compiles of every other file and only
 * seemed to work because the cached .objs predated it; it has been removed. The W1450B "long long
 * nonstandard" warning fires on the typedef and is unsuppressable at the compiler (fcc911s: no
 * __int64, no per-message -w, no pragma), so build.sh strips W1450B from the compile output instead. */
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
