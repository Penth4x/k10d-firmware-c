/* @k10d check_lens_fw_update_ready @ 0x10543aec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates lens firmware update preconditions and initiates the update sequence if
 *   ready.
 * summary:
 *   Calls a helper to retrieve lens status data, checks if the lens is in a specific state
 *   (field 2 == 1) and a sub-status flag is clear. If conditions are met, it calls another
 *   helper and then decrement_lens_update_step to proceed with the update. Returns error
 *   codes -6 or -9 if preconditions fail.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int check_lens_fw_update_ready(uint32_t param_1)

{
  uint16_t uVar1;
  int iVar2;
  int *piVar3;
  uintptr_t sp;
  uint32_t *puStack_c;
  
  iVar2 = (*(code *)0x10538c70/*ROM*/)(param_1,&puStack_c);
  if (iVar2 == 0) {
    piVar3 = (int *)*puStack_c;
    if (piVar3[2] == 1) {
      if (*(short *)(*(int *)(piVar3[3] + 100) + 0xe) == 0) {
        uVar1 = *(uint16_t *)(puStack_c + 1);
        iVar2 = (*(code *)0x10538c98/*ROM*/)(param_1);
        if (iVar2 == 0) {
          iVar2 = decrement_lens_update_step(uVar1,piVar3);
        }
      }
      else {
        iVar2 = -6;
      }
    }
    else {
      iVar2 = -9;
    }
  }
  return iVar2;
}
