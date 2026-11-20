/* @k10d set_exposure_mode_value @ 0x103cb20a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 062_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Updates the exposure mode field and corresponding setting ID 0x98 based on the input
 *   mode code.
 * summary:
 *   Stores the input mode code in param_1[6]. For specific codes, it triggers virtual calls
 *   via menu_item_register. For a range of codes (0x1050038-0x1050054), it maps the code to
 *   a value (0-14), stores it in param_1[8], and calls setting_set with ID 0x98. Finally,
 *   it calls render_two_ui_items to likely apply or notify the change.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_exposure_mode_value(cls_105958e8 *param_1,int param_2)

{
  uint8_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar2 = get_or_init_sram_block_1052b6fc();
  param_1->field_0x18 = param_2;
  if ((((param_2 == 0x1050027) || (param_2 == 0x1050032)) || (param_2 == 0x1050070)) ||
     ((param_2 == 0x105007e || (param_2 == 0x105001a)))) {
    iVar3 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    iVar3 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    return;
  }
  if (param_2 == 0x105005d) {
    iVar3 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    iVar3 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    iVar3 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    iVar3 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    return;
  }
  uVar1 = uRam105958c8;
  if ((((param_2 == 0x1050014) || (uVar1 = uRam105958c9, param_2 == 0x1050016)) ||
      ((uVar1 = uRam105958ca, param_2 == 0x105001f ||
       (((uVar1 = uRam105958cb, param_2 == 0x1050021 || (uVar1 = uRam105958cc, param_2 == 0x1050023)
         ) || (uVar1 = uRam105958cd, param_2 == 0x105002c)))))) ||
     (uVar1 = uRam105958ce, param_2 == 0x105002e)) {
LAB_103cb358:
    param_1->field_0x20 = uVar1;
  }
  else {
    if (param_2 == 0x1050038) {
      param_1->field_0x20 = 0;
      setting_set(param_1->field_0x8,0x98,0);
      uVar4 = 0xfffffff9;
    }
    else if (param_2 == 0x105003a) {
      param_1->field_0x20 = 1;
      setting_set(param_1->field_0x8,0x98,1);
      uVar4 = 0xfffffffa;
    }
    else if (param_2 == 0x105003c) {
      param_1->field_0x20 = 2;
      setting_set(param_1->field_0x8,0x98,2);
      uVar4 = 0xfffffffb;
    }
    else if (param_2 == 0x105003e) {
      param_1->field_0x20 = 3;
      setting_set(param_1->field_0x8,0x98,3);
      uVar4 = 0xfffffffc;
    }
    else if (param_2 == 0x1050040) {
      param_1->field_0x20 = 4;
      setting_set(param_1->field_0x8,0x98,4);
      uVar4 = 0xfffffffd;
    }
    else if (param_2 == 0x1050042) {
      param_1->field_0x20 = 5;
      setting_set(param_1->field_0x8,0x98,5);
      uVar4 = 0xfffffffe;
    }
    else if (param_2 == 0x1050044) {
      param_1->field_0x20 = 6;
      setting_set(param_1->field_0x8,0x98,6);
      uVar4 = 0xffffffff;
    }
    else if (param_2 == 0x1050046) {
      param_1->field_0x20 = 7;
      setting_set(param_1->field_0x8,0x98,7);
      uVar4 = 0;
    }
    else if (param_2 == 0x1050048) {
      param_1->field_0x20 = 8;
      setting_set(param_1->field_0x8,0x98,8);
      uVar4 = 1;
    }
    else if (param_2 == 0x105004a) {
      param_1->field_0x20 = 9;
      setting_set(param_1->field_0x8,0x98,9);
      uVar4 = 2;
    }
    else if (param_2 == 0x105004c) {
      param_1->field_0x20 = 10;
      setting_set(param_1->field_0x8,0x98,10);
      uVar4 = 3;
    }
    else if (param_2 == 0x105004e) {
      param_1->field_0x20 = 0xb;
      setting_set(param_1->field_0x8,0x98,0xb);
      uVar4 = 4;
    }
    else if (param_2 == 0x1050050) {
      param_1->field_0x20 = 0xc;
      setting_set(param_1->field_0x8,0x98,0xc);
      uVar4 = 5;
    }
    else {
      iVar3 = param_1->field_0x18;
      if (iVar3 == 0x1050052) {
        param_1->field_0x20 = 0xd;
        setting_set(param_1->field_0x8,0x98,0xd);
        uVar4 = 6;
      }
      else {
        if (iVar3 != 0x1050054) {
          uVar1 = uRam105958cf;
          if ((((iVar3 != 0x1050062) && (uVar1 = uRam105958d0, iVar3 != 0x1050064)) &&
              ((uVar1 = uRam105958d1, iVar3 != 0x1050066 &&
               ((uVar1 = uRam105958d2, iVar3 != 0x1050068 &&
                (uVar1 = uRam105958d3, iVar3 != 0x105006a)))))) &&
             ((uVar1 = uRam105958d4, iVar3 != 0x105006c &&
              ((((uVar1 = uRam105958d5, iVar3 != 0x1050075 &&
                 (uVar1 = uRam105958d6, iVar3 != 0x1050077)) &&
                (uVar1 = uRam105958d7, iVar3 != 0x1050079)) &&
               (uVar1 = uRam105958d8, iVar3 != 0x105007b)))))) {
            return;
          }
          goto LAB_103cb358;
        }
        param_1->field_0x20 = 0xe;
        setting_set(param_1->field_0x8,0x98,0xe);
        uVar4 = 7;
      }
    }
    call_three_helpers_on_struct_1052b7f2((uint32_t *)(uVar2),(uint32_t)(uVar4));
  }
  render_two_ui_items(param_1);
  return;
}
