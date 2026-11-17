/* @k10d release_pointer_at_offset_c_10466062 @ 0x10466062
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0xc of the given object and passes it to a single
 *   callee.
 * summary:
 *   The function dereferences param_1 + 0xc and forwards that pointer to
 *   call_helper_on_field_0x18_104407ea. No other operations, strings, or camera-specific
 *   behavior are visible in the code. The role of call_helper_on_field_0x18_104407ea is not
 *   verified, so the specific subsystem or resource type cannot be determined from this
 *   function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_c_10466062(int param_1)

{
  call_helper_on_field_0x18_104407ea(*(void **)(param_1 + 0xc));
  return;
}
