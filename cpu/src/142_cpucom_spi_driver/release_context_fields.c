/* @k10d release_context_fields @ 0x104660aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls three cleanup helpers on fields at offsets 0x24 and 0x10 of a passed-in
 *   structure.
 * summary:
 *   The function takes a pointer to an opaque structure. It passes the pointer at offset
 *   0x24 to call_kernel_with_short_id, the pointer at offset 0x10 to
 *   clear_flag_with_notify, and the pointer at offset 0x24 again to
 *   check_kernel_call_success_10459d88. The specific subsystem or resource type is not
 *   identifiable from the pseudocode alone, though the pattern suggests releasing or
 *   finalizing resources held by the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_context_fields(void *param_1)

{
  call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x24));
  clear_flag_with_notify(*(void **)((int)param_1 + 0x10));
  check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x24));
  return;
}
