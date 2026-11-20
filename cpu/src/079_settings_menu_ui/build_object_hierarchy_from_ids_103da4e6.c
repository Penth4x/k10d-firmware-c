/* @k10d build_object_hierarchy_from_ids_103da4e6 @ 0x103da4e6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 079_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Creates a set of sub-objects by ID and links them into a parent-child tree structure.
 * summary:
 *   The function calls app_obj_factory repeatedly with specific IDs (0x1a00001-0x1a00019)
 *   and sizes to instantiate sub-objects. It then uses
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev to establish
 *   hierarchical relationships between these objects and registers them with a container
 *   via iterate_and_remove_list_entry. Finally, it associates the root of this structure
 *   with the parent object via set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_hierarchy_from_ids_103da4e6(cls_10596690 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x10553928/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00002,(void *)(0),(void *)0x48);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00003,(void *)(0),(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00008,(void *)0x20,(void *)0x124);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a0000c,(void *)0x38,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00011,(void *)0x38,(void *)0x90);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00016,(void *)0x38,(void *)0xc0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a0000a,(void *)0x80,(void *)0x60);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a0000b,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a0000d,(void *)0x20,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a0000e,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a0000f,(void *)0x80,(void *)0x90);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00010,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00012,(void *)0x20,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00013,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar14);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00014,(void *)0x80,(void *)0xc0);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00015,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00017,(void *)0x20,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00018,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar14);
  pvVar18 = (void *)0x0;
  pvVar19 = (void *)0x0;
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a00019,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar17,pvVar1,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar2,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar3,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar4,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar5,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar6,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar7,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar8,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar9,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar10,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar11,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar12,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar13,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar15,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar16,pvVar18,pvVar19);
  graph_link_nextprev((int)pvVar13,(int)pvVar15,0xf,pvVar19);
  graph_link_nextprev((int)pvVar13,(int)pvVar16,0x10,pvVar19);
  graph_link_nextprev((int)pvVar15,(int)pvVar16,0xf,pvVar19);
  graph_link_nextprev((int)pvVar15,(int)pvVar13,0x10,pvVar19);
  graph_link_nextprev((int)pvVar16,(int)pvVar13,0xf,pvVar19);
  graph_link_nextprev((int)pvVar16,(int)pvVar15,0x10,pvVar19);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar17));
  return;
}
