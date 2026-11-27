/* @k10d init_object_with_seventeen_subobjects @ 0x1037ac6a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Creates and links a hierarchy of sub-objects under a parent container.
 * summary:
 *   The function initializes a parent object (param_1) by first calling
 *   iterate_range_and_call_match with a pointer at offset 0x24. It then creates 17 distinct
 *   sub-objects using app_obj_factory with unique IDs (0x3030000-0x303000c) and varying
 *   sizes. Several sub-objects are further configured via call_helper_and_set_flag_104b7726
 *   and call_helper_and_set_flag_104b7744. The sub-objects are linked into the parent
 *   structure using iterate_and_remove_list_entry, and cross-references are established
 *   between specific pairs using write_field_at_offset_0x48 and graph_link_nextprev.
 *   Finally, set_object_field_at_offset_0x10 is called to finalize the initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_seventeen_subobjects(cls_10558990 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  uint32_t uVar8;
  void *pvVar9;
  int iVar10;
  uint32_t uVar11;
  void *pvVar12;
  int iVar13;
  void *pvVar14;
  void *pvVar15;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055cd54/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3030000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3030001,(void *)0x20,(void *)0x18);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3030002,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar3,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar3,0x90,1);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3030003,(void *)0x20,(void *)0x198);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3030004,(void *)0x80,(void *)0x198);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3030005,(void *)0x1b8,(void *)0x198);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3030006,(void *)0x200,(void *)0x198);
  uVar8 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3030007,(void *)0x50,(void *)0x120));
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3030009,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar8),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar10 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x303000b,(void *)0x50,(void *)0x120));
  uVar11 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3030008,(void *)0x50,(void *)0x150));
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x303000a,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar11),(uint16_t)(0x1e0),(uint16_t)(1));
  pvVar15 = (void *)0x150;
  pvVar14 = (void *)0x50;
  iVar13 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x303000c,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  write_field_at_offset_0x48(pvVar9,uVar8);
  write_field_at_offset_0x48(pvVar12,uVar11);
  invoke_virtual_then_call_helper_10494188((int)pvVar9,iVar10);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar12,pvVar14,pvVar15);
  graph_link_nextprev((int)pvVar9,(int)pvVar12,0xf,pvVar15);
  graph_link_nextprev((int)pvVar12,(int)pvVar9,0x10,pvVar15);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
