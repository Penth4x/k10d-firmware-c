/* @k10d dispatch_mode_change_event_103a2d76 @ 0x103a2d76
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_change_event_103a2d76(cls_105649cc *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  
  dispatch_event_0x29_via_vtable((cls_105643d0 *)param_1,param_2,param_3);
  if (param_1->field_0x118 != '\0') {
    return;
  }
  uVar2 = 0;
  if (param_2 == 0x11) {
LAB_103a2e48:
    uVar2 = 0x1120001;
    bVar1 = false;
    goto LAB_103a2ea6;
  }
  if (param_2 < 0x12) {
    if (param_2 != 9) {
      if (9 < param_2) {
        if (param_2 == 0xe) goto LAB_103a2e48;
        if (param_2 < 0xf) {
          if (param_2 != 0xc) {
            if (param_2 != 0xd) {
              bVar1 = true;
              goto LAB_103a2ea6;
            }
            goto LAB_103a2e7a;
          }
          iVar3 = *(uint32_t *)(param_1->field_0x2c);
          (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120066,0);
          param_1->field_0x118 = 1;
        }
        else {
          if ((param_2 != 0xf) && (param_2 != 0x10)) {
            bVar1 = true;
            goto LAB_103a2ea6;
          }
LAB_103a2e7a:
          iVar3 = *(uint32_t *)(param_1->field_0x2c);
          (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120065,0);
          dispatch_mode_change_by_id(param_1,param_2,param_3);
          apply_context_state_flags(param_1);
        }
LAB_103a2ea4:
        bVar1 = true;
        goto LAB_103a2ea6;
      }
      if ((((param_2 != 0) && (param_2 != 1)) && (param_2 != 3)) && (param_2 != 7)) {
        bVar1 = true;
        goto LAB_103a2ea6;
      }
    }
  }
  else if (param_2 != 0x1c) {
    if (0x1c < param_2) {
      if (param_2 != 0x27) {
        if (param_2 < 0x28) {
          if ((param_2 != 0x25) && (param_2 != 0x26)) {
            bVar1 = true;
            goto LAB_103a2ea6;
          }
        }
        else if (param_2 != 0x28) {
          if (param_2 != 0x2c) goto LAB_103a2ea4;
          goto LAB_103a2e3e;
        }
      }
      goto LAB_103a2e7a;
    }
    if (param_2 != 0x19) {
      if (param_2 < 0x1a) {
        if ((param_2 != 0x13) && (param_2 != 0x18)) {
          bVar1 = true;
          goto LAB_103a2ea6;
        }
      }
      else if ((param_2 != 0x1a) && (param_2 != 0x1b)) {
        bVar1 = true;
        goto LAB_103a2ea6;
      }
    }
  }
LAB_103a2e3e:
  uVar2 = 0x1120004;
  bVar1 = false;
LAB_103a2ea6:
  if (!bVar1) {
    param_1->field_0x118 = 1;
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,uVar2,0);
  }
  if ((param_1->field_0x119 == '\0') &&
     (((param_2 == 0x10 || (param_2 == 0xf)) || (param_2 == 0xd)))) {
    param_1->field_0x119 = 1;
    call_helper_on_fetched_pointer();
  }
  return;
}
