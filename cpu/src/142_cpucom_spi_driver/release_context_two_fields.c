/* @k10d release_context_two_fields @ 0x10466cd6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls three helpers on two fields of a context struct to release or clean up its
 *   resources.
 * summary:
 *   The function takes a pointer to a context structure and calls three helper functions.
 *   It first calls call_kernel_with_short_id with the value at offset 0x30, then calls
 *   clear_flag_with_notify with the value at offset 0x18, and finally calls
 *   check_kernel_call_success_10459d88 with the value at offset 0x30. The pattern of
 *   calling cleanup functions on different fields of the context suggests this is a
 *   destructor or release function for a generic context object. The specific subsystem is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_context_two_fields(void *param_1)

{
  call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x30));
  clear_flag_with_notify(*(void **)((int)param_1 + 0x18));
  check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x30));
  return;
}
