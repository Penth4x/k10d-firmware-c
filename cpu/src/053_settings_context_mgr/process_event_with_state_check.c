/* @k10d process_event_with_state_check @ 0x103b9178
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * purpose:
 *   Handles an event ID by checking object state and dispatching to specific handlers or
 *   virtual methods.
 * summary:
 *   The function first checks if the object state at offset 0x54 is zero and if the event
 *   ID (param_2) is not 10 or if the mode at 0x60 is not 1. If event ID is 0x29, it checks
 *   specific values at offset 8 and calls set_flag_and_store_byte_103b8a8e with arguments
 *   based on a setting. Otherwise, it calls virtual_call_slot_14, potentially updates state
 *   at 0x54, and if the result is 0, performs virtual calls on an object at offset 0x50 and
 *   calls lookup_value_by_code and call_helper_with_0x50000. Finally, it calls
 *   write_value_to_offset_0x40.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_event_with_state_check(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  if (((*(int *)(param_1 + 0x60) != 1) || (param_2 != 10)) && (*(int *)(param_1 + 0x54) == 0)) {
    if (param_2 == 0x29) {
      if (*(int *)(param_1 + 8) == _DAT_105bb5a4/*ROM*/) {
        return;
      }
      if (*(int *)(param_1 + 8) == _DAT_105bb5b0/*ROM*/) {
        return;
      }
      iVar1 = setting_get(*(int *)(param_1 + 0x68),0x97);
      if (iVar1 == 0) {
        set_flag_and_store_byte_103b8a8e(param_1,0x8c);
      }
      else {
        set_flag_and_store_byte_103b8a8e(param_1,0xa0);
      }
    }
    else {
      iVar1 = (int)virtual_call_slot_14((void *)(*(uint32_t *)(param_1 + 0x50)));
      if (iVar1 != *(int *)(param_1 + 0x50)) {
        *(int *)(param_1 + 0x54) = iVar1;
      }
      if (iVar1 == 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
        uVar2 = (**(code **)(iVar1 + 100))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x60))
        ;
        iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
        (**(code **)(iVar1 + 0x6c))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x68),0);
        uVar2 = lookup_value_by_code(param_1,uVar2);
        call_helper_with_0x50000(param_1,uVar2);
      }
      else {
        set_flg_obj((uint32_t *)(param_1 + 0x48));
      }
    }
    write_value_to_offset_0x40(param_1);
  }
  return;
}
