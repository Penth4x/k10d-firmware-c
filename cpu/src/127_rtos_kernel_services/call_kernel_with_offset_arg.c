/* @k10d call_kernel_with_offset_arg @ 0x10459ad2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Passes a pointer offset by 0x14 from param_1 to mbx_receive_message_1045994c and
 *   returns its result.
 * summary:
 *   A thin one-call wrapper in the rtos_wrappers_and_heap module. It computes param_1 +
 *   0x14 and forwards it (along with in_r5) to mbx_receive_message_1045994c, returning that
 *   callee's value unchanged. The role of mbx_receive_message_1045994c is not yet known, so
 *   the specific kernel operation cannot be identified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_kernel_with_offset_arg(int param_1)

{
  uint32_t uVar1;
  uint32_t *r5_in;
  
  uVar1 = mbx_receive_message_1045994c((uint32_t *)(param_1 + 0x14),r5_in);
  return uVar1;
}
