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
/* Operate on the two 32-bit halves via big-endian word access (FR is big-endian): fcc911s
 * models shift counts against 32-bit width, so any >>32/<<32/>>63 on a uint64_t both warns
 * (W1063B) and miscompiles (count is masked to 5 bits). Keep every shift <= 31. */
static uint32_t __frv_popcountll(uint64_t x){
  const uint32_t *w=(const uint32_t *)&x; uint32_t n=0,v;
  v=w[0]; while(v){ n+=(uint32_t)(v&1u); v>>=1; }
  v=w[1]; while(v){ n+=(uint32_t)(v&1u); v>>=1; }
  return n;
}
static uint32_t __frv_clzll(uint64_t x){
  const uint32_t *w=(const uint32_t *)&x; uint32_t hi=w[0], lo=w[1], n=0;
  if(hi){ while(!((hi>>31)&1u)){ hi<<=1; n++; } return n; }
  if(lo){ while(!((lo>>31)&1u)){ lo<<=1; n++; } return n+32; }
  return 64;
}
#define __builtin_popcountll(x) __frv_popcountll((uint64_t)(x))
#define __builtin_clzll(x)      __frv_clzll((uint64_t)(x))
#endif
