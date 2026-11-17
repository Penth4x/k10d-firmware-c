/* @k10d map_mode_index_to_constant_103b2b3a @ 0x103b2b3a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Returns a specific 32-bit constant based on two integer index parameters.
 * summary:
 *   The function uses a nested switch statement on param_2 and param_3 to select one of
 *   several hardcoded values (ranging from 0x20a0085 to 0x20a0092) or zero. It has no
 *   callees and performs no memory writes, acting purely as a lookup table. The specific
 *   meaning of the returned constants is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_constant_103b2b3a(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x20a0085;
    }
    else if (param_3 == 1) {
      uVar1 = 0x20a0086;
    }
    else if (param_3 == 2) {
      uVar1 = 0x20a0087;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x20a0088;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20a0089;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x20a008a;
    }
    else {
      uVar1 = 0x20a008b;
    }
    break;
  case 3:
    uVar1 = 0x20a008c;
    break;
  case 4:
    uVar1 = 0x20a008d;
    break;
  case 5:
    uVar1 = 0x20a008e;
    break;
  case 6:
    uVar1 = 0x20a008f;
    break;
  case 7:
    uVar1 = 0x20a0090;
    break;
  case 8:
    uVar1 = 0x20a0091;
    break;
  case 9:
    uVar1 = 0x20a0092;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
