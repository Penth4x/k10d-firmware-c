/* @k10d compute_bitwise_not_offset @ 0x104a6ffa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns the two's-complement negation of param_2 for values 0-7, or the value itself
 *   for 8-14.
 * summary:
 *   The function uses a switch statement on param_2 to return a specific constant. For
 *   inputs 0 through 7, it returns the two's-complement negation of the input (e.g.,
 *   0xfffffff9 for 1). For inputs 8 through 14, it returns the input value unchanged. Input
 *   0 returns 0. No memory accesses or callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_bitwise_not_offset(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    uVar1 = 0xfffffff9;
    break;
  case 1:
    uVar1 = 0xfffffffa;
    break;
  case 2:
    uVar1 = 0xfffffffb;
    break;
  case 3:
    uVar1 = 0xfffffffc;
    break;
  case 4:
    uVar1 = 0xfffffffd;
    break;
  case 5:
    uVar1 = 0xfffffffe;
    break;
  case 6:
    uVar1 = 0xffffffff;
    break;
  case 7:
    uVar1 = 0;
    break;
  case 8:
    uVar1 = 1;
    break;
  case 9:
    uVar1 = 2;
    break;
  case 10:
    uVar1 = 3;
    break;
  case 0xb:
    uVar1 = 4;
    break;
  case 0xc:
    uVar1 = 5;
    break;
  case 0xd:
    uVar1 = 6;
    break;
  case 0xe:
    uVar1 = 7;
  }
  return uVar1;
}
