/* @k10d resolve_status_segment_mask @ 0x1046bc7e
 * name: model (proposed by the local model from the decompile, confidence 0.82)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Computes the active segment mask for a status-LCD item by ANDing the input with a
 *   global mask and, if needed, reading the item's stored byte.
 * summary:
 *   Reads the global mask bRam105a6938 and ANDs it with param_2. Calls
 *   check_even_value_in_set; if it returns 0, fetches the descriptor for status item 0x2e
 *   via status_item_location, reads the byte at param_1 + 0x1c + offset, ANDs with the
 *   mask, and calls check_even_value_in_set again. Maps specific mask values (2->10,
 *   0x1a->0x18) and defaults to 8 on failure. Used by screen_mgr_render to build per-byte
 *   segment masks for the status LCD.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte resolve_status_segment_mask(int param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  bVar1 = bRam105a6938;
  param_2 = param_2 & bRam105a6938;
  iVar2 = check_even_value_in_set(__frv_reg_unset(4), __frv_reg_unset(5));
  if (iVar2 == 0) {
    piVar3 = (int *)status_item_location(0x2e);
    param_2 = *(byte *)(param_1 + 0x1c + *piVar3) & bVar1;
    iVar2 = check_even_value_in_set(param_1,param_2);
    if (iVar2 == 0) {
      param_2 = 8;
    }
    else if (param_2 == 2) {
      param_2 = 10;
    }
    else if (param_2 == 0x1a) {
      param_2 = 0x18;
    }
  }
  else if (param_2 == 2) {
    param_2 = 10;
  }
  else if (param_2 == 0x1a) {
    param_2 = 0x18;
  }
  return param_2;
}
