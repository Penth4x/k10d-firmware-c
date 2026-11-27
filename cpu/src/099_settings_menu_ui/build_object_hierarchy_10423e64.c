/* @k10d build_object_hierarchy_10423e64 @ 0x10423e64
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Instantiates a set of objects via a factory, links them into a tree, and registers them
 *   with a container.
 * summary:
 *   The function calls app_obj_factory repeatedly with incrementing IDs
 *   (0x1be0001-0x1be001e) to create multiple object instances. It uses
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev to establish
 *   relationships between these objects, and iterate_and_remove_list_entry to register them
 *   with a container object (pvVar16). Finally, it calls set_object_field_at_offset_0x10 to
 *   attach the constructed structure to the parent object passed in param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_hierarchy_10423e64(cls_1059ddb0 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
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
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x10556b64/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0002,(void *)0x20,(void *)0x198);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0003,(void *)0x80,(void *)0x198);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0004,(void *)0x20,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0005,(void *)0x20,(void *)0x60);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0006,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar5,iVar6);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0007,(void *)0x200,(void *)0x60);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0008,(void *)0x218,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar5,iVar6);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0009,(void *)0x1e8,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar5,iVar6);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be000a,(void *)0x20,(void *)0x90);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be000b,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar8,iVar6);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be000c,(void *)0x200,(void *)0x90);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be000d,(void *)0x218,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar8,iVar6);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be000e,(void *)0x1e8,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar8,iVar6);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be000f,(void *)0x20,(void *)0xc0);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0010,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar10,iVar6);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0011,(void *)0x200,(void *)0xc0);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0012,(void *)0x218,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar10,iVar6);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0013,(void *)0x1e8,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar10,iVar6);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0014,(void *)0x20,(void *)0xf0);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0015,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar6);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0016,(void *)0x200,(void *)0xf0);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0017,(void *)0x218,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar6);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0018,(void *)0x1e8,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar6);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be0019,(void *)0x20,(void *)0x120);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be001a,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar6);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be001b,(void *)0x200,(void *)0x120);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be001c,(void *)0x218,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar6);
  iVar6 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be001d,(void *)0x1e8,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar6);
  pvVar17 = (void *)0x0;
  pvVar18 = (void *)0x0;
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1be001e,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar16,pvVar1,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar2,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar3,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar4,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar5,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar7,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar8,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar9,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar10,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar11,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar12,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar13,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar14,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar15,pvVar17,pvVar18);
  graph_link_nextprev((int)pvVar5,(int)pvVar8,0xf,pvVar18);
  graph_link_nextprev((int)pvVar5,(int)pvVar14,0x10,pvVar18);
  graph_link_nextprev((int)pvVar8,(int)pvVar10,0xf,pvVar18);
  graph_link_nextprev((int)pvVar8,(int)pvVar5,0x10,pvVar18);
  graph_link_nextprev((int)pvVar10,(int)pvVar12,0xf,pvVar18);
  graph_link_nextprev((int)pvVar10,(int)pvVar8,0x10,pvVar18);
  graph_link_nextprev((int)pvVar12,(int)pvVar14,0xf,pvVar18);
  graph_link_nextprev((int)pvVar12,(int)pvVar10,0x10,pvVar18);
  graph_link_nextprev((int)pvVar14,(int)pvVar5,0xf,pvVar18);
  graph_link_nextprev((int)pvVar14,(int)pvVar12,0x10,pvVar18);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar16));
  return;
}
