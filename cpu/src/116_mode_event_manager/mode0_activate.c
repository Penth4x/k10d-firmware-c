/* @k10d mode0_activate @ 0x104314e0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_mode_state_change)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Detects changes in two state fields and dispatches virtual callbacks to handle mode
 *   transitions.
 * summary:
 *   Reads two values from param_2 using read_first_word_10433098. If the second value is 3,
 *   it calls virtual slot 2 on param_3; if non-zero, it calls write_param_to_buffer and
 *   dispatch_mode_change_request_10435152. If the second value is 0, it calls virtual slot
 *   3 on param_3; if non-zero, it calls init_and_set_value_10434d94 and
 *   write_struct_field_with_optional_value. Finally, it re-reads the state values and
 *   returns 1 if either has changed since the initial read.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t mode0_activate(void *param_1,uint32_t *param_2,int *param_3)

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
    init_and_set_value_10434d94(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
    write_struct_field_with_optional_value(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
  }
  iVar3 = read_first_word_10433098(param_2);
  uVar4 = 0;
  if ((iVar3 != iVar1) || (iVar1 = read_first_word_10433098(param_2 + 5), iVar1 != iVar2)) {
    uVar4 = 1;
  }
  return uVar4;
}
