/* @k10d forward_six_args_to_helper_10546f8a @ 0x10546f8a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Passes its six parameters to alloc_and_init_lens_fw_buffer with the first and last
 *   arguments forced to zero.
 * summary:
 *   A thin wrapper that calls alloc_and_init_lens_fw_buffer, substituting 0 for the first
 *   argument and 0 for the fifth argument while forwarding param_1, param_2, param_3, and
 *   param_6 in positions 2, 3, 4, and 6 respectively. No other logic, state, or side
 *   effects are visible in this function. The caller's intent and the role of
 *   alloc_and_init_lens_fw_buffer are not determinable from this snippet alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_six_args_to_helper_10546f8a(int param_1,int param_2,void *param_3,uint32_t param_4,uint32_t param_5,
                 void *param_6)

{
  alloc_and_init_lens_fw_buffer(0,param_1,param_2,param_3,param_6,0);
  return;
}
