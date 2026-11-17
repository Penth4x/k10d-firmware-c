/* @k10d map_mode_index_to_constant_103a4002 @ 0x103a4002
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Returns a constant in the 0x2010060-0x201006d range based on two input indices.
 * summary:
 *   The function takes three parameters and uses a nested switch/if structure on param_2
 *   and param_3 to select one of several hardcoded 32-bit values. It returns 0 if the
 *   inputs do not match any defined case. No memory writes or external calls are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_constant_103a4002(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x2010060;
    }
    else if (param_3 == 1) {
      uVar1 = 0x2010061;
    }
    else if (param_3 == 2) {
      uVar1 = 0x2010062;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x2010063;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2010064;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x2010065;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2010066;
    }
    else {
      uVar1 = 0x2010065;
    }
    break;
  case 3:
    uVar1 = 0x2010067;
    break;
  case 4:
    uVar1 = 0x2010068;
    break;
  case 5:
    uVar1 = 0x2010069;
    break;
  case 6:
    uVar1 = 0x201006a;
    break;
  case 7:
    uVar1 = 0x201006b;
    break;
  case 8:
    uVar1 = 0x201006c;
    break;
  case 9:
    uVar1 = 0x201006d;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
