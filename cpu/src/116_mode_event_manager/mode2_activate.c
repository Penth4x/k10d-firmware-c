/* @k10d mode2_activate @ 0x10431680
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_state_change_and_dispatch)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Detects changes in two state values and conditionally invokes virtual methods based on
 *   the state type.
 * summary:
 *   The function captures initial values from param_2 using read_first_word_10433098. It
 *   branches on the second value (iVar2): if it is 3, it calls virtual slot 2 with argument
 *   0x2c; otherwise, it calls virtual slot 3 with argument 0x2c. In both branches, it
 *   performs a series of virtual calls (slots 2 and 3) with various arguments (0, 1, 0xb,
 *   0xe) to check conditions. Depending on the outcome, it calls helper functions
 *   (write_param_to_buffer, dispatch_mode_change_request_10435152,
 *   send_message_with_optional_payload, write_struct_field_with_optional_value,
 *   init_and_set_value_10434ee8) passing a pointer from param_1+0x30. Finally, it re-reads
 *   the state values and returns 1 if they have changed since the start, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t mode2_activate(void *param_1,uint32_t *param_2,int *param_3)

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
      goto LAB_10431832;
    }
    iVar3 = (**(code **)(*param_3 + 0x14))((int)*(short *)(*param_3 + 0x10) + (int)param_3,0);
    if (((iVar3 != 0) ||
        (iVar3 = (**(code **)(*param_3 + 0x14))((int)*(short *)(*param_3 + 0x10) + (int)param_3,1),
        iVar3 != 0)) ||
       (iVar3 = (**(code **)(*param_3 + 0x14))((int)*(short *)(*param_3 + 0x10) + (int)param_3,0xb),
       iVar3 != 0)) goto LAB_10431832;
    iVar3 = (**(code **)(*param_3 + 0x24))((int)*(short *)(*param_3 + 0x20) + (int)param_3,0xe);
  }
  else {
    if (iVar2 != 0) goto LAB_10431832;
    iVar3 = (**(code **)(*param_3 + 0x1c))((int)*(short *)(*param_3 + 0x18) + (int)param_3,0x2c);
    if (iVar3 != 0) {
      uVar4 = *(uint32_t *)((int)param_1 + 0x30);
      iVar3 = check_setting_0x97_active(uVar4);
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = 2;
      }
      send_message_with_optional_payload(uVar4,param_2,iVar3);
      write_struct_field_with_optional_value(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
      goto LAB_10431832;
    }
    if ((((*(int *)((int)param_1 + 0xa0) == 0) ||
         (iVar3 = (**(code **)(*param_3 + 0x14))((int)*(short *)(*param_3 + 0x10) + (int)param_3,0),
         iVar3 != 0)) ||
        (iVar3 = (**(code **)(*param_3 + 0x14))((int)*(short *)(*param_3 + 0x10) + (int)param_3,1),
        iVar3 != 0)) ||
       ((iVar3 = (**(code **)(*param_3 + 0x14))((int)*(short *)(*param_3 + 0x10) + (int)param_3,0xb)
        , iVar3 != 0 || (iVar3 = read_byte_at_offset_0x16(*(uint32_t *)((int)param_1 + 0x30)), iVar3 == 0))))
    goto LAB_10431832;
    iVar3 = (**(code **)(*param_3 + 0x24))((int)*(short *)(*param_3 + 0x20) + (int)param_3,0xe);
  }
  if (iVar3 != 0) {
    init_and_set_value_10434ee8(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
  }
LAB_10431832:
  iVar3 = read_first_word_10433098(param_2);
  uVar4 = 0;
  if ((iVar3 != iVar1) || (iVar1 = read_first_word_10433098(param_2 + 5), iVar1 != iVar2)) {
    uVar4 = 1;
  }
  return uVar4;
}
