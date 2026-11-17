/* @k10d map_mode_index_to_constant_103b2d38 @ 0x103b2d38
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Returns a specific 32-bit constant based on two input indices via a nested switch
 *   statement.
 * summary:
 *   The function takes three parameters and uses param_2 and param_3 to select one of
 *   several hardcoded 32-bit values (ranging from 0x20a00a1 to 0x20a00ae). It returns 0 if
 *   param_2 is outside the range 0-9 or if no specific match is found for the given
 *   combination. No memory writes or external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_constant_103b2d38(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x20a00a1;
    }
    else if (param_3 == 1) {
      uVar1 = 0x20a00a2;
    }
    else if (param_3 == 2) {
      uVar1 = 0x20a00a3;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x20a00a4;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20a00a5;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x20a00a6;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20a00a7;
    }
    else {
      uVar1 = 0x20a00a6;
    }
    break;
  case 3:
    uVar1 = 0x20a00a8;
    break;
  case 4:
    uVar1 = 0x20a00a9;
    break;
  case 5:
    uVar1 = 0x20a00aa;
    break;
  case 6:
    uVar1 = 0x20a00ab;
    break;
  case 7:
    uVar1 = 0x20a00ac;
    break;
  case 8:
    uVar1 = 0x20a00ad;
    break;
  case 9:
    uVar1 = 0x20a00ae;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
