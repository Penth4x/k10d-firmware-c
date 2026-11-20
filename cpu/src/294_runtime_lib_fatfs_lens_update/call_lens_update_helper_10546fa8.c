/* @k10d call_lens_update_helper_10546fa8 @ 0x10546fa8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function (alloc_and_init_lens_fw_buffer) and returns.
 * summary:
 *   This function is a one-line wrapper that calls alloc_and_init_lens_fw_buffer with no
 *   arguments. It resides in the lens_firmware_update module, which handles lens CPU
 *   firmware updates. The specific role of the callee is not provided, so the wrapper's
 *   exact purpose is limited to delegating to that helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_lens_update_helper_10546fa8(int param_1,int param_2,int param_3,void *param_4)

{
  alloc_and_init_lens_fw_buffer(param_1,param_2,param_3,param_4,(void *)0x0,1);
  return;
}
