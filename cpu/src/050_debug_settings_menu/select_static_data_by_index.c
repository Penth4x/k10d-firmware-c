/* @k10d select_static_data_by_index @ 0x103b2c8a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a static data object based on two index parameters.
 * summary:
 *   The function uses a nested switch statement on param_2 and param_3 to select one of
 *   several hardcoded addresses in the 0x20a00xx range. It returns 0 if the combination
 *   does not match a known case. No memory writes or external calls are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_static_data_by_index(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x20a00bd;
    }
    else if (param_3 == 1) {
      uVar1 = 0x20a00be;
    }
    else if (param_3 == 2) {
      uVar1 = 0x20a00bf;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x20a00c0;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20a00c1;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x20a00c2;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20a00c3;
    }
    else {
      uVar1 = 0x20a00c2;
    }
    break;
  case 3:
    uVar1 = 0x20a00c4;
    break;
  case 4:
    uVar1 = 0x20a00c5;
    break;
  case 5:
    uVar1 = 0x20a00c6;
    break;
  case 6:
    uVar1 = 0x20a00c7;
    break;
  case 7:
    uVar1 = 0x20a00c8;
    break;
  case 8:
    uVar1 = 0x20a00c9;
    break;
  case 9:
    uVar1 = 0x20a00ca;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
