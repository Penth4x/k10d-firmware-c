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

uint32_t init_five_message_slots(int *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint16_t uStack_a;
  
  uStack_a = 0;
  uVar1 = get_sysparam_store_instance();
  iVar2 = read_sysparam_store_entry(uVar1,0);
  param_1[8] = iVar2;
  uVar1 = menu_item_register(*param_1);
  uStack_a = (uint16_t)param_1[8];
  menu_list_build((void *)uVar1,&uStack_a,1,0);
  uVar1 = get_sysparam_store_instance();
  iVar2 = read_sysparam_store_entry(uVar1,1);
  param_1[9] = iVar2;
  uVar1 = menu_item_register(*param_1);
  uStack_a = (uint16_t)param_1[9];
  menu_list_build((void *)uVar1,&uStack_a,1,0);
  uVar1 = get_sysparam_store_instance();
  iVar2 = read_sysparam_store_entry(uVar1,2);
  param_1[10] = iVar2;
  uVar1 = menu_item_register(*param_1);
  uStack_a = (uint16_t)param_1[10];
  menu_list_build((void *)uVar1,&uStack_a,1,0);
  uVar1 = get_sysparam_store_instance();
  iVar2 = read_sysparam_store_entry(uVar1,3);
  param_1[0xb] = iVar2;
  uVar1 = menu_item_register(*param_1);
  uStack_a = (uint16_t)param_1[0xb];
  menu_list_build((void *)uVar1,&uStack_a,1,0);
  uVar1 = get_sysparam_store_instance();
  iVar2 = read_sysparam_store_entry(uVar1,4);
  param_1[0xc] = iVar2;
  uVar1 = menu_item_register(*param_1);
  uStack_a = (uint16_t)param_1[0xc];
  menu_list_build((void *)uVar1,&uStack_a,1,0);
  return 0x1be0005;
}
