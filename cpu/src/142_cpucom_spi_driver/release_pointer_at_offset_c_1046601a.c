/* @k10d release_pointer_at_offset_c_1046601a @ 0x1046601a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0xc of the given object and passes it to a single
 *   callee.
 * summary:
 *   The function dereferences param_1 + 0xc and forwards that pointer to
 *   call_helper_on_field_0x18_1044080e, whose role is not independently verified. No other
 *   operations, side effects, or camera-specific behavior are visible in the code. The
 *   module context suggests a driver, but the function itself only performs a single
 *   pointer pass-through.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_c_1046601a(int param_1)

{
  call_helper_on_field_0x18_1044080e(*(void **)(param_1 + 0xc));
  return;
}
