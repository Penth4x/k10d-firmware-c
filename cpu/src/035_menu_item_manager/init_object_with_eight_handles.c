/* @k10d init_object_with_eight_handles @ 0x1038ceea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_eight_handles(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  uint8_t *puVar10;
  void *pvVar11;
  
  iterate_range_and_call_match(*(void **)((int)param_1 + 0x24),(uint *)0x105604cc/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3120000,0,0);
  pvVar2 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3120001,0,0);
  pvVar3 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3120002,(void *)0x20,(void *)0x48);
  pvVar4 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3120003,(void *)0x20,(void *)0x48);
  pvVar5 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3120004,(void *)0x20,(void *)0x48);
  pvVar6 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3120005,(void *)0x20,(void *)0x48);
  pvVar7 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3120006,(void *)0x20,(void *)0x168);
  pvVar8 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3120007,(void *)0x1b8,(void *)0x198);
  puVar10 = (uint8_t *)&DAT_00000200;
  pvVar11 = (void *)0x198;
  pvVar9 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3120008,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar1,pvVar2,puVar10,pvVar11);
  iterate_and_remove_list_entry(pvVar1,pvVar3,puVar10,pvVar11);
  iterate_and_remove_list_entry(pvVar1,pvVar4,puVar10,pvVar11);
  iterate_and_remove_list_entry(pvVar1,pvVar5,puVar10,pvVar11);
  iterate_and_remove_list_entry(pvVar1,pvVar6,puVar10,pvVar11);
  iterate_and_remove_list_entry(pvVar1,pvVar7,puVar10,pvVar11);
  iterate_and_remove_list_entry(pvVar1,pvVar8,puVar10,pvVar11);
  iterate_and_remove_list_entry(pvVar1,pvVar9,puVar10,pvVar11);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
