/* @k10d lookup_table_address_by_index @ 0x103b2e94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a table entry based on two integer indices.
 * summary:
 *   The function uses a nested switch statement on param_2 and param_3 to select one of
 *   several hardcoded addresses in the 0x20a00af-0x20a00bc range. It returns 0 if the
 *   indices do not match a valid combination. No callees are invoked, and the specific
 *   meaning of the returned addresses is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t lookup_table_address_by_index(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x20a00af;
    }
    else if (param_3 == 1) {
      uVar1 = 0x20a00b0;
    }
    else if (param_3 == 2) {
      uVar1 = 0x20a00b1;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x20a00b2;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20a00b3;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x20a00b4;
    }
    else if (param_3 == 3) {
      uVar1 = 0x20a00b5;
    }
    else {
      uVar1 = 0x20a00b4;
    }
    break;
  case 3:
    uVar1 = 0x20a00b6;
    break;
  case 4:
    uVar1 = 0x20a00b7;
    break;
  case 5:
    uVar1 = 0x20a00b8;
    break;
  case 6:
    uVar1 = 0x20a00b9;
    break;
  case 7:
    uVar1 = 0x20a00ba;
    break;
  case 8:
    uVar1 = 0x20a00bb;
    break;
  case 9:
    uVar1 = 0x20a00bc;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
