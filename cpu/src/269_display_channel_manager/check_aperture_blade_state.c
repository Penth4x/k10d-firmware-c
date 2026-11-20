/* @k10d check_aperture_blade_state @ 0x10507ab0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Checks a specific bit in an aperture control structure and triggers a virtual update if
 *   a related flag is set.
 * summary:
 *   The function inspects a structure at param_1, specifically a field at offset 0x8c which
 *   appears to be an index (0 or 1) into an array of 0x34-byte elements starting at offset
 *   0x24. It calls check_struct_has_nonzero_bytes to check a condition. If the condition is
 *   met (or specific bytes at offsets 0x2c/0x2d are zero), it copies 4 bytes from offset
 *   0x9c to the stack, acquires a lock (eventflag_clr_flg), calls a virtual method (slot
 *   15) on an object at offset 0x2fc, and releases the lock. Finally, it returns true if
 *   bit 6 (0x40) of the word at offset 0x30 of the selected element is clear. The structure
 *   layout and bit check suggest management of aperture blade positions or states.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_aperture_blade_state(int param_1)

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_10 [8];
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x8c) < 2) {
    iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
  }
  iVar1 = check_struct_has_nonzero_bytes(iVar1 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = 4;
    do {
      iVar3 = iVar1 + -1;
      (&stack0xffffffef)[iVar1] = *(uint8_t *)(iVar3 + param_1 + 0x9c);
      iVar1 = iVar3;
    } while (iVar3 != 0);
    puVar2 = (uint32_t *)(param_1 + 0x328);
    eventflag_clr_flg(puVar2,0x40);
    iVar1 = **(int **)(param_1 + 0x2fc);
    (((vtbl_entry*)(iVar1))[15].fn)
              ((int)*(int **)(param_1 + 0x2fc) + (int)((vtbl_entry*)(iVar1))[15].adj,param_1 + 4,
               *(int *)(param_1 + 0x8c) != 0,auStack_10);
    eventflag_wai_flg(puVar2,0x40,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar2,0x40);
  }
  else {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x8c) < 2) {
      iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
    }
    if (*(char *)(iVar1 + 0x2d) == '\0') {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x8c) < 2) {
        iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
      }
      if (*(char *)(iVar1 + 0x2c) == '\0') goto LAB_10507c08;
    }
    iVar1 = 4;
    do {
      iVar3 = iVar1 + -1;
      auStack_10[iVar1 + 3] = *(uint8_t *)(iVar3 + param_1 + 0x9c);
      iVar1 = iVar3;
    } while (iVar3 != 0);
    puVar2 = (uint32_t *)(param_1 + 0x328);
    eventflag_clr_flg(puVar2,0x40);
    iVar1 = **(int **)(param_1 + 0x2fc);
    (((vtbl_entry*)(iVar1))[15].fn)
              ((int)*(int **)(param_1 + 0x2fc) + (int)((vtbl_entry*)(iVar1))[15].adj,param_1 + 4,
               *(int *)(param_1 + 0x8c) != 0,auStack_10 + 4);
    eventflag_wai_flg(puVar2,0x40,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar2,0x40);
  }
LAB_10507c08:
  iVar1 = 0;
  if (*(int *)(param_1 + 0x8c) < 2) {
    iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
  }
  return (*(uint *)(iVar1 + 0x30) & 0x40) == 0;
}
