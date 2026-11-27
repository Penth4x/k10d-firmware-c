/* @k10d init_fifteen_subobjects @ 0x10387aba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Creates and registers fifteen sub-objects with a parent object using a common
 *   configuration.
 * summary:
 *   The function first calls iterate_range_and_call_match to initialize a field at offset
 *   0x24 of param_1. It then calls app_obj_factory fifteen times with incrementing IDs
 *   (0x30e0000-0x30e000f) and varying size/offset parameters to create sub-objects. Each
 *   created object is then passed to iterate_and_remove_list_entry along with a pointer to
 *   DAT_00000200 and the value 0x198. Finally, it calls set_object_field_at_offset_0x10
 *   with the original param_1 and the first created object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_fifteen_subobjects(cls_105595a8 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  uint8_t *puVar17;
  void *pvVar18;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055f964/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e0000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e0001,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e0002,(void *)0xe0,(void *)0x78);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e0003,(void *)0x20,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e0004,(void *)0x110,(void *)0x30);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e0005,(void *)0x1b8,(void *)0xb4);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e0006,(void *)0x68,(void *)0xb4);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e0007,(void *)200,(void *)0x138);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e0008,(void *)0x128,(void *)0x138);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e0009,(void *)0x158,(void *)0x138);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e000a,(void *)0x128,(void *)0x78);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e000b,(void *)0x170,(void *)0xc0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e000c,(void *)0xe0,(void *)0xc0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e000d,(void *)0x128,(void *)0x108);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e000e,(void *)0x1b8,(void *)0x198);
  puVar17 = &DAT_00000200;
  pvVar18 = (void *)0x198;
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30e000f,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar1,pvVar2,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar3,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar4,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar5,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar6,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar7,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar8,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar9,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar10,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar11,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar12,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar13,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar14,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar15,puVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar1,pvVar16,puVar17,pvVar18);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
