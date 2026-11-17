/* @k10d release_pointer_at_offset_c_10465ff6 @ 0x10465ff6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0xc of the given object and passes it to a single
 *   callee.
 * summary:
 *   The function dereferences param_1 + 0xc and forwards that pointer to
 *   call_helper_on_offset_0x10, then returns void. No other operations, flags, or side
 *   effects are visible in the pseudocode. The callee call_helper_on_offset_0x10 is not
 *   independently verified, so its exact role (e.g., free, close, or release) cannot be
 *   confirmed from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_c_10465ff6(int param_1)

{
  call_helper_on_offset_0x10(*(void **)(param_1 + 0xc));
  return;
}
