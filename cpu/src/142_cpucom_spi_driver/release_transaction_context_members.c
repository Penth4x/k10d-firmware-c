/* @k10d release_transaction_context_members @ 0x10466bf0
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Releases and resets member objects of a transaction context structure.
 * summary:
 *   The function takes a pointer to a context object and calls release/destroy functions on
 *   members at offsets 0x18, 0x1c, and 0x30. It invokes virtual methods on the object at
 *   offset 0x20 (slots 2, 5, and 10) and calls clear_flag_if_active on that same member.
 *   The pattern is consistent with a cleanup routine for a multi-member context object, but
 *   the specific subsystem (e.g., CPUcom) is not verifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_transaction_context_members(void *param_1)

{
  int iVar1;
  
  call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x30));
  set_flag_with_notify(*(void **)((int)param_1 + 0x1c));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x1c));
  clear_flag_with_notify(*(void **)((int)param_1 + 0x18));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x18));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x20) + 4);
  (((vtbl_entry*)(iVar1))[12].fn)(*(int *)((int)param_1 + 0x20) + (int)((vtbl_entry*)(iVar1))[12].adj);
  clear_flag_if_active(*(void **)((int)param_1 + 0x20));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x20) + 4);
  (((vtbl_entry*)(iVar1))[9].fn)(*(int *)((int)param_1 + 0x20) + (int)((vtbl_entry*)(iVar1))[9].adj);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x20) + 4);
  (((vtbl_entry*)(iVar1))[16].fn)(*(int *)((int)param_1 + 0x20) + (int)((vtbl_entry*)(iVar1))[16].adj);
  check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x30));
  return 1;
}
