/* @k10d validate_lens_fw_update_params @ 0x1053b1b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Checks if the lens firmware update parameters are valid based on a mode and size field.
 * summary:
 *   Reads a mode/size field at offset 0xc of param_2. If it is 0, it requires the field at
 *   0x10 to be non-zero. If it is non-zero, it must be at least 2 and not exceed the value
 *   at offset 0x4c of param_1. Returns 0xfffffc71 on failure, 0 on success. Part of the
 *   lens firmware update module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_lens_fw_update_params(int param_1,void *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)param_2 + 0xc);
  if (uVar1 == 0) {
    if (*(int *)((int)param_2 + 0x10) != 0) {
      return 0xfffffc71;
    }
  }
  else if ((uVar1 < 2) || (*(uint *)(param_1 + 0x4c) < uVar1)) {
    return 0xfffffc71;
  }
  return 0;
}
