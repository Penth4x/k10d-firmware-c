/* @k10d dispatch_state_transition_1047bfb0 @ 0x1047bfb0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_transition_1047bfb0(int param_1,short *param_2,short *param_3)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = call_helper_with_second_field_1047a570(*(int *)(param_1 + 0x54));
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = accumulate_until_pointer_matches(*(uint32_t *)(param_1 + 0x50));
    uVar3 = (*(code *)0x1047a950/*ROM*/)(uVar2,999);
    *(uint32_t *)(param_1 + 0x40) = uVar3;
    *(uint32_t *)(param_1 + 0x34) = 3;
    call_helper_with_second_field_1047a5f6(*(uint32_t *)(param_1 + 0x54));
    allocate_and_init_buffer_1047a664(*(uint32_t *)(param_1 + 0x54));
    if (*param_3 == 0) {
      uVar3 = 1;
    }
    else {
      if (((*param_2 == 0) || (param_2[1] == 0)) || (uVar2 < 1000)) {
        poll_state_until_stable(param_1,param_3);
      }
      else {
        poll_and_process_event_pair(param_1,param_2,param_3);
      }
      if (*(char *)(param_1 + 0x44) == '\0') {
        uVar3 = allocate_and_init_buffer_1047a664(*(uint32_t *)(param_1 + 0x54));
      }
      else {
        call_helper_with_second_field_1047a5f6(__frv_reg_unset(4));
        *(uint32_t *)(param_1 + 0x34) = 2;
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
