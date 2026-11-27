/* @k10d build_object_tree_from_ids_103eaa7c @ 0x103eaa7c
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Creates a hierarchy of objects from sequential IDs and links them into a tree
 *   structure.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1ad0001-0x1ad001b)
 *   to instantiate objects, passing offsets and sizes. It then uses
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev to establish
 *   relationships between these objects, and finally registers the root object (pvVar26)
 *   with the parent via set_object_field_at_offset_0x10. The pattern of creating many
 *   objects and linking them suggests a generic tree or graph construction, but the
 *   specific subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_tree_from_ids_103eaa7c(cls_105978d4 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar23;
  void *pvVar24;
  void *pvVar25;
  void *pvVar26;
  void *pvVar27;
  void *pvVar28;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x10555304/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0002,(void *)(0),(void *)0x48);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0003,(void *)(0),(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0008,(void *)0x20,(void *)0x124);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad000a,(void *)0x80,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad000b,(void *)0x140,(void *)0x60);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0019,(void *)200,(void *)0x60);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad001a,(void *)0x188,(void *)0x60);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad000a,(void *)0x80,(void *)0x90);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad000b,(void *)0x140,(void *)0x90);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0018,(void *)200,(void *)0x90);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad001a,(void *)0x188,(void *)0x90);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad000a,(void *)0x80,(void *)0xc0);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad000b,(void *)0x140,(void *)0xc0);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad001a,(void *)200,(void *)0xc0);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0018,(void *)0x188,(void *)0xc0);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad000c,(void *)0x38,(void *)0x60);
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad000d,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar23);
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad000e,(void *)0x20,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar23);
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad000f,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar23);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0010,(void *)0x38,(void *)0x90);
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0011,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar23);
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0012,(void *)0x20,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar23);
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0013,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar23);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0014,(void *)0x38,(void *)0xc0);
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0015,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar23);
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0016,(void *)0x20,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar23);
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad0017,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar23);
  pvVar27 = (void *)0x0;
  pvVar28 = (void *)0x0;
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ad001b,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar26,pvVar1,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar2,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar3,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar4,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar5,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar6,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar7,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar8,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar9,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar10,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar11,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar12,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar13,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar14,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar15,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar16,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar17,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar18,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar19,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar20,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar21,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar22,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar24,pvVar27,pvVar28);
  iterate_and_remove_list_entry(pvVar26,pvVar25,pvVar27,pvVar28);
  graph_link_nextprev((int)pvVar22,(int)pvVar24,0xf,pvVar28);
  graph_link_nextprev((int)pvVar22,(int)pvVar25,0x10,pvVar28);
  graph_link_nextprev((int)pvVar24,(int)pvVar25,0xf,pvVar28);
  graph_link_nextprev((int)pvVar24,(int)pvVar22,0x10,pvVar28);
  graph_link_nextprev((int)pvVar25,(int)pvVar22,0xf,pvVar28);
  graph_link_nextprev((int)pvVar25,(int)pvVar24,0x10,pvVar28);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar26));
  return;
}
