/* @k10d read_ui_state_field @ 0x10492b84
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Reads a value from an object field at offset 4, guarded by a lock/unlock pair on offset
 *   0x24.
 * summary:
 *   The function calls call_kernel_with_short_id on the pointer at param_1+0x24, likely
 *   acquiring a lock or preparing a state. It then checks if param_3 is 0, 1, or 2; if so,
 *   it calls reg_framework_send on param_1+4 to retrieve a value. Finally, it calls
 *   check_kernel_call_success_10459d88 on param_1+0x24, likely releasing the lock, and
 *   returns the retrieved value (or 0 if the condition failed). The callers are UI-related
 *   functions (ui_post_input, ui_request_sync), suggesting this accesses UI state or
 *   configuration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_ui_state_field(int param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x24));
  iVar1 = 0;
  if (((param_3 == 0) || (param_3 == 1)) || (param_3 == 2)) {
    iVar1 = reg_framework_send(param_1 + 4, (void *)(uintptr_t)param_2, 0x3);
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x24));
  return iVar1;
}
