/* @k10d invoke_virtual_slot_8_and_set_state @ 0x103701c6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 028_sr_settings_init (unit names are model-proposed)
 * purpose:
 *   Sets a state field, invokes virtual slot 8 on the object, frees a member pointer, and
 *   updates the state field with a computed value.
 * summary:
 *   The function first calls dispatch_event_with_state_check_1036f384 with the object and
 *   0. It then performs a virtual call to slot 8 (offset 0x44) of the object's vtable. It
 *   calls request_ui_sync_code_4 on the member at offset 0x2c (param_1[0xb]), likely
 *   freeing or resetting it. Finally, it calls check_setting_0x72_enabled with a fixed
 *   address and passes the result to dispatch_event_with_state_check_1036f384 to update the
 *   object's state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_and_set_state(int *param_1)

{
  int iVar1;
  
  dispatch_event_with_state_check_1036f384(param_1,0);
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  request_ui_sync_code_4((void *)param_1[0xb]);
  iVar1 = check_setting_0x72_enabled((void *)0x800158d4/*SDRAM*/);
  dispatch_event_with_state_check_1036f384(param_1,iVar1);
  return;
}
