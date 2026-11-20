/* @k10d dispatch_event_to_object_1039e58c @ 0x1039e58c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 042_debug_menu_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1039e5a6) overlaps instruction at (ram,0x1039e5a4)
    */

uint32_t dispatch_event_to_object_1039e58c(cls_10564150 *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  
  if (param_2 == 0x1120067) {
    param_1->field_0xd5 = param_3 == 1;
    goto code_r0x1039eb0c;
  }
  bVar1 = false;
  if (param_2 < 0x1120068) {
    if (param_2 == 0x1120008) {
      bVar1 = false;
      goto code_r0x1039eb36;
    }
    if (param_2 < 0x1120009) {
      if (param_2 == 0x1120004) {
        if (param_1->field_0x5c == 0) {
          uVar2 = map_id_to_shift_value((uint32_t)(param_1),(int)(param_3));
          param_1->field_0x5c = uVar2;
        }
        bVar1 = false;
      }
      else if (param_2 < 0x1120005) {
        if (param_2 == 0x1120001) {
          bVar1 = false;
        }
        else if (param_2 == 0x1120002) {
          bVar1 = false;
        }
        else if (param_2 == 0x1120003) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      else if (param_2 == 0x1120005) {
        bVar1 = false;
      }
      else if (param_2 == 0x1120006) {
        bVar1 = false;
      }
      else if (param_2 == 0x1120007) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      goto code_r0x1039eb36;
    }
    if (param_2 == 0x112000d) {
      bVar1 = true;
      param_1->field_0x48 = param_3;
    }
    else {
      if (0x112000d < param_2) {
        if (param_2 == 0x1120064) {
          iVar3 = *(int *)param_1->field_0x2c;
          (((vtbl_entry*)(iVar3))[3].fn)
                    ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[3].adj,0x13006e,0);
          bVar1 = true;
          goto code_r0x1039eb36;
        }
        if ((param_2 != 0x1120065) && (param_2 != 0x1120066)) {
          bVar1 = true;
          goto code_r0x1039eb36;
        }
        goto code_r0x1039eb0c;
      }
      if (param_2 == 0x1120009) {
        bVar1 = false;
        goto code_r0x1039eb36;
      }
      if (param_2 == 0x112000b) {
        if ((param_1->field_0xc0 == '\0') && (param_1->field_0xc1 == '\0')) {
          iVar3 = get_setting_delay_ms_104f1820(param_1->field_0xbc);
          if (iVar3 == 0) {
            bVar1 = false;
          }
          else {
            bVar1 = false;
          }
          goto code_r0x1039eb36;
        }
      }
      else {
        if (param_2 != 0x112000c) {
          bVar1 = true;
          goto code_r0x1039eb36;
        }
        if ((param_1->field_0xc0 == '\0') && (param_1->field_0xc1 == '\0')) {
          bVar1 = false;
          goto code_r0x1039eb36;
        }
      }
    }
    goto code_r0x1039eb34;
  }
  if (param_2 == 0x1120071) {
    iVar3 = *(int *)param_1->field_0x2c;
    (((vtbl_entry*)(iVar3))[3].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[3].adj,0x130065,0)
    ;
    bVar1 = true;
    goto code_r0x1039eb36;
  }
  if (param_2 < 0x1120072) {
    if (param_2 == 0x112006d) {
      iVar3 = *(int *)param_1->field_0x2c;
      (((vtbl_entry*)(iVar3))[3].fn)
                ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[3].adj,0x13006b,0);
      bVar1 = true;
      goto code_r0x1039eb36;
    }
    if (param_2 < 0x112006e) {
      if (param_2 == 0x1120069) {
        iVar3 = *(int *)param_1->field_0x2c;
        (((vtbl_entry*)(iVar3))[3].fn)
                  ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[3].adj,0x130068,param_3);
        bVar1 = true;
      }
      else if (param_2 == 0x112006a) {
        set_flg_obj(&param_1->field_0xcc);
        iVar3 = *(int *)param_1->field_0x2c;
        (((vtbl_entry*)(iVar3))[3].fn)
                  ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[3].adj,0x130069,param_3);
        bVar1 = true;
      }
      else if (param_2 == 0x112006b) {
        iVar3 = *(int *)param_1->field_0x2c;
        (((vtbl_entry*)(iVar3))[3].fn)
                  ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[3].adj,0x13006a,0);
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
      goto code_r0x1039eb36;
    }
    if (((param_2 != 0x112006e) && (param_2 != 0x112006f)) && (param_2 != 0x1120070)) {
      bVar1 = true;
      goto code_r0x1039eb36;
    }
  }
  else if (param_2 != 0x1120075) {
    if (0x1120075 < param_2) {
      if (param_2 == 0x1120076) {
        if ((param_1->field_0xc0 == '\0') && (param_1->field_0xc1 == '\0')) goto code_r0x1039eb0c;
      }
      else if (param_2 == 0x1120077) {
        param_1->field_0xd7 = 1;
      }
      else {
        if (param_2 != 0x1170064) {
          bVar1 = true;
          goto code_r0x1039eb36;
        }
        if (param_1->field_0x38 == param_1->field_0x78) {
          *(uint8_t *)(param_1->field_0x78 + 0x66) = 0;
        }
      }
code_r0x1039eb34:
      bVar1 = !bVar1;
      goto code_r0x1039eb36;
    }
    if (param_2 == 0x1120072) {
      iVar3 = *(int *)param_1->field_0x2c;
      (((vtbl_entry*)(iVar3))[3].fn)
                ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[3].adj,0x13006d,param_3 == 1);
      bVar1 = true;
      goto code_r0x1039eb36;
    }
    if (param_2 == 0x1120073) {
      iVar3 = *(int *)param_1->field_0x2c;
      (((vtbl_entry*)(iVar3))[3].fn)
                ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[3].adj,0x13006f,0);
      bVar1 = true;
      goto code_r0x1039eb36;
    }
    if (param_2 != 0x1120074) {
      bVar1 = true;
      goto code_r0x1039eb36;
    }
    param_1->field_0xd8 = 1;
  }
code_r0x1039eb0c:
  set_flg_obj(&param_1->field_0xcc);
  bVar1 = true;
code_r0x1039eb36:
  if ((!bVar1) && ((param_1->field_0x38 != param_1->field_0x60 || (param_1->field_0x35 != '\0')))) {
    set_flg_obj(&param_1->field_0xcc);
  }
  return 0;
}
