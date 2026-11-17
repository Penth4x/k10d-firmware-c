/* @k10d write_block_with_offset_check @ 0x105396ce
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a data block to a device, validating the offset against a size limit and
 *   handling buffer reallocation if needed.
 * summary:
 *   The function checks if the calculated offset (param_3 * 0x20) exceeds the size stored
 *   at param_1+0x10. If it does, it calls unsigned_divide to potentially resize the buffer
 *   and dispatch_lens_fw_update_step_1053d2bc to perform the write. It then validates the
 *   result against a limit at param_1+0x50. Finally, it calls lens_fw_get_block_ptr to
 *   finalize the operation and updates the output pointer param_4 with the new offset. The
 *   specific device or data type is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_block_with_offset_check(void *param_1,uint param_2,int param_3,int *param_4,uint32_t *param_5,
                uint *param_6)

{
  int iVar1;
  uint uVar2;
  uintptr_t sp;
  uint uStack_20;
  int iStack_1c;
  
  *param_5 = *(uint32_t *)((int)param_1 + 0x18);
  uVar2 = (param_3 + -1) * 0x20;
  if (uVar2 < *(uint *)((int)param_1 + 0x10)) {
    *param_6 = param_2;
  }
  else {
    uStack_20 = unsigned_divide(uVar2,*(uint *)((int)param_1 + 0x10));
    iVar1 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,param_2,uStack_20,param_6);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (*(uint *)((int)param_1 + 0x50) < *param_6) {
      return -2;
    }
  }
  iVar1 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,*param_6,1,&uStack_20);
  if ((iVar1 == 0) && (iVar1 = lens_fw_get_block_ptr(param_1,*param_6,&iStack_1c), iVar1 == 0)) {
    *param_4 = iStack_1c + 8;
  }
  return iVar1;
}
