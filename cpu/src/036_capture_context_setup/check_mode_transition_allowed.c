/* @k10d check_mode_transition_allowed @ 0x10390838
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 036_capture_context_setup (unit names are model-proposed)
 * purpose:
 *   Validates whether a state transition to param_3 is permitted based on current object
 *   state and mode flags.
 * summary:
 *   The function first clears a flag at offset 0x80 in the object pointed to by param_1. It
 *   calls set_object_reference_and_check_flags to perform an initial check or setup; if
 *   that fails, it returns 0. If successful, it retrieves a pointer from offset 0x3c and
 *   uses a series of helper functions (call_two_helpers_in_sequence_10491ff0,
 *   request_ui_sync_with_flag_10491f5c, call_helper_on_field_0x18_10491fde,
 *   request_ui_sync_with_flag_10491f36, set_byte_at_offset_0x1c) to compare the current
 *   state against the target state (param_3) and check specific bit flags. The final result
 *   (1 or 0) indicates whether the transition is valid.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_mode_transition_allowed(uint param_1,int *param_2,int param_3)

{
  uint extraout_r4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint32_t uVar5;
  bool bVar4;
  
  *(uint8_t *)(param_1 + 0x80) = 0;
  bVar4 = set_object_reference_and_check_flags(param_1,param_2);
  extraout_r4 = (uint)bVar4;
  uVar5 = 0;
  if (extraout_r4 != 0) {
    iVar1 = call_two_helpers_in_sequence_10491ff0();
    uVar2 = extraout_r4;
    if (iVar1 == 0) {
      uVar2 = request_ui_sync_with_flag_10491f5c(*(void **)(param_1 + 0x3c),1);
      uVar2 = (uint)((uVar2 & extraout_r4) != 0);
    }
    iVar1 = call_helper_on_field_0x18_10491fde(*(int *)(param_1 + 0x3c));
    if (param_3 != iVar1) {
      uVar3 = request_ui_sync_with_flag_10491f36(*(void **)(param_1 + 0x3c),param_3);
      uVar2 = (uint)((uVar3 & uVar2) != 0);
    }
    uVar3 = set_byte_at_offset_0x1c(*(int *)(param_1 + 0x3c),1);
    uVar5 = 1;
    if ((uVar3 & uVar2) == 0) {
      uVar5 = 0;
    }
  }
  return uVar5;
}
