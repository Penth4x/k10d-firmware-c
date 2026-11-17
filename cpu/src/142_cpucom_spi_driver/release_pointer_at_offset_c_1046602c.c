/* @k10d release_pointer_at_offset_c_1046602c @ 0x1046602c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0xc of the given object and passes it to a single
 *   callee.
 * summary:
 *   The function dereferences param_1 + 0xc and forwards that pointer to
 *   invoke_object_method_at_offset_0x18_10440820, then returns void. No other fields are
 *   touched and no other callees are invoked. The role of
 *   invoke_object_method_at_offset_0x18_10440820 is not independently verified, so the
 *   operation is described mechanically as releasing the stored pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_c_1046602c(int param_1)

{
  invoke_object_method_at_offset_0x18_10440820(*(void **)(param_1 + 0xc));
  return;
}
