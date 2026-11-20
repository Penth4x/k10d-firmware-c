/* @k10d allocate_lens_update_slot @ 0x1053e45e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Finds or creates a free entry in a lens firmware update table and returns its pointer.
 * summary:
 *   Iterates through a fixed-size array of 0x1c-byte structures pointed to by
 *   _DAT_800149fc. It checks for an existing entry matching a value obtained from
 *   store_result_of_helper_call_1047f986. If no match is found and a free slot (indicated
 *   by a flag of 0) exists, it initializes the slot via init_lens_update_context_1053e40a.
 *   Returns 0 on success with the slot pointer in param_1, or an error code if the table is
 *   full or invalid.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int allocate_lens_update_slot(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uintptr_t sp;
  int iStack_18;
  
  uVar4 = 0x14;
  if (_DAT_800149fc/*SDRAM*/ == 0) {
    iVar1 = -0x259;
  }
  else {
    store_result_of_helper_call_1047f986(&iStack_18);
    uVar2 = 0;
    iVar1 = 0;
    do {
      piVar3 = (int *)((char*)_DAT_800149fc/*SDRAM*/ + iVar1);
      *param_1 = (int)piVar3;
      if (*piVar3 == 1) {
        if (piVar3[1] == iStack_18) {
          return 0;
        }
      }
      else if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x1c;
    } while ((int)uVar2 < 0x14);
    if (uVar4 < 0x14) {
      *param_1 = (int)((char*)_DAT_800149fc/*SDRAM*/ + uVar4 * 0x1c);
      iVar1 = init_lens_update_context_1053e40a((uint32_t *)(*param_1),(uint32_t)(iStack_18));
      if (iVar1 != 0) {
        *param_1 = 0;
      }
    }
    else {
      *param_1 = 0;
      iVar1 = -0x26c;
    }
  }
  return iVar1;
}
