/* @k10d configure_menu_item_states_103d0366 @ 0x103d0366
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 066_settings_menu (unit names are model-proposed)
 * purpose:
 *   Sets the state of UI elements based on a specific setting value and mode.
 * summary:
 *   The function retrieves a setting value (ID 0x9d) and uses it to index into a local
 *   array of element IDs (0x192000f-0x1920022). It calls a virtual method (slot 1) on
 *   objects obtained via menu_item_register, passing 0 or 1 as the second argument, which
 *   likely toggles visibility or active state. The specific elements updated depend on the
 *   setting value and the current mode (param_2).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t configure_menu_item_states_103d0366(cls_10595e74 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uintptr_t sp;
  uint32_t auStack_3c [13];
  
  iVar1 = get_or_init_singleton_104aa272();
  uVar6 = *(uint32_t *)(iVar1 + 8);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  uVar5 = 0x192000f;
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if (param_2 == 0x192001a) {
    auStack_3c[0] = 0x1920012;
    auStack_3c[1] = 0x1920014;
    auStack_3c[2] = 0x1920016;
    uVar3 = setting_get(param_1->field_0x8,0x9d);
    if (uVar3 == 0) {
      iVar2 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
      iVar2 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    else if (uVar3 == 1) {
      iVar2 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    else if (uVar3 == 2) {
      iVar2 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
      iVar2 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    }
    iVar2 = 0xff;
    if (bRam10595e70 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10595e71 == uVar3) {
      iVar2 = 1;
    }
    if (bRam10595e72 == uVar3) {
      iVar2 = 2;
    }
    uVar5 = auStack_3c[iVar2];
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    auStack_3c[3] = 0x192001e;
    auStack_3c[4] = 0x192001e;
    auStack_3c[5] = 0x192001d;
    auStack_3c[6] = 0x192001c;
    auStack_3c[7] = 0x192001b;
    pvVar4 = (void *)(param_1->field_0x0);
    query_class_property_value(uVar6);
    iVar2 = menu_item_register((int)pvVar4);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    auStack_3c[8] = 0x1920022;
    auStack_3c[9] = 0x1920022;
    auStack_3c[10] = 0x1920021;
    auStack_3c[0xb] = 0x1920020;
    auStack_3c[0xc] = 0x192001f;
    pvVar4 = (void *)(param_1->field_0x0);
    query_class_state_value_104aa7c2(*(uint32_t *)(iVar1 + 8));
    iVar1 = menu_item_register((int)pvVar4);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return uVar5;
}
