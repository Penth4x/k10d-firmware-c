/* @k10d validate_and_dispatch_lens_state @ 0x10543a46
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Checks a lens object's state and sub-field, then calls a sequence of helpers if valid.
 * summary:
 *   Retrieves a lens object via a helper, verifies its state is 2 and a specific short
 *   field is zero. If conditions are met, it calls two preparation functions and then a
 *   final dispatch function. Returns error codes -6 or -9 for invalid states.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int validate_and_dispatch_lens_state(uint32_t param_1)

{
  uint16_t uVar1;
  int iVar2;
  int extraout_r4;
  int iVar3;
  int *piVar4;
  uintptr_t sp;
  int *piStack_c;
  
  iVar2 = (*(code *)0x10538c70/*ROM*/)(param_1,&piStack_c);
  if (iVar2 == 0) {
    if (*(int *)(*piStack_c + 8) == 2) {
      iVar3 = *(int *)(*piStack_c + 0xc);
      if (*(short *)(*(int *)(iVar3 + 100) + 0xe) == 0) {
        if (((*(short *)((int)piStack_c + 6) == 0) || (piStack_c[2] != 0)) ||
           ((lens_fw_update_step_1053db22(iVar3), iVar2 = extraout_r4, extraout_r4 == 0 &&
            (iVar2 = validate_and_swap_block_fields((void *)(iVar3),(int *)(*piStack_c + 0x10),(void *)(piStack_c)), iVar2 == 0)))) {
          piVar4 = (int *)*piStack_c;
          uVar1 = *(uint16_t *)(piStack_c + 1);
          iVar2 = (*(code *)0x10538c98/*ROM*/)(param_1);
          if (iVar2 == 0) {
            iVar2 = decrement_lens_update_step(uVar1,piVar4);
          }
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
