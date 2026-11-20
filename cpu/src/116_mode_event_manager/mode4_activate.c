/* @k10d mode4_activate @ 0x104318b4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_mode_state_change)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Detects changes in two state values and dispatches to virtual handlers based on the
 *   current mode.
 * summary:
 *   The function reads two state values from param_2 using read_first_word_10433098 and
 *   compares them to initial values. It branches on the second state value (0, 1, or 3) to
 *   invoke different virtual methods on the object in param_3 with specific arguments. It
 *   calls various helper functions (init_and_set_value_10434d94,
 *   init_and_set_value_10434ee8, send_message_with_optional_payload, etc.) with a pointer
 *   from param_1+0x30. Finally, it re-reads the state values and returns 1 if either has
 *   changed, indicating a state transition occurred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104318e6) overlaps instruction at (ram,0x104318e4)
    */

uint32_t mode4_activate(void *param_1,uint32_t *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  
  iVar1 = read_first_word_10433098(param_2);
  iVar2 = read_first_word_10433098(param_2 + 5);
  if (iVar2 == 3) {
    iVar3 = (((vtbl_entry*)(*param_3))[2].fn)((int)((vtbl_entry*)(*param_3))[2].adj + (int)param_3,0x2c);
    if (iVar3 == 0) {
      iVar3 = (((vtbl_entry*)(*param_3))[2].fn)((int)((vtbl_entry*)(*param_3))[2].adj + (int)param_3,0);
      if (((iVar3 == 0) &&
          (iVar3 = (((vtbl_entry*)(*param_3))[2].fn)((int)((vtbl_entry*)(*param_3))[2].adj + (int)param_3,1)
          , iVar3 == 0)) &&
         (iVar3 = (**(code **)(*param_3 + 0x14))
                            ((int)((vtbl_entry*)(*param_3))[2].adj + (int)param_3,0xb), iVar3 == 0)) {
        iVar3 = (**(code **)(*param_3 + 0x34))((int)*(short *)(*param_3 + 0x30) + (int)param_3,0x2e)
        ;
        if (iVar3 == 0) {
          iVar3 = (((vtbl_entry*)(*param_3))[4].fn)
                            ((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x17);
          if (iVar3 == 0) {
            iVar3 = (((vtbl_entry*)(*param_3))[4].fn)
                              ((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0xe);
            if (iVar3 != 0) {
              init_and_set_value_10434ee8(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
            }
          }
          else {
            init_and_set_value_10434d94(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
          }
          goto LAB_10431b30;
        }
        uVar4 = *(uint32_t *)((int)param_1 + 0x30);
        iVar3 = check_setting_0x97_active(uVar4);
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = 2;
        }
      }
      else {
        uVar4 = *(uint32_t *)((int)param_1 + 0x30);
        iVar3 = 1;
      }
      send_message_with_optional_payload(uVar4,param_2,iVar3);
    }
    else {
      write_param_to_buffer(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
      dispatch_mode_change_request_10435152(*(uint32_t *)((int)param_1 + 0x30),param_2,4);
    }
  }
  else {
    if (iVar2 == 0) {
      iVar3 = (((vtbl_entry*)(*param_3))[3].fn)((int)((vtbl_entry*)(*param_3))[3].adj + (int)param_3,0x2c);
      if (iVar3 == 0) goto LAB_10431b30;
      iVar3 = read_field_at_offset_0x6c(*(uint32_t *)((int)param_1 + 0x38));
      if (iVar3 == 1) {
        init_and_set_value_10434ee8(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
      }
      else if (iVar3 == 0) {
        init_and_set_value_10434d94(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
      }
      else {
        uVar4 = *(uint32_t *)((int)param_1 + 0x30);
        iVar3 = check_setting_0x97_active(uVar4);
        iVar5 = 2;
        if (iVar3 == 0) {
          iVar5 = 1;
        }
        send_message_with_optional_payload(uVar4,param_2,iVar5);
      }
    }
    else {
      if ((iVar2 != 1) ||
         (iVar3 = (((vtbl_entry*)(*param_3))[3].fn)
                            ((int)((vtbl_entry*)(*param_3))[3].adj + (int)param_3,0x2c), iVar3 == 0))
      goto LAB_10431b30;
      iVar3 = read_field_at_offset_0x6c(*(uint32_t *)((int)param_1 + 0x38));
      if (iVar3 == 1) {
        init_and_set_value_10434ee8(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
      }
      else if (iVar3 == 0) {
        init_and_set_value_10434d94(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
      }
      else {
        uVar4 = *(uint32_t *)((int)param_1 + 0x30);
        iVar3 = check_setting_0x97_active(uVar4);
        iVar5 = 2;
        if (iVar3 == 0) {
          iVar5 = 1;
        }
        send_message_with_optional_payload(uVar4,param_2,iVar5);
      }
    }
    write_struct_field_with_optional_value(*(uint32_t *)((int)param_1 + 0x30),param_2,1);
  }
LAB_10431b30:
  iVar3 = read_first_word_10433098(param_2);
  uVar4 = 0;
  if ((iVar3 != iVar1) || (iVar1 = read_first_word_10433098(param_2 + 5), iVar1 != iVar2)) {
    uVar4 = 1;
  }
  return uVar4;
}
