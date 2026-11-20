/* @k10d dispatch_exposure_mode_change @ 0x104072dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1040730a) overlaps instruction at (ram,0x10407308)
    */

void dispatch_exposure_mode_change(cls_105992d4 *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  
  dispatch_event_0x29_via_vtable((cls_105643d0 *)param_1,param_2,param_3);
  if (param_1->field_0xbd != '\0') {
    return;
  }
  if (param_2 == 0xf) {
    uVar2 = 0;
    set_mode_index_and_dispatch_10407a52(param_1,(byte)param_1->field_0x57 - 1);
    bVar1 = true;
    goto code_r0x10407454;
  }
  uVar2 = 0;
  if (param_2 < 0x10) {
    if (param_2 != 7) {
      if (7 < param_2) {
        if (param_2 == 9) goto code_r0x10407408;
        if (param_2 == 0xc) {
          dispatch_two_param_calls(param_1);
          uVar2 = 0x1120007;
          bVar1 = false;
        }
        else if (param_2 == 0xd) {
          set_mode_index_and_dispatch_10407c62(param_1,(byte)param_1->field_0x58 + 1);
          bVar1 = true;
        }
        else {
          if (param_2 == 0xe) {
            set_mode_index_and_dispatch_10407c62(param_1,(byte)param_1->field_0x58 - 1);
            goto code_r0x10407452;
          }
          bVar1 = true;
        }
        goto code_r0x10407454;
      }
      if (param_2 == 0) {
        iVar3 = check_value_in_range_9_to_11(param_1->field_0x28);
      }
      else {
        if (param_2 != 1) {
          if (param_2 == 6) {
            set_mode_index_and_dispatch_10407a52(param_1,7);
            set_mode_index_and_dispatch_10407c62(param_1,7);
            iVar3 = *(uint32_t *)(param_1->field_0x2c);
            (((vtbl_entry*)(iVar3))[2].fn)
                      ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120075,0);
            bVar1 = true;
          }
          else {
            bVar1 = true;
          }
          goto code_r0x10407454;
        }
code_r0x104073a4:
        iVar3 = check_value_in_range_9_to_11(param_1->field_0x28);
      }
      if (iVar3 == 0) goto code_r0x10407408;
    }
code_r0x10407452:
    bVar1 = true;
  }
  else {
    if (param_2 != 0x19) {
      if (param_2 < 0x1a) {
        if (param_2 == 0x10) {
          set_mode_index_and_dispatch_10407a52(param_1,(byte)param_1->field_0x57 + 1);
          bVar1 = true;
        }
        else if (param_2 == 0x11) {
          uVar2 = 0x1120007;
          bVar1 = false;
        }
        else {
          if (param_2 == 0x13) goto code_r0x10407452;
          if (param_2 == 0x18) goto code_r0x10407408;
          bVar1 = true;
        }
        goto code_r0x10407454;
      }
      if (param_2 != 0x1a) {
        if ((param_2 == 0x1b) || (param_2 == 0x1c)) goto code_r0x104073a4;
        if (param_2 != 0x2c) {
          bVar1 = true;
          goto code_r0x10407454;
        }
      }
    }
code_r0x10407408:
    uVar2 = 0x1120004;
    bVar1 = false;
  }
code_r0x10407454:
  if (!bVar1) {
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,uVar2,0);
  }
  iVar3 = check_mode_byte_is_special(param_1);
  if (iVar3 == 0) goto code_r0x104074d8;
  if (param_2 == 0x25) {
    iVar3 = 1;
  }
  else if (param_2 == 0x26) {
    iVar3 = -1;
  }
  else if (param_2 == 0x27) {
    if (param_1->field_0x59 == '\0') {
      iVar3 = 10;
    }
    else {
      if (param_1->field_0x59 != '\x01') goto code_r0x104074d8;
      iVar3 = 5;
    }
  }
  else {
    if (param_2 != 0x28) goto code_r0x104074d8;
    if (param_1->field_0x59 == '\0') {
      iVar3 = -10;
    }
    else {
      if (param_1->field_0x59 != '\x01') goto code_r0x104074d8;
      iVar3 = -5;
    }
  }
  step_clamped_index_and_notify(param_1,iVar3,param_3);
code_r0x104074d8:
  if ((param_1->field_0xbe == '\0') &&
     ((((param_2 == 0x10 || (param_2 == 0xf)) || (param_2 == 0xd)) || (param_2 == 0xe)))) {
    param_1->field_0xbe = 1;
    call_helper_on_fetched_pointer();
  }
  return;
}
