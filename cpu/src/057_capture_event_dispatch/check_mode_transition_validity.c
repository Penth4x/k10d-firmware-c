/* @k10d check_mode_transition_validity @ 0x103c7356
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 057_capture_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Validates a requested state change by checking current mode, flags, and transition
 *   rules.
 * summary:
 *   The function first calls forward_two_params_via_helper twelve times with specific
 *   integer constants (0x29, 0, 3, 0x18, 0xc, 0x19, 9, 10, 0x11, 0x2c, 7, 0x1e, 0x1f) to
 *   likely reset or configure internal state bits. It then queries the current state via
 *   call_helper_on_field_0x18_10491fde and compares it against the requested state in
 *   param_2. If they differ, it calls request_ui_sync_with_flag_10491f36 to check
 *   transition validity, masking the result with flags from call_predicate_with_two_args
 *   and request_ui_sync_with_flag_10491f5c. Finally, it checks a condition via
 *   set_byte_at_offset_0x1c and returns a boolean indicating if the transition is
 *   permitted.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_mode_transition_validity(uint32_t *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  
  forward_two_params_via_helper((void *)*param_1,0x29,1);
  forward_two_params_via_helper((void *)*param_1,0,1);
  forward_two_params_via_helper((void *)*param_1,3,1);
  forward_two_params_via_helper((void *)*param_1,0x18,1);
  forward_two_params_via_helper((void *)*param_1,0xc,1);
  forward_two_params_via_helper((void *)*param_1,0x19,1);
  forward_two_params_via_helper((void *)*param_1,9,1);
  forward_two_params_via_helper((void *)*param_1,10,1);
  forward_two_params_via_helper((void *)*param_1,0x11,1);
  forward_two_params_via_helper((void *)*param_1,0x2c,1);
  forward_two_params_via_helper((void *)*param_1,7,1);
  forward_two_params_via_helper((void *)*param_1,0x1e,1);
  forward_two_params_via_helper((void *)*param_1,0x1f,1);
  get_or_create_singleton_object_103b9478();
  uVar1 = call_predicate_with_two_args();
  iVar2 = call_two_helpers_in_sequence_10491ff0();
  if (iVar2 == 0) {
    uVar3 = request_ui_sync_with_flag_10491f5c((void *)*param_1,1);
    uVar3 = uVar3 & uVar1;
    uVar1 = 1;
    if (uVar3 == 0) {
      uVar1 = 0;
    }
  }
  iVar2 = call_helper_on_field_0x18_10491fde(*param_1);
  pvVar4 = (void *)*param_1;
  if (param_2 != iVar2) {
    uVar3 = request_ui_sync_with_flag_10491f36(pvVar4,param_2);
    uVar1 = (uint)((uVar3 & uVar1) != 0);
    pvVar4 = (void *)*param_1;
  }
  uVar3 = set_byte_at_offset_0x1c((int)pvVar4,1);
  return (uVar3 & uVar1) != 0;
}
