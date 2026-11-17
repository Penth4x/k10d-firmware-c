/* @k10d release_pointer_at_offset_c_10466008 @ 0x10466008
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0xc of the given object and passes it to a single
 *   callee.
 * summary:
 *   The function dereferences param_1 + 0xc and forwards that pointer to
 *   call_subroutine_on_field_0x10, whose role is not verified. It acts as a one-line
 *   wrapper that hands off a single sub-object pointer. No other fields are touched and no
 *   return value is produced.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_c_10466008(int param_1)

{
  call_subroutine_on_field_0x10(*(void **)(param_1 + 0xc));
  return;
}
