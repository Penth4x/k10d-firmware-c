/* @k10d configure_mode_transition_state @ 0x103bf568
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Initializes object state and dispatches virtual calls to set up a new operating mode
 *   based on flags and settings.
 * summary:
 *   The function writes the input flag (param_2) to offset 0xc of the object and
 *   initializes offset 0x32. It retrieves a context object via menu_item_register and
 *   invokes virtual methods (slots at offsets 0x74 and 0xc) with arguments derived from the
 *   flag bits. It checks specific settings (setting_get id 0xd2) and internal states
 *   (get_or_init_sram_block_105342fe) to set a boolean flag at offset 0x35. Finally, it
 *   performs a series of virtual calls with argument 0 and registers the object's sub-
 *   structure at offset 0x14 with a global manager
 *   (get_or_create_singleton_object_1050b118) and another object
 *   (get_or_create_camera_object).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103bf772) overlaps instruction at (ram,0x103bf770)
    */

void configure_mode_transition_state(cls_10594f8c *param_1,uint16_t param_2)

{
  uint8_t uVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = get_or_create_singleton_object_104bb22a();
  write_exposure_settings_from_object(*(uint32_t *)(iVar2 + 4),param_1->field_0x8);
  iVar2 = get_or_create_singleton_object_104fb12e();
  iVar9 = *(int *)(iVar2 + 0x74);
  param_1->field_0xc = param_2;
  param_1->field_0x32 = 0xff;
  iVar2 = menu_item_register((int)param_1->field_0x0);
  if (((param_1->field_0xc & 2) == 2) || ((param_1->field_0xc & 4) == 4)) {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].adj + iVar2,0);
  }
  else {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].adj + iVar2,1);
  }
  iVar2 = menu_item_register((int)param_1->field_0x0);
  if ((param_1->field_0xc & 1) == 1) {
    uVar3 = get_or_init_heap_block();
    uVar4 = get_setting_by_index((int)param_1,0x48);
    iVar9 = map_mode_index_to_code_1045b524(uVar3,uVar4);
    if (iVar9 == 0) {
      param_1->field_0x32 = 0;
    }
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].adj + iVar2,0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    pvVar5 = (void *)(param_1->field_0x0);
  }
  else {
    uVar6 = query_object_byte_property_104f1ab6(iVar9);
    if (uVar6 == 3) {
      param_1->field_0x32 = 0;
    }
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].adj + iVar2,1);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    pvVar5 = (void *)(param_1->field_0x0);
  }
  iVar2 = menu_item_register((int)pvVar5);
  uVar3 = get_or_init_sram_block_105342fe();
  iVar9 = (*(code *)0x10534358/*ROM*/)(uVar3,0x2c);
  uVar3 = get_or_init_sram_block_105342fe();
  iVar7 = (*(code *)0x10534358/*ROM*/)(uVar3,0x1a);
  iVar8 = setting_get(param_1->field_0x8,0xd2);
  if (((iVar8 == 1) && (((iVar9 == 0 || (iVar9 == 1)) || (iVar9 == 2)))) ||
     ((iVar9 == 2 && (iVar7 == 1)))) {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].adj + iVar2,1);
    uVar1 = 1;
  }
  else {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].adj + iVar2,0);
    uVar1 = 0;
  }
  param_1->field_0x35 = uVar1;
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  check_mode_transition_validity(&param_1->field_0x0,0);
  iVar2 = get_or_create_singleton_object_1050b118();
  *(uint32_t **)(iVar2 + 0x58) = &param_1->field_0x14;
  iVar2 = get_or_create_camera_object();
  iVar9 = **(int **)(iVar2 + 4);
  (((vtbl_entry*)(iVar9))[19].fn)
            ((int)*(int **)(iVar2 + 4) + (int)((vtbl_entry*)(iVar9))[19].adj,&param_1->field_0x14,
             param_1->field_0x2c,&param_1->field_0x24);
  param_1->field_0x36 = 1;
  return;
}
