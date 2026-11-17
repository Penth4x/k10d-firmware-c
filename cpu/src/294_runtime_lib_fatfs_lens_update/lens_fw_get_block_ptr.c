/* @k10d lens_fw_get_block_ptr @ 0x1054291a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates a block index and returns a pointer to the lens firmware block descriptor,
 *   initializing it if necessary.
 * summary:
 *   Checks if param_2 is a valid index (1-based) within the limit stored at param_1+0x4c.
 *   If valid, it calculates the offset for the block using the stride at param_1+0x14 and
 *   base at param_1+0x38. It retrieves the descriptor pointer from param_1+0x6c and, if the
 *   descriptor is uninitialized (flag at offset 4 is 1), calls
 *   transfer_data_via_virtual_method and write_buffer_via_virtual_method to populate it.
 *   Finally, it stores the descriptor pointer in *param_3 and returns 0, or -999 if the
 *   index is invalid.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int lens_fw_get_block_ptr(void *param_1,uint param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  int *piVar7;
  int iStack_20;
  
  puVar6 = &stack0xffffffd8;
  bVar1 = false;
  if ((1 < param_2) && (param_2 <= *(uint *)((int)param_1 + 0x4c))) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = *(int *)((int)param_1 + 0x38) + (param_2 - 2) * *(uint *)((int)param_1 + 0x14);
    piVar4 = *(int **)(*(int *)((int)param_1 + 0x6c) + 8);
    if (iVar5 != *piVar4) {
      piVar7 = (int *)&stack0xffffffd8;
      if ((piVar4[1] == 1) &&
         (iVar2 = transfer_data_via_virtual_method((int)param_1,*piVar4,*(uint *)((int)param_1 + 0x14),(int)(piVar4 + 2)
                               ,&iStack_20), piVar7 = (int *)puVar6, iVar2 != 0)) {
        return iVar2;
      }
      uVar3 = *(uint *)((int)param_1 + 0x14);
      *piVar7 = (int)&iStack_20;
      iVar2 = write_buffer_via_virtual_method(param_1,iVar5,uVar3,piVar4 + 2,(int *)*piVar7);
      if (iVar2 != 0) {
        return iVar2;
      }
      *piVar4 = iVar5;
      piVar4[1] = 0;
    }
    *param_3 = (int)piVar4;
    return 0;
  }
  return -999;
}
