/* @k10d call_helper_on_struct_offset_0x10c_1043e7fe @ 0x1043e7fe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes a pointer to the field at offset 0x10c of the object in param_1 to
 *   call_kernel_with_short_id.
 * summary:
 *   The function takes a single object pointer, computes the address of the member at
 *   offset 0x10c, and passes that address to the callee call_kernel_with_short_id. It
 *   performs no other operations and returns void. The role of call_kernel_with_short_id
 *   and the specific subsystem are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_offset_0x10c_1043e7fe(int param_1)

{
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x10c));
  return;
}
