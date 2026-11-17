/* @k10d release_object_at_offset_0x14_1046615e @ 0x1046615e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x14 of the input object to a single callee for
 *   release or cleanup.
 * summary:
 *   The function dereferences param_1+0x14 and forwards that pointer to
 *   clear_flag_if_active, whose role is not independently verified. It acts as a one-line
 *   wrapper that hands off a sub-object for deallocation or state reset. No camera-specific
 *   or CPUcom-specific behavior is evident from the code itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x14_1046615e(int param_1)

{
  clear_flag_if_active(*(void **)(param_1 + 0x14));
  return;
}
