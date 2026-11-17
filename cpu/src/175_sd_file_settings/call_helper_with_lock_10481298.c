/* @k10d call_helper_with_lock_10481298 @ 0x10481298
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Locks a field, calls a helper with a stored pointer and param_2, then unlocks the
 *   field.
 * summary:
 *   The function calls call_kernel_with_short_id on the field at offset 0xc of param_1,
 *   likely acquiring a lock or setting a state. It then calls store_two_results_in_struct,
 *   passing the value at offset 8 of param_1 and param_2, and stores the result. Finally,
 *   it calls check_kernel_call_success_10459d88 on the field at offset 0xc, likely
 *   releasing the lock or resetting the state, and returns the result from
 *   store_two_results_in_struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_lock_10481298(int param_1,void *param_2)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uVar1 = store_two_results_in_struct(*(int *)(param_1 + 8),param_2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
