/* @k10d create_and_link_twenty_two_objects @ 0x1038d43c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Creates 22 objects with specific IDs and sizes, links them to a parent, and registers
 *   the first as a child.
 * summary:
 *   The function initializes a parent object at param_1+0x24 using
 *   iterate_range_and_call_match. It then calls app_obj_factory 22 times to create child
 *   objects with IDs ranging from 0x3130000 to 0x3130016, passing varying size and
 *   alignment parameters. One specific object (ID 0x3130016) is further configured with
 *   call_helper_and_set_flag_104b7726 and call_helper_and_set_flag_104b7744. Finally, it
 *   links all 22 created objects to the first created object (pvVar1) using
 *   iterate_and_remove_list_entry and registers pvVar1 with param_1 using
 *   set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void create_and_link_twenty_two_objects(cls_10559e7c *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  void *pvVar23;
  void *pvVar24;
  uint8_t *puVar25;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x10560594/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130001,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130002,(void *)0x20,(void *)0x18);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130003,(void *)0x20,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130004,(void *)0x20,(void *)0x18);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130005,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130006,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130007,(void *)0x1a0,(void *)0x18);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130008,(void *)0x1e8,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130009,(void *)0x200,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x313000a,(void *)0x20,(void *)0x48);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x313000b,(void *)0x20,(void *)0x48);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x313000c,(void *)0x20,(void *)0x48);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x313000d,(void *)0x218,(void *)0x48);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x313000e,(void *)0x218,(void *)0x78);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x313000f,(void *)0x200,(void *)0x168);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130010,(void *)0x200,(void *)0x168);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130011,(void *)0x20,(void *)0x168);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130012,(void *)0x20,(void *)0x198);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130013,(void *)0x80,(void *)0x120);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130014,(void *)0x20,(void *)0x198);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130015,(void *)0x38,(void *)0x198);
  puVar25 = &DAT_00000078;
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3130016,(void *)0x20,(void *)__frv_reg_unset(7));
  call_helper_and_set_flag_104b7726(pvVar23,0x240,1);
  pvVar24 = (void *)0x1;
  call_helper_and_set_flag_104b7744(pvVar23,0x90, __frv_reg_unset(6));
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar8,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar10,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar11,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar12,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar13,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar14,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar15,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar16,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar17,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar18,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar19,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar20,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar21,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar22,pvVar24,puVar25);
  iterate_and_remove_list_entry(pvVar1,pvVar23,pvVar24,puVar25);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
