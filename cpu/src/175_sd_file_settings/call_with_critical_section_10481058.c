/* @k10d call_with_critical_section_10481058 @ 0x10481058
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a target function with two arguments, releases the lock, and
 *   returns the result.
 * summary:
 *   The function calls call_kernel_with_short_id on the pointer at offset 0xc of param_1,
 *   likely acquiring a mutex or disabling interrupts. It then calls
 *   process_event_and_update_state_1047fef6 with the value at offset 8 of param_1, param_2,
 *   and param_3. Finally, it calls check_kernel_call_success_10459d88 on the same pointer
 *   at offset 0xc, likely releasing the lock, and returns the result from
 *   process_event_and_update_state_1047fef6. The pattern strongly suggests a critical
 *   section wrapper around a specific operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_critical_section_10481058(int param_1,uint32_t param_2,void *param_3)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uVar1 = process_event_and_update_state_1047fef6(*(uint32_t *)(param_1 + 8),param_2,param_3);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
