/* @k10d dispatch_mode_change_event_1036e5c2 @ 0x1036e5c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 025_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_mode_change_event_1036e5c2(cls_10557f3c *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  cls_10557f3c *pcVar3;
  uint32_t uVar4;
  
  if (((param_1->field_0xc5 == '\0') && (param_1->field_0xc6 == '\0')) &&
     (param_1->field_0xc7 != '\0')) {
    param_1->field_0xc7 = 0;
    invoke_virtual_slot_8_and_set_state(param_1);
  }
  if (*param_2 == 4) {
    iVar1 = param_2[1];
    if ((iVar1 == 0xe) || (iVar1 == 0x26)) {
      set_flag_and_call_two_helpers_1037030c((int)param_1);
      call_helper_with_zero_arg_1036ef66((int *)param_1);
    }
    else if ((iVar1 == 0xd) || (iVar1 == 0x25)) {
      set_flag_and_call_two_helpers_1037030c((int)param_1);
      call_helper_with_flag_one_1036ef70((int *)param_1);
    }
    else {
      pcVar3 = param_1;
      if (iVar1 == 9) {
        write_zero_to_object_offset_bc((int)param_1);
        normalize_mode_index_and_notify((int)param_1);
      }
      else if (iVar1 == 0x10) {
        if (param_1->field_0xb0 != 1) {
          return (int)param_1;
        }
        write_zero_to_object_offset_bc((int)param_1);
        toggle_flag_and_notify((int)param_1);
      }
      else if (iVar1 == 0xf) {
        if ((((param_1->field_0xb0 == 0) || (param_1->field_0xb0 == 3)) && (DAT_800043a0/*SDRAM*/ != '\0'))
           && (param_1->field_0xb9 == '\0')) {
          write_zero_to_object_offset_bc((int)param_1);
          uVar2 = get_or_create_singleton_object_1036c796();
          pcVar3 = (cls_10557f3c *)read_array_element_bounded(uVar2,0xe);
        }
        if (param_1->field_0xb0 != 1) {
          return (int)pcVar3;
        }
        write_zero_to_object_offset_bc((int)param_1);
        toggle_flag_and_notify((int)param_1);
      }
      else {
        if (iVar1 != 0x11) {
          if (iVar1 == 0x27) {
            write_zero_to_object_offset_bc((int)param_1);
            uVar2 = get_or_create_singleton_object_1036c796();
            uVar4 = 4;
          }
          else if (iVar1 == 0x28) {
            write_zero_to_object_offset_bc((int)param_1);
            uVar2 = get_or_create_singleton_object_1036c796();
            uVar4 = 3;
          }
          else if (iVar1 == 5) {
            write_zero_to_object_offset_bc((int)param_1);
            uVar2 = get_or_create_singleton_object_1036c796();
            uVar4 = 5;
          }
          else if (iVar1 == 0x19) {
            if (cRam80015d60 != '\0') {
              return (int)param_1;
            }
            write_zero_to_object_offset_bc((int)param_1);
            uVar2 = get_or_create_singleton_object_1036c796();
            uVar4 = 6;
          }
          else {
            if (iVar1 != 0x18) {
              if (iVar1 != 0xc) {
                return (int)param_1;
              }
              set_flag_and_call_two_helpers_1037030c((int)param_1);
              forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
              return (int)param_1;
            }
            if (param_1->field_0xb8 != '\0') {
              return (int)param_1;
            }
            write_zero_to_object_offset_bc((int)param_1);
            uVar2 = get_or_create_singleton_object_1036c796();
            uVar4 = 0xd;
          }
          iVar1 = read_array_element_bounded(uVar2,uVar4);
          return iVar1;
        }
        if (param_1->field_0xb0 == 0) {
          return (int)param_1;
        }
        write_zero_to_object_offset_bc((int)param_1);
        store_value_and_dispatch_callback((int)param_1,0);
      }
      dispatch_state_change_event_1036fda4(param_1);
      param_1 = pcVar3;
    }
  }
  else if ((*param_2 == 7) && (param_2[1] == 1)) {
    write_zero_to_object_offset_bc((int)param_1);
    if ((param_1->field_0xc5 == '\0') && (param_1->field_0xc6 == '\0')) {
      param_1->field_0xc7 = 0;
      invoke_virtual_slot_8_and_set_state(param_1);
    }
    else {
      param_1->field_0xc7 = 1;
    }
  }
  return (int)param_1;
}
