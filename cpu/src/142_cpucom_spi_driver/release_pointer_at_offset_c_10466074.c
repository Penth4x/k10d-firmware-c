/* @k10d release_pointer_at_offset_c_10466074 @ 0x10466074
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0xc of the given structure to a single callee.
 * summary:
 *   The function reads the 32-bit value at param_1 + 0xc and passes it as the sole argument
 *   to call_object_method_at_offset_0x14. No other operations are performed. The specific
 *   role of call_object_method_at_offset_0x14 is not verified, so the operation is
 *   described mechanically as releasing or processing the pointer value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_c_10466074(int param_1)

{
  call_object_method_at_offset_0x14(*(uint32_t *)(param_1 + 0xc));
  return;
}
