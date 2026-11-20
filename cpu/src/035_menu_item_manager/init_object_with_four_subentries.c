/* @k10d init_object_with_four_subentries @ 0x103850c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_four_subentries(cls_10559218 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055ede8/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30a0000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30a0001,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30a0002,(void *)0x20,(void *)0x18);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30a0003,(void *)0x20,(void *)0x18);
  pvVar6 = (void *)0x20;
  pvVar7 = (void *)0x18;
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30a0004,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar6,pvVar7);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar6,pvVar7);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar6,pvVar7);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar6,pvVar7);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
