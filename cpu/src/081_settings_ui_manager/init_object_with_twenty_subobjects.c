/* @k10d init_object_with_twenty_subobjects @ 0x103e0040
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by creating twenty sub-objects and linking them in a circular
 *   list.
 * summary:
 *   The function calls app_obj_factory repeatedly with incrementing IDs
 *   (0x1a60001-0x1a60023) to create sub-objects. It then uses
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev to establish links
 *   between these sub-objects, forming a circular structure. Finally, it registers the
 *   created sub-objects with iterate_and_remove_list_entry and calls
 *   set_object_field_at_offset_0x10 with the parent object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_twenty_subobjects(cls_10596bf0 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  void *pvVar23;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x10554364/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60002,(void *)(0),(void *)0x48);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60003,(void *)(0),(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60008,(void *)0x20,(void *)0x154);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6000c,(void *)0x38,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60011,(void *)0x38,(void *)0x90);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60016,(void *)0x38,(void *)0xc0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6001b,(void *)0x38,(void *)0xf0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60020,(void *)0x38,(void *)0x120);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6000a,(void *)0x80,(void *)0x60);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6000b,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar16);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6000d,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar16);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6000e,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar16);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6000f,(void *)0x80,(void *)0x90);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60010,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar16);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60012,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar16);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60013,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar16);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60014,(void *)0x80,(void *)0xc0);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60015,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar16);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60017,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar16);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60018,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar16);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60019,(void *)0x80,(void *)0xf0);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6001a,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar16);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6001c,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar16);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6001d,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar16);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6001e,(void *)0x80,(void *)0x120);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a6001f,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar16);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60021,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar16);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60022,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar16);
  pvVar22 = (void *)0x0;
  pvVar23 = (void *)0x0;
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a60023,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar21,pvVar1,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar2,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar3,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar4,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar5,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar6,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar7,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar8,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar9,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar10,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar11,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar12,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar13,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar14,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar15,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar17,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar18,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar19,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar20,pvVar22,pvVar23);
  graph_link_nextprev((int)pvVar15,(int)pvVar17,0xf,pvVar23);
  graph_link_nextprev((int)pvVar15,(int)pvVar20,0x10,pvVar23);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xf,pvVar23);
  graph_link_nextprev((int)pvVar17,(int)pvVar15,0x10,pvVar23);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xf,pvVar23);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0x10,pvVar23);
  graph_link_nextprev((int)pvVar19,(int)pvVar20,0xf,pvVar23);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0x10,pvVar23);
  graph_link_nextprev((int)pvVar20,(int)pvVar15,0xf,pvVar23);
  graph_link_nextprev((int)pvVar20,(int)pvVar19,0x10,pvVar23);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar21));
  return;
}
