/* @k10d map_mode_index_to_resource_id_103ad9ee @ 0x103ad9ee
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Returns a specific 0x20900xx identifier based on two input indices.
 * summary:
 *   The function takes three parameters and uses a nested switch statement on param_2 and
 *   param_3 to select one of several hardcoded 32-bit values in the 0x209004b-0x2090058
 *   range. It returns 0 if the inputs do not match a defined case. No memory writes or
 *   external calls are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_resource_id_103ad9ee(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x209004b;
    }
    else if (param_3 == 1) {
      uVar1 = 0x209004c;
    }
    else if (param_3 == 2) {
      uVar1 = 0x209004d;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x209004e;
    }
    else if (param_3 == 3) {
      uVar1 = 0x209004f;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x2090050;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2090051;
    }
    else {
      uVar1 = 0x2090050;
    }
    break;
  case 3:
    uVar1 = 0x2090052;
    break;
  case 4:
    uVar1 = 0x2090053;
    break;
  case 5:
    uVar1 = 0x2090054;
    break;
  case 6:
    uVar1 = 0x2090055;
    break;
  case 7:
    uVar1 = 0x2090056;
    break;
  case 8:
    uVar1 = 0x2090057;
    break;
  case 9:
    uVar1 = 0x2090058;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
