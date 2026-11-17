/* @k10d release_pointer_at_offset_c_10466098 @ 0x10466098
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0xc of the given object and passes it to a single
 *   callee.
 * summary:
 *   The function dereferences param_1 + 0xc and forwards that pointer to
 *   invoke_object_method_at_offset_0x14, then returns void. No other operations, flags, or
 *   side effects are visible in the pseudocode. The callee's exact behavior is not
 *   independently verified, so the specific resource being released cannot be confirmed
 *   from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_c_10466098(int param_1)

{
  invoke_object_method_at_offset_0x14(*(void **)(param_1 + 0xc));
  return;
}
