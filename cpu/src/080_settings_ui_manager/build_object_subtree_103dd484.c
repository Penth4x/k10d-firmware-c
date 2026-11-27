/* @k10d build_object_subtree_103dd484 @ 0x103dd484
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a set of sub-objects by ID and size, links them into a tree, and registers
 *   them with a parent container.
 * summary:
 *   The function calls app_obj_factory repeatedly to allocate sub-objects with specific IDs
 *   (0x1990001-0x1990023) and sizes. It uses invoke_virtual_then_call_helper_10494188 and
 *   graph_link_nextprev to establish parent-child and sibling links between these objects.
 *   iterate_and_remove_list_entry registers each allocated object with a container object
 *   (pvVar19), and set_object_field_at_offset_0x10 associates the final structure with the
 *   parent object passed in param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_subtree_103dd484(cls_105968d4 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x10552bb8/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990002,(void *)(0),(void *)0x48);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990003,(void *)(0),(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990008,(void *)0x20,(void *)0x154);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x199000c,(void *)0x38,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990011,(void *)0x38,(void *)0x90);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990016,(void *)0x38,(void *)0xc0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x199001b,(void *)0x38,(void *)0xf0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x199000a,(void *)0x80,(void *)0x60);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x199000b,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar15);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x199000d,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar15);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x199000e,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar15);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x199000f,(void *)0x80,(void *)0x90);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990010,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar15);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990012,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar15);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990013,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar15);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990014,(void *)0x80,(void *)0xc0);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990015,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar15);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990017,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar15);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990018,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar15);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990019,(void *)0x80,(void *)0xf0);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x199001a,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar15);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x199001c,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar15);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x199001d,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar15);
  pvVar20 = (void *)0x0;
  pvVar21 = (void *)0x0;
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1990023,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar19,pvVar1,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar2,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar3,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar4,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar5,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar6,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar7,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar8,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar9,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar10,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar11,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar12,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar13,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar14,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar16,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar17,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar18,pvVar20,pvVar21);
  graph_link_nextprev((int)pvVar14,(int)pvVar16,0xf,pvVar21);
  graph_link_nextprev((int)pvVar14,(int)pvVar18,0x10,pvVar21);
  graph_link_nextprev((int)pvVar16,(int)pvVar17,0xf,pvVar21);
  graph_link_nextprev((int)pvVar16,(int)pvVar14,0x10,pvVar21);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xf,pvVar21);
  graph_link_nextprev((int)pvVar17,(int)pvVar16,0x10,pvVar21);
  graph_link_nextprev((int)pvVar18,(int)pvVar14,0xf,pvVar21);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0x10,pvVar21);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar19));
  return;
}
