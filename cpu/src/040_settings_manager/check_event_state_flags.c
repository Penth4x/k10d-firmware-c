/* @k10d check_event_state_flags @ 0x1039192a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Evaluates a sequence of flag checks on an object's state pointer and returns a boolean
 *   result.
 * summary:
 *   The function first calls set_object_reference_and_check_flags with a null pointer if
 *   the object field at offset 0x3c is non-zero, then calls it again with param_2. If the
 *   second call returns non-zero, it performs a series of bitwise AND operations using
 *   values returned from call_two_helpers_in_sequence_10491ff0,
 *   request_ui_sync_with_flag_10491f5c, call_helper_on_field_0x18_10491fde,
 *   request_ui_sync_with_flag_10491f36, and set_byte_at_offset_0x1c. The final result is a
 *   boolean (0 or 1) stored in uVar5, which is returned. The logic appears to verify
 *   specific conditions or flags associated with the object state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_event_state_flags(uint param_1,int *param_2,int param_3,int param_4)

{
  uint extraout_r4;
  int iVar1;
  uint uVar2;
  uint uVar4;
  uint32_t uVar5;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    set_object_reference_and_check_flags(param_1,(int *)0x0);
  }
  bVar3 = set_object_reference_and_check_flags(param_1,param_2);
  extraout_r4 = (uint)bVar3;
  uVar5 = 0;
  if (extraout_r4 != 0) {
    iVar1 = call_two_helpers_in_sequence_10491ff0();
    uVar4 = extraout_r4;
    if ((iVar1 == 0) && (param_4 != 0)) {
      uVar2 = request_ui_sync_with_flag_10491f5c(*(void **)(param_1 + 0x3c),1);
      uVar4 = 1;
      if ((uVar2 & extraout_r4) == 0) {
        uVar4 = 0;
      }
    }
    iVar1 = call_helper_on_field_0x18_10491fde(*(int *)(param_1 + 0x3c));
    if (param_3 != iVar1) {
      uVar2 = request_ui_sync_with_flag_10491f36(*(void **)(param_1 + 0x3c),param_3);
      uVar4 = (uint)((uVar2 & uVar4) != 0);
    }
    uVar2 = set_byte_at_offset_0x1c(*(int *)(param_1 + 0x3c),1);
    uVar5 = 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = 0;
    }
  }
  return uVar5;
}
