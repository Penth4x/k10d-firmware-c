/* @k10d release_three_struct_fields @ 0x104660da
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls three helper functions on fields at offsets 0x10 and 0x24 of a passed-in
 *   structure.
 * summary:
 *   Takes a single pointer argument and invokes call_kernel_with_short_id on the field at
 *   offset 0x24, set_flag_with_notify on the field at offset 0x10, and
 *   check_kernel_call_success_10459d88 on the field at offset 0x24. The pattern suggests a
 *   cleanup or destructor routine for a structure with at least two pointer members, but
 *   the specific subsystem or object type cannot be determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_three_struct_fields(int param_1)

{
  call_kernel_with_short_id(*(uint32_t **)(param_1 + 0x24));
  set_flag_with_notify(*(void **)(param_1 + 0x10));
  check_kernel_call_success_10459d88(*(uint32_t **)(param_1 + 0x24));
  return;
}
