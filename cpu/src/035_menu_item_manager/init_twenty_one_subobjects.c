/* @k10d init_twenty_one_subobjects @ 0x1038f3f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Creates and registers 21 sub-objects with a parent container using sequential IDs.
 * summary:
 *   The function initializes a parent object at param_1+0x24, then calls app_obj_factory 21
 *   times with incrementing IDs (0x3170000-0x3170015) to create sub-objects. It configures
 *   specific sub-objects (indices 1 and 20) via call_helper_and_set_flag_104b7726 and
 *   call_helper_and_set_flag_104b7744, then registers all 21 sub-objects with the parent
 *   using iterate_and_remove_list_entry. Finally, it links the first sub-object to the
 *   parent via set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_twenty_one_subobjects(cls_1055a234 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  uint8_t *puVar24;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x10560a1c/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170001,(void *)0x20,(void *)0x30);
  call_helper_and_set_flag_104b7726(pvVar2,0x240,1);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170002,(void *)0x20,(void *)0x18);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170003,(void *)0xe0,(void *)0x90);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170004,(void *)0xe0,(void *)0xd8);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170005,(void *)0x170,(void *)0xd8);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170006,(void *)0x128,(void *)0x120);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170007,(void *)0x98,(void *)0xd8);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170008,(void *)0x1a0,(void *)0xd8);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170009,(void *)0x128,(void *)0x150);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x317000a,(void *)0x1a0,(void *)0x78);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x317000b,(void *)0x1d0,(void *)0x78);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x317000c,(void *)(0),(void *)(0));
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x317000d,(void *)0x20,(void *)0x18);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x317000e,(void *)0x20,(void *)0x18);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x317000f,(void *)0x20,(void *)0x18);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170010,(void *)0x200,(void *)0x168);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170011,(void *)0x200,(void *)0x168);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170012,(void *)0x200,(void *)0x168);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170013,(void *)0x200,(void *)0x168);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170014,(void *)0x200,(void *)0x168);
  puVar24 = &DAT_00000078;
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3170015,(void *)0x20,(void *)__frv_reg_unset(7));
  call_helper_and_set_flag_104b7726(pvVar22,0x240,1);
  pvVar23 = (void *)0x1;
  call_helper_and_set_flag_104b7744(pvVar22,0x90, __frv_reg_unset(6));
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar8,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar10,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar11,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar12,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar13,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar14,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar15,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar16,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar17,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar18,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar19,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar20,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar21,pvVar23,puVar24);
  iterate_and_remove_list_entry(pvVar1,pvVar22,pvVar23,puVar24);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
