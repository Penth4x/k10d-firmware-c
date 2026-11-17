/* @k10d select_static_address_by_index @ 0x103b2de6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Returns a hardcoded address from a small table based on two index parameters.
 * summary:
 *   The function uses a switch statement on param_2 and nested checks on param_3 to select
 *   one of several hardcoded addresses in the 0x20a00xx range. It returns 0 if the
 *   parameters do not match a valid combination. No memory writes or hardware interactions
 *   are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_static_address_by_index(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x20a00cb;
    }
    else if (param_3 == 1) {
      uVar1 = 0x20a00cc;
    }
    else if (param_3 == 2) {
      uVar1 = 0x20a00cd;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x20a00ce;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20a00cf;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x20a00d0;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20a00d1;
    }
    else {
      uVar1 = 0x20a00d0;
    }
    break;
  case 3:
    uVar1 = 0x20a00d2;
    break;
  case 4:
    uVar1 = 0x20a00d3;
    break;
  case 5:
    uVar1 = 0x20a00d4;
    break;
  case 6:
    uVar1 = 0x20a00d5;
    break;
  case 7:
    uVar1 = 0x20a00d6;
    break;
  case 8:
    uVar1 = 0x20a00d7;
    break;
  case 9:
    uVar1 = 0x20a00d8;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
