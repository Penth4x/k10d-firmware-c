/* @k10d dispatch_event_by_type_103b3f44 @ 0x103b3f44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_by_type_103b3f44(cls_10566478 *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  
  dispatch_event_0x29_via_vtable((cls_105643d0 *)param_1,param_2,param_3);
  if (param_1->field_0x66 != '\0') {
    return;
  }
  uVar2 = 0;
  if (param_2 == 0x11) {
LAB_103b4008:
    uVar2 = 0x1120001;
    bVar1 = false;
  }
  else {
    if (param_2 < 0x12) {
      if (param_2 == 6) {
        check_flag_and_call_two_helpers(param_1);
LAB_103b4036:
        bVar1 = true;
        goto LAB_103b4038;
      }
      if (param_2 < 7) {
        if (((param_2 != 0) && (param_2 != 1)) && (param_2 != 3)) {
          bVar1 = true;
          goto LAB_103b4038;
        }
      }
      else if ((param_2 != 7) && (param_2 != 9)) {
        if (param_2 == 0xc) {
          param_1->field_0x66 = 1;
          iVar3 = *(uint32_t *)param_1->field_0x2c;
          (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120066,0);
          bVar1 = true;
          goto LAB_103b4038;
        }
        if (param_2 != 0x10) {
          bVar1 = true;
          goto LAB_103b4038;
        }
        goto LAB_103b4008;
      }
    }
    else if (param_2 != 0x1b) {
      if (param_2 < 0x1c) {
        if ((((param_2 != 0x13) && (param_2 != 0x18)) && (param_2 != 0x19)) && (param_2 != 0x1a)) {
          bVar1 = true;
          goto LAB_103b4038;
        }
      }
      else if (param_2 != 0x1c) {
        if (param_2 == 0x27) {
          adjust_value_within_bounds(param_1,1,(param_3 >> 1) + 1);
          bVar1 = true;
          goto LAB_103b4038;
        }
        if (param_2 == 0x28) {
          adjust_value_within_bounds(param_1,0,(param_3 >> 1) + 1);
          bVar1 = true;
          goto LAB_103b4038;
        }
        if (param_2 != 0x2c) goto LAB_103b4036;
      }
    }
    uVar2 = 0x1120004;
    bVar1 = false;
  }
LAB_103b4038:
  if (!bVar1) {
    param_1->field_0x66 = 1;
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,uVar2,0);
  }
  return;
}
