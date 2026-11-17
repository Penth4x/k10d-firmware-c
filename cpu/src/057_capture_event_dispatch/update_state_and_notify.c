/* @k10d update_state_and_notify @ 0x103c748a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 057_capture_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Compares an input value against a current state, updates it if different, and triggers
 *   a notification sequence.
 * summary:
 *   The function retrieves a current value via call_two_helpers_in_sequence_10491ff0. If
 *   the input parameter differs, it calls request_ui_sync_with_flag_10491f5c to update the
 *   state associated with the object pointer. It then unconditionally calls
 *   call_two_helpers_in_sequence_104920f2, likely to signal a change or refresh. Finally,
 *   it retrieves a pointer from get_or_create_singleton_object_103b9478 and passes its
 *   second field to forward_uint_to_helper, possibly for logging or further processing. The
 *   function serves as a virtual method slot 7 for multiple classes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_and_notify(uint32_t *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = call_two_helpers_in_sequence_10491ff0();
  if (param_2 != iVar1) {
    request_ui_sync_with_flag_10491f5c((void *)*param_1,param_2);
  }
  call_two_helpers_in_sequence_104920f2(*param_1);
  iVar1 = get_or_create_singleton_object_103b9478();
  forward_uint_to_helper(*(uint32_t *)(iVar1 + 4));
  return;
}
