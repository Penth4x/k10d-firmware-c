/* @k10d release_struct_fields_10466d06 @ 0x10466d06
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls three cleanup helpers on specific fields of a passed-in struct.
 * summary:
 *   Takes a pointer to a struct and calls call_kernel_with_short_id on the field at offset
 *   0x30, set_flag_with_notify on the field at offset 0x18, and
 *   check_kernel_call_success_10459d88 on the field at offset 0x30. The sequence suggests
 *   releasing or resetting resources associated with these struct members. The specific
 *   subsystem or data type is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_struct_fields_10466d06(void *param_1)

{
  call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x30));
  set_flag_with_notify(*(void **)((int)param_1 + 0x18));
  check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x30));
  return;
}
