/* @k10d sr_state_machine @ 0x1048fd96
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_settings_mode_update)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Refreshes settings and routes to one of four update handlers based on object state and
 *   setting 0xaa.
 * summary:
 *   The function first checks a condition on the object at offset 0x18 and refreshes the
 *   settings working copy if true. It then evaluates a second condition on the object at
 *   offset 0x1c to set a flag at offset 0x36. Depending on the flag and the value of
 *   setting 0xaa (or a mode byte at offset 0x35), it calls one of four distinct handler
 *   functions (init_object_state_and_callers, init_object_with_two_ids_1048fe52,
 *   init_object_with_two_flags_1048fed8, or activate_sr_mode_state). Finally, it calls
 *   sr_enable_channels with a constant argument.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* SR state: bit+0x36=active, +0x35=mode; calls sr_enable_channels(0x7fff). */

void sr_state_machine(int param_1,uint32_t param_2,uint32_t param_3)

{
  bool bVar2;
  int iVar1;
  
  bVar2 = check_object_field_via_helper(*(void **)(param_1 + 0x18));
  if (bVar2) {
    settings_refresh_working_copy(*(void **)(param_1 + 0x18));
  }
  bVar2 = test_flag_set(*(void **)(param_1 + 0x1c));
  if (bVar2) {
    *(uint8_t *)(param_1 + 0x36) = 1;
    if (*(char *)(param_1 + 0x35) == '\x03') {
      init_object_state_and_callers(param_1,param_2,param_3);
    }
    else {
      init_object_with_two_ids_1048fe52(param_1,param_2,param_3);
    }
  }
  else {
    *(uint8_t *)(param_1 + 0x36) = 0;
    iVar1 = setting_get(*(int *)(param_1 + 0x18),0xaa);
    if (iVar1 == 1) {
      init_object_with_two_flags_1048fed8(param_1,param_2,param_3);
    }
    else {
      activate_sr_mode_state(param_1,param_2,param_3);
    }
  }
  sr_enable_channels(param_1,0x7fff);
  return;
}
