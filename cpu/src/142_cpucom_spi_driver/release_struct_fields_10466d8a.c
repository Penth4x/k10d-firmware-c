/* @k10d release_struct_fields_10466d8a @ 0x10466d8a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes three cleanup routines on specific fields of a passed structure.
 * summary:
 *   The function takes a pointer to a structure and calls call_kernel_with_short_id and
 *   check_kernel_call_success_10459d88 on the pointer stored at offset 0x30, and
 *   set_flag_with_notify on the pointer stored at offset 0x1c. It is a virtual method (slot
 *   6) in class cls_105a9ac8. The specific resources being released are unknown as the
 *   callees are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_struct_fields_10466d8a(void *param_1)

{
  call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x30));
  set_flag_with_notify(*(void **)((int)param_1 + 0x1c));
  check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x30));
  return;
}
