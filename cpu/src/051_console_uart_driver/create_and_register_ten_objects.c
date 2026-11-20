/* @k10d create_and_register_ten_objects @ 0x103b873c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object at offset 0x24, creates ten objects with sequential IDs, and
 *   registers each with a common handler.
 * summary:
 *   The function calls iterate_range_and_call_match to initialize a sub-object at offset
 *   0x24 of param_1. It then calls app_obj_factory ten times with sequential IDs
 *   (0x3180000-0x3180009) and varying size/offset parameters to create object handles. Each
 *   handle is passed to iterate_and_remove_list_entry along with a fixed pointer and size
 *   0x198. Finally, it calls set_object_field_at_offset_0x10 to associate the first object
 *   with the main object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void create_and_register_ten_objects(cls_1056b154 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  uint8_t *puVar11;
  void *pvVar12;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1056b078/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3180000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3180001,(void *)0xe0,(void *)0x78);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3180002,(void *)0x128,(void *)0x78);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3180003,(void *)0xe0,(void *)0xc0);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3180004,(void *)0x170,(void *)0xc0);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3180005,(void *)0x68,(void *)0xb4);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3180006,(void *)0x110,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3180007,(void *)0x1b8,(void *)0xb4);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3180008,(void *)0x20,(void *)0x198);
  pvVar12 = (void *)0x198;
  puVar11 = &DAT_00000080;
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3180009,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar1,pvVar2,puVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar1,pvVar3,puVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar1,pvVar4,puVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar1,pvVar5,puVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar1,pvVar6,puVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar1,pvVar7,puVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar1,pvVar8,puVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar1,pvVar9,puVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar1,pvVar10,puVar11,pvVar12);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
