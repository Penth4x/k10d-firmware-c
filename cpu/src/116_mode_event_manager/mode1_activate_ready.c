/* @k10d mode1_activate_ready @ 0x104315b0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed detect_state_change_and_dispatch)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Compares two state values from param_2, dispatches vtable callbacks if specific states
 *   are active, and returns 1 if the state changed.
 * summary:
 *   The function reads two values from param_2 using read_first_word_10433098 (at offsets 0
 *   and 5). It checks if the second value is 3 or 0 and calls corresponding virtual methods
 *   on the object in param_3 (slots 2 and 3) with argument 0x2c. If the virtual call
 *   succeeds, it invokes helper functions (write_param_to_buffer/5152 or
 *   init_and_set_value_10434ee8/5036) passing a pointer from param_1+0x30. Finally, it re-
 *   reads the state values and returns 1 if either value differs from the initial read,
 *   indicating a state change.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t mode1_activate_ready(void *param_1,uint32_t *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  
  iVar1 = read_first_word_10433098(param_2);
  iVar2 = read_first_word_10433098(param_2 + 5);
  if (iVar2 == 3) {
    iVar3 = (**(code **)(*param_3 + 0x14))((int)*(short *)(*param_3 + 0x10) + (int)param_3,0x2c);
    if (iVar3 != 0) {
      write_param_to_buffer(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
      dispatch_mode_change_request_10435152(*(uint32_t *)((int)param_1 + 0x30),param_2,4);
    }
  }
  else if ((iVar2 == 0) &&
          (iVar3 = (**(code **)(*param_3 + 0x1c))
                             ((int)*(short *)(*param_3 + 0x18) + (int)param_3,0x2c), iVar3 != 0)) {
    init_and_set_value_10434ee8(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
    write_struct_field_with_optional_value(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
  }
  iVar3 = read_first_word_10433098(param_2);
  uVar4 = 0;
  if ((iVar3 != iVar1) || (iVar1 = read_first_word_10433098(param_2 + 5), iVar1 != iVar2)) {
    uVar4 = 1;
  }
  return uVar4;
}
