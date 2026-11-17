/* @k10d release_three_sub_objects @ 0x10466d5a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Releases three sub-objects stored in a structure by calling three cleanup helpers.
 * summary:
 *   The function takes a pointer to a structure and calls three helpers:
 *   call_kernel_with_short_id and check_kernel_call_success_10459d88 on the value at offset
 *   0x30, and clear_flag_with_notify on the value at offset 0x1c. This pattern is
 *   consistent with a destructor or cleanup routine that frees or deactivates member
 *   objects. The specific subsystem is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_three_sub_objects(int param_1)

{
  call_kernel_with_short_id(*(uint32_t **)(param_1 + 0x30));
  clear_flag_with_notify(*(void **)(param_1 + 0x1c));
  check_kernel_call_success_10459d88(*(uint32_t **)(param_1 + 0x30));
  return;
}
