/* @k10d dispatch_state_transition_10366cbc @ 0x10366cbc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches a state machine transition based on a field at offset 0x4c, bracketed by
 *   flag checks.
 * summary:
 *   The function reads a state value from offset 0x4c of the input object and branches on
 *   values 1 through 4, calling different helper functions
 *   (set_object_flags_via_virtual_calls, transition_mode_state, dispatch_six_mode_cases)
 *   for each case. It wraps the dispatch logic with calls to read_byte_at_offset_0x1d and
 *   dispatch_object_state_update_10491fb2 on a sub-object at offset 0x20, likely managing a
 *   lock or status flag. If the state is 0 or unrecognized, it calls
 *   read_two_shorts_from_param2_103674ca with a pointer to offset 0x280.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_10366cbc(void *param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  
  pvVar3 = (void *)((int)param_1 + 0x20);
  cVar2 = read_byte_at_offset_0x1d((int)pvVar3);
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2((int)pvVar3,1);
  }
  iVar1 = *(int *)((int)param_1 + 0x4c);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      set_object_flags_via_virtual_calls(pvVar3,0);
      transition_mode_state(pvVar3,*(uint32_t *)((int)param_1 + 0x18));
      dispatch_six_mode_cases(param_1);
      goto LAB_10366d4a;
    }
    if (iVar1 == 2) {
      set_object_flags_via_virtual_calls(pvVar3,1);
      goto LAB_10366d4a;
    }
    if (iVar1 == 3) {
      transition_mode_state(pvVar3,*(uint32_t *)((int)param_1 + 0x18));
      dispatch_six_mode_cases(param_1);
    }
    else {
      if (iVar1 != 4) goto LAB_10366d4a;
      dispatch_six_mode_cases(param_1);
    }
  }
  read_two_shorts_from_param2_103674ca(param_1,(void *)((int)param_1 + 0x280));
LAB_10366d4a:
  cVar2 = read_byte_at_offset_0x1d((int)pvVar3);
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2((int)pvVar3,0);
  }
  return;
}
