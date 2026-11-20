/* @k10d dispatch_event_with_state_flag @ 0x103b67d6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_with_state_flag(cls_10566724 *param_1,uint param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  
  dispatch_event_0x29_via_vtable((cls_105643d0 *)param_1,param_2,param_3);
  uVar2 = 0;
  if (param_1->field_0x57 != '\0') {
    return;
  }
  if (param_2 == 0xd) {
    if (((param_1->field_0x30 != 0x203000a) ||
        (iVar3 = check_setting_0xbb_is_one(param_1->field_0x28), iVar3 != 0)) &&
       ((param_1->field_0x56 == '\0' || (iVar3 = check_value_in_range_9_to_11(param_1->field_0x28), iVar3 == 0)))) {
      uVar2 = 0x1120009;
      goto LAB_103b68c6;
    }
LAB_103b68c0:
    bVar1 = true;
  }
  else if (param_2 < 0xe) {
    if (param_2 == 3) goto LAB_103b68c0;
    if (param_2 < 4) {
      if (param_2 == 0) goto LAB_103b684a;
      bVar1 = true;
    }
    else {
      if (param_2 == 7) goto LAB_103b68c0;
      if (param_2 == 9) goto LAB_103b684a;
      if (param_2 == 0xc) {
        iVar3 = *(uint32_t *)(param_1->field_0x2c);
        (((vtbl_entry*)(iVar3))[2].fn)
                  ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120066,0);
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
  }
  else {
    if (param_2 != 0x1a) {
      if (param_2 < 0x1b) {
        if (param_2 == 0x11) {
          uVar2 = 0x1120001;
          bVar1 = false;
        }
        else {
          if ((param_2 == 0x18) || (param_2 == 0x19)) goto LAB_103b684a;
          bVar1 = true;
        }
        goto LAB_103b68c2;
      }
      if (((param_2 == 0x1b) || (param_2 == 0x1c)) || (param_2 != 0x2c)) goto LAB_103b68c0;
    }
LAB_103b684a:
    uVar2 = 0x1120004;
    bVar1 = false;
  }
LAB_103b68c2:
  if (bVar1) {
    return;
  }
LAB_103b68c6:
  param_1->field_0x57 = '\x01';
  (((vtbl_entry*)(param_1->field_0x0))[14].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,uVar2,0);
  return;
}
