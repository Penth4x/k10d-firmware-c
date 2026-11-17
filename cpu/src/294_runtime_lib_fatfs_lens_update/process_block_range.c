/* @k10d process_block_range @ 0x1053db60
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates over up to 10 block descriptors and processes data within a specified range
 *   using dispatch_lens_fw_update_step_1053d2bc.
 * summary:
 *   Reads a pointer to an array of 10 block descriptors from param_1+0x68. For each
 *   descriptor with a non-zero length, it calls dispatch_lens_fw_update_step_1053d2bc
 *   repeatedly to process data within the range defined by param_1+0x4c and param_1+0x50.
 *   Returns 0 on success or error codes on failure. The specific nature of the blocks and
 *   the processing is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_block_range(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  uint uStack_1c;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x68) + 0x1c);
  uVar3 = 2;
  uVar5 = 0;
  do {
    if (*(int *)(iVar1 + uVar5 * 8 + 4) != 0) {
      if (uVar3 != *(uint *)(uVar5 * 8 + iVar1)) {
        uVar4 = 0;
        do {
          iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,uVar3,1,&uStack_1c);
          if (iVar2 == 0) {
            uVar4 = uVar4 + 1;
            if ((uStack_1c < 2) ||
               (((*(uint *)((int)param_1 + 0x4c) < uStack_1c &&
                 (uStack_1c <= *(uint *)((int)param_1 + 0x50))) ||
                (uVar3 = uStack_1c, *(uint *)((int)param_1 + 0x4c) < uVar4)))) {
              return -0x390;
            }
          }
          else {
            if (iVar2 != -0x390) {
              return iVar2;
            }
            if (uVar4 != 0) {
              return -0x390;
            }
            if (uVar3 == *(uint *)((int)param_1 + 0x4c)) break;
            uVar3 = uVar3 + 1;
          }
        } while (uVar3 <= *(uint *)((int)param_1 + 0x50));
      }
      uVar3 = *(int *)(uVar5 * 8 + iVar1) + *(int *)(uVar5 * 8 + iVar1 + 4);
      if (*(uint *)((int)param_1 + 0x4c) <= uVar3) {
        return 0;
      }
    }
    uVar5 = uVar5 + 1;
    if (9 < uVar5) {
      return 0;
    }
  } while( true );
}
