/* @k10d query_exposure_mode_state_10507d2e @ 0x10507d2e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag in an exposure mode entry to determine if a specific exposure mode is
 *   active or valid.
 * summary:
 *   The function selects an entry from an array of 0x34-byte structures based on a count at
 *   param_1+0x8c. It performs a virtual call on an object at param_1+0x2fc, passing
 *   different offsets (param_1+0x1c4 vs param_1+0x94) depending on param_2. It then checks
 *   bit 2 or bit 1 of the 0x30 offset in the selected structure to return 1 or 0. The use
 *   of param_2 to switch between two different data offsets and flag bits suggests it is
 *   distinguishing between two exposure modes (e.g., Tv vs Av) or states.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t query_exposure_mode_state_10507d2e(int param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  int iVar3;
  
  puVar2 = (uint32_t *)(param_1 + 0x328);
  if (param_2 == 0) {
    eventflag_clr_flg(puVar2,4);
    iVar3 = **(int **)(param_1 + 0x2fc);
    (((vtbl_entry*)(iVar3))[8].fn)
              ((int)*(int **)(param_1 + 0x2fc) + (int)((vtbl_entry*)(iVar3))[8].adj,param_1 + 4,
               param_1 + 0x1c4);
    eventflag_wai_flg(puVar2,4,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar2,4);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x8c) < 2) {
      iVar3 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
    }
    uVar1 = 1;
    if ((*(uint *)(iVar3 + 0x30) & 4) != 0) {
      uVar1 = 0;
    }
  }
  else {
    eventflag_clr_flg(puVar2,2);
    iVar3 = **(int **)(param_1 + 0x2fc);
    (((vtbl_entry*)(iVar3))[7].fn)
              ((int)*(int **)(param_1 + 0x2fc) + (int)((vtbl_entry*)(iVar3))[7].adj,param_1 + 4,
               param_1 + 0x94);
    eventflag_wai_flg(puVar2,2,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar2,2);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x8c) < 2) {
      iVar3 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
    }
    uVar1 = 1;
    if ((*(uint *)(iVar3 + 0x30) & 2) != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
