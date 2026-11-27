/* @k10d init_object_with_sub_entries @ 0x1037b62a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Creates and links a set of sub-objects under a parent object using sequential IDs and
 *   offsets.
 * summary:
 *   The function takes a parent object pointer and initializes its sub-structures. It calls
 *   app_obj_factory repeatedly to create numerous sub-objects with IDs ranging from
 *   0x3050000 to 0x3050021, specifying offsets and sizes for each. It then links these
 *   objects using write_field_at_offset_0x48 and invoke_virtual_then_call_helper_10494188,
 *   and registers them with the parent via iterate_and_remove_list_entry. Finally, it calls
 *   set_object_field_at_offset_0x10 to finalize the initialization. The pattern of creating
 *   multiple similar objects with sequential IDs and linking them suggests a generic object
 *   initialization routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_sub_entries(cls_10558b34 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  uint32_t uVar15;
  void *pvVar16;
  int iVar17;
  uint32_t uVar18;
  void *pvVar19;
  int iVar20;
  uint32_t uVar21;
  void *pvVar22;
  int iVar23;
  uint32_t uVar24;
  void *pvVar25;
  int iVar26;
  void *pvVar27;
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055cf84/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050001,(void *)0x20,(void *)0x18);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050002,(void *)(0),(void *)(0));
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050003,(void *)0x1a0,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050004,(void *)0x1e8,(void *)0x18);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050005,(void *)0x200,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050006,(void *)0x20,(void *)0x198);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050007,(void *)0x68,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050008,(void *)0x1b8,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050009,(void *)0x200,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050016,(void *)0x50,(void *)0xc0);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050017,(void *)0x50,(void *)0xf0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050018,(void *)0x50,(void *)0x120);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050019,(void *)0x50,(void *)0x150);
  uVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x305000a,(void *)0x50,(void *)0xc0));
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x305000e,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar15),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050012,(void *)0x50,(void *)0xc0));
  uVar18 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x305000b,(void *)0x50,(void *)0xf0));
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x305000f,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar18),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar20 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050013,(void *)0x50,(void *)0xf0));
  uVar21 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x305000c,(void *)0x50,(void *)0x120));
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050010,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar21),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050014,(void *)0x50,(void *)0x120));
  uVar24 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x305000d,(void *)0x50,(void *)0x150));
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050011,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar24),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar26 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050015,(void *)0x50,(void *)0x150));
  write_field_at_offset_0x48(pvVar16,uVar15);
  write_field_at_offset_0x48(pvVar19,uVar18);
  write_field_at_offset_0x48(pvVar22,uVar21);
  write_field_at_offset_0x48(pvVar25,uVar24);
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar17);
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar20);
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar23);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar26);
  uVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x305001a,(void *)0x50,(void *)0x120));
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x305001c,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar15),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x305001e,(void *)0x50,(void *)0x120));
  iVar20 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050020,(void *)0x50,(void *)0x120));
  uVar18 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x305001b,(void *)0x50,(void *)0x150));
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x305001d,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar18),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x305001f,(void *)0x50,(void *)0x150));
  pvVar29 = (void *)0x50;
  pvVar30 = (void *)0x150;
  iVar26 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3050021,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  write_field_at_offset_0x48(pvVar27,uVar15);
  write_field_at_offset_0x48(pvVar28,uVar18);
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar17);
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar23);
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar26);
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar8,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar10,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar11,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar12,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar13,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar14,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar16,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar19,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar22,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar25,pvVar29,pvVar30);
  graph_link_nextprev((int)pvVar16,(int)pvVar19,0xf,pvVar30);
  graph_link_nextprev((int)pvVar19,(int)pvVar22,0xf,pvVar30);
  graph_link_nextprev((int)pvVar19,(int)pvVar16,0x10,pvVar30);
  graph_link_nextprev((int)pvVar22,(int)pvVar25,0xf,pvVar30);
  graph_link_nextprev((int)pvVar22,(int)pvVar19,0x10,pvVar30);
  pvVar2 = (void *)0x10;
  graph_link_nextprev((int)pvVar25,(int)pvVar22,0x10,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar27,pvVar2,pvVar30);
  iterate_and_remove_list_entry(pvVar1,pvVar28,pvVar2,pvVar30);
  graph_link_nextprev((int)pvVar27,(int)pvVar28,0xf,pvVar30);
  graph_link_nextprev((int)pvVar28,(int)pvVar27,0x10,pvVar30);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
