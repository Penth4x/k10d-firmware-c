/* @k10d screen_enable_by_key @ 0x1048208c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed enable_screen_entry_if_ready)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Checks if a screen object at a given index is ready via a virtual call and sets its
 *   enabled flags if so.
 * summary:
 *   Calls screen_key_find to resolve an index from param_1 and param_2. If the index is
 *   valid, it retrieves the object pointer from an array at param_1+0xc. It performs a
 *   virtual call (slot 0x4c/8) on the object to check readiness. If the call returns non-
 *   zero, it sets bytes 6 and 7 of the entry to 1 and returns 1, otherwise returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t screen_enable_by_key(void *param_1,uint8_t *param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar1 = screen_key_find(param_1,param_2);
  if ((-1 < iVar1) && (iVar1 < *(int *)((int)param_1 + 0x14))) {
    iVar1 = iVar1 * 8;
    iVar2 = *(int *)(*(int *)((int)param_1 + 0xc) + iVar1);
    iVar4 = *(int *)(iVar2 + 4);
    iVar2 = (**(code **)(iVar4 + 0x4c))(iVar2 + *(short *)(iVar4 + 0x48));
    if (iVar2 != 0) {
      *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar1 + 7) = 1;
      *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar1 + 6) = 1;
      uVar3 = 1;
    }
  }
  return uVar3;
}
