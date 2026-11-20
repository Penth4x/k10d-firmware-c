/* @k10d init_five_message_slots @ 0x10424378
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Creates five message objects and stores their handles in consecutive struct fields.
 * summary:
 *   The function iterates over indices 0 through 4. For each index, it calls
 *   get_sysparam_store_instance to obtain a base handle, then calls
 *   read_sysparam_store_entry with that handle and the index to create a specific resource.
 *   The resulting handle is stored in param_1[8+index]. It then calls menu_item_register
 *   with the first field of param_1 and menu_list_build to register or associate the newly
 *   created handle. The function returns the constant 0x1be0005.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_five_message_slots(cls_1059ddb0 *param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint16_t uStack_a;
  
  uStack_a = 0;
  uVar1 = get_sysparam_store_instance();
  uVar1 = read_sysparam_store_entry(uVar1,0);
  *(uint32_t *)&param_1->field_0x20 = uVar1;
  uVar1 = menu_item_register((int)param_1->field_0x0);
  uStack_a = (uint16_t)*(uint32_t *)&param_1->field_0x20;
  menu_list_build((int *)(uVar1),(uint16_t *)(&uStack_a),(uint8_t)(1),(uint8_t)(0));
  uVar1 = get_sysparam_store_instance();
  uVar1 = read_sysparam_store_entry(uVar1,1);
  *(uint32_t *)&param_1->field_0x24 = uVar1;
  uVar1 = menu_item_register((int)param_1->field_0x0);
  uStack_a = (uint16_t)*(uint32_t *)&param_1->field_0x24;
  menu_list_build((int *)(uVar1),(uint16_t *)(&uStack_a),(uint8_t)(1),(uint8_t)(0));
  uVar1 = get_sysparam_store_instance();
  uVar1 = read_sysparam_store_entry(uVar1,2);
  *(uint32_t *)&param_1->field_0x28 = uVar1;
  uVar1 = menu_item_register((int)param_1->field_0x0);
  uStack_a = (uint16_t)*(uint32_t *)&param_1->field_0x28;
  menu_list_build((int *)(uVar1),(uint16_t *)(&uStack_a),(uint8_t)(1),(uint8_t)(0));
  uVar1 = get_sysparam_store_instance();
  uVar1 = read_sysparam_store_entry(uVar1,3);
  *(uint32_t *)&param_1->field_0x2c = uVar1;
  uVar1 = menu_item_register((int)param_1->field_0x0);
  uStack_a = (uint16_t)*(uint32_t *)&param_1->field_0x2c;
  menu_list_build((int *)(uVar1),(uint16_t *)(&uStack_a),(uint8_t)(1),(uint8_t)(0));
  uVar1 = get_sysparam_store_instance();
  uVar1 = read_sysparam_store_entry(uVar1,4);
  *(uint32_t *)&param_1->field_0x30 = uVar1;
  uVar1 = menu_item_register((int)param_1->field_0x0);
  uStack_a = (uint16_t)*(uint32_t *)&param_1->field_0x30;
  menu_list_build((int *)(uVar1),(uint16_t *)(&uStack_a),(uint8_t)(1),(uint8_t)(0));
  return 0x1be0005;
}
