/* @k10d init_six_buffer_channels @ 0x103880a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Creates and configures six buffer objects with IDs 0x30f0001-0x30f0006 and links them
 *   to a parent object.
 * summary:
 *   The function initializes a parent object at offset 0x24, then creates a primary object
 *   (ID 0x30f0000) and six secondary objects (IDs 0x30f0001-0x30f0006). Each secondary
 *   object is configured with size 0x240 and offset 0x90 via helper functions. Finally, it
 *   links each of the six secondary objects to the primary object and associates the
 *   primary object with the parent.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_six_buffer_channels(cls_10559678 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  uint8_t *puVar9;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055fab8/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30f0000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30f0001,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar2,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar2,0x90,1);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30f0002,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar3,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar3,0x90,1);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30f0003,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar4,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar4,0x90,1);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30f0004,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar5,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar5,0x90,1);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30f0005,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar6,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar6,0x90,1);
  puVar9 = &DAT_00000078;
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30f0006,(void *)0x20,(void *)(uint32_t)param_4);
  call_helper_and_set_flag_104b7726(pvVar7,0x240,1);
  pvVar8 = (void *)0x1;
  call_helper_and_set_flag_104b7744(pvVar7,0x90, (uint32_t)param_3);
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar8,puVar9);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
