/* @k10d call_kernel_with_short_id @ 0x10459d74
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Extracts the low 16 bits of the first argument and passes them with 0xffffffff to
 *   allocate_kernel_object_10010fe0.
 * summary:
 *   A one-line wrapper that reads the first two bytes of param_1 as a signed short, sign-
 *   extends it to 32 bits, and forwards it along with the constant 0xffffffff to
 *   allocate_kernel_object_10010fe0. It lives in the rtos_wrappers_and_heap module
 *   alongside heap and mailbox wrappers, suggesting it is a thin kernel-entry helper, but
 *   the specific kernel operation is not identifiable from the callee name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_kernel_with_short_id(uint32_t *param_1)

{
  allocate_kernel_object_10010fe0((int)(short)*param_1,0xffffffff);
  return;
}
