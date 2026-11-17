/* @k10d release_pointer_at_offset_c_1046603e @ 0x1046603e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0xc of the given object and passes it to a single
 *   callee.
 * summary:
 *   The function dereferences param_1 + 0xc and forwards that pointer to
 *   invoke_object_method_at_offset_0x18_1044087a, then returns. No other operations, flags,
 *   or side effects are visible in the pseudocode. The callee's role is not independently
 *   verified, so the specific subsystem (e.g., SPI transaction context) cannot be confirmed
 *   from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_c_1046603e(int param_1)

{
  invoke_object_method_at_offset_0x18_1044087a(*(void **)(param_1 + 0xc));
  return;
}
