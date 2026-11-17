/* @k10d map_mode_index_to_constant_103b2be2 @ 0x103b2be2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Returns a specific 32-bit constant based on two integer index parameters.
 * summary:
 *   The function uses a nested switch statement on param_2 and param_3 to select one of
 *   several hardcoded 32-bit values (ranging from 0x20a0093 to 0x20a00a0). It returns 0 if
 *   the parameters do not match any defined case. No memory writes or external function
 *   calls are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_constant_103b2be2(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x20a0093;
    }
    else if (param_3 == 1) {
      uVar1 = 0x20a0094;
    }
    else if (param_3 == 2) {
      uVar1 = 0x20a0095;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x20a0096;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20a0097;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x20a0098;
    }
    else {
      uVar1 = 0x20a0099;
    }
    break;
  case 3:
    uVar1 = 0x20a009a;
    break;
  case 4:
    uVar1 = 0x20a009b;
    break;
  case 5:
    uVar1 = 0x20a009c;
    break;
  case 6:
    uVar1 = 0x20a009d;
    break;
  case 7:
    uVar1 = 0x20a009e;
    break;
  case 8:
    uVar1 = 0x20a009f;
    break;
  case 9:
    uVar1 = 0x20a00a0;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
