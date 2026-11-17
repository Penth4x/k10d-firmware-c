/* @k10d map_mode_index_to_table_offset @ 0x103ad940
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Returns a fixed 32-bit value from a contiguous range based on two integer selector
 *   parameters.
 * summary:
 *   The function uses a nested switch statement on param_2 and param_3 to select one of
 *   several hardcoded constants between 0x209003d and 0x209004a. It returns 0 if the inputs
 *   do not match any defined case. No memory writes or external function calls are
 *   performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_table_offset(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x209003d;
    }
    else if (param_3 == 1) {
      uVar1 = 0x209003e;
    }
    else if (param_3 == 2) {
      uVar1 = 0x209003f;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x2090040;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2090041;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x2090042;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2090043;
    }
    else {
      uVar1 = 0x2090042;
    }
    break;
  case 3:
    uVar1 = 0x2090044;
    break;
  case 4:
    uVar1 = 0x2090045;
    break;
  case 5:
    uVar1 = 0x2090046;
    break;
  case 6:
    uVar1 = 0x2090047;
    break;
  case 7:
    uVar1 = 0x2090048;
    break;
  case 8:
    uVar1 = 0x2090049;
    break;
  case 9:
    uVar1 = 0x209004a;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
