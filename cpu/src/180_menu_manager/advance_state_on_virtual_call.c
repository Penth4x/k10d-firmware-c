/* @k10d advance_state_on_virtual_call @ 0x104869b8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slots 3 and 2 on param_2 with arg 0x11 and updates a counter at
 *   param_1+0x40 based on the results.
 * summary:
 *   The function performs a virtual call to slot 3 (offset 0x24) of the object in param_2.
 *   If that returns 0, it calls slot 2 (offset 0x14). Depending on the return values and
 *   the current value of the integer at param_1+0x40, it increments or resets that counter
 *   and returns a flag (0 or 1). The specific camera subsystem role is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t advance_state_on_virtual_call(int param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (((vtbl_entry*)(*param_2))[4].fn)((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,0x11);
  uVar2 = 0;
  if (iVar1 == 0) {
    iVar1 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x11);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 < 4) {
        iVar1 = iVar1 + 1;
      }
      else if (iVar1 < 5) {
        iVar1 = iVar1 + 1;
      }
      else {
        iVar1 = 4;
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = 0;
    uVar2 = 1;
  }
  *(int *)(param_1 + 0x40) = iVar1;
  return uVar2;
}
