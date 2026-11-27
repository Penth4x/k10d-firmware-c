/* @k10d init_object_hierarchy @ 0x103c8238
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 060_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Instantiates a set of sub-objects and links them into a hierarchical structure.
 * summary:
 *   The function calls app_obj_factory repeatedly to create numerous objects with specific
 *   IDs (0x1040001-0x104002c) and sizes. It then uses
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev to establish
 *   relationships between these objects, forming a tree or graph. Finally, it registers the
 *   root object (pvVar29) with the parent object via set_object_field_at_offset_0x10. The
 *   specific subsystem (e.g., UI, camera control) is not identifiable from the mechanical
 *   operations alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_hierarchy(cls_10595818 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  void *pvVar23;
  void *pvVar24;
  void *pvVar25;
  void *pvVar26;
  void *pvVar27;
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)&DAT_105488d0/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040001,(void *)0x20,(void *)0x198);
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040002,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040003,(void *)(0),(void *)0x44);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040004,(void *)(0),(void *)0x196);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040005,(void *)(0),(void *)0x44);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040006,(void *)(0),(void *)0x2c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040007,(void *)(0),(void *)0x19c);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040008,(void *)0x1d0,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040009,(void *)0x218,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104000a,(void *)0x80,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104000b,(void *)0x20,(void *)0x18);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104000d,(void *)0x260,(void *)0x60);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104000e,(void *)0x260,(void *)0xc0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104000f,(void *)0x260,(void *)0x120);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104000c,(void *)0x98,(void *)0x18);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040010,(void *)200,(void *)0x18);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040011,(void *)0x80,(void *)0x18));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040012,(void *)0x218,(void *)0x18));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040013,(void *)0x128,(void *)0x48));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040014,(void *)0x80,(void *)0x18));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar17);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040018,(void *)0x20,(void *)0x60);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040019,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x104001a,(void *)0x248,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar17);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040015,(void *)0x20,(void *)0x90);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040016,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040017,(void *)0x248,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar17);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104001b,(void *)0x20,(void *)0xc0);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x104001c,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x104001f,(void *)0x248,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar17);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104001d,(void *)0x1dc,(void *)0xc0);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104001e,(void *)0x1dc,(void *)0xc0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040020,(void *)0x20,(void *)0xf0);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040021,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar23,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040022,(void *)0x248,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar23,iVar17);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040023,(void *)0x20,(void *)0x120);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040024,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040027,(void *)0x248,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar17);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040025,(void *)0x1e8,(void *)0x120);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040026,(void *)0x1e8,(void *)0x120);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040028,(void *)0x20,(void *)0x150);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1040029,(void *)0x20,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x104002b,(void *)0x248,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar17);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104002a,(void *)0x170,(void *)0x150);
  call_helper_and_set_flag_104b7726(pvVar28,0xd8,2);
  pvVar30 = (void *)0x0;
  pvVar31 = (void *)0x0;
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x104002c,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar29,pvVar1,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar2,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar3,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar4,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar5,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar6,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar7,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar8,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar9,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar10,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar11,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar16,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar15,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar12,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar13,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar14,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar18,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar19,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar20,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar21,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar22,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar23,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar24,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar25,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar26,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar27,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar29,pvVar28,pvVar30,pvVar31);
  graph_link_nextprev((int)pvVar16,(int)pvVar18,0xf,pvVar31);
  graph_link_nextprev((int)pvVar18,(int)pvVar16,0x10,pvVar31);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xf,pvVar31);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0x10,pvVar31);
  graph_link_nextprev((int)pvVar19,(int)pvVar20,0xf,pvVar31);
  graph_link_nextprev((int)pvVar20,(int)pvVar19,0x10,pvVar31);
  graph_link_nextprev((int)pvVar20,(int)pvVar23,0xf,pvVar31);
  graph_link_nextprev((int)pvVar23,(int)pvVar20,0x10,pvVar31);
  graph_link_nextprev((int)pvVar23,(int)pvVar24,0xf,pvVar31);
  graph_link_nextprev((int)pvVar24,(int)pvVar23,0x10,pvVar31);
  graph_link_nextprev((int)pvVar24,(int)pvVar27,0xf,pvVar31);
  graph_link_nextprev((int)pvVar27,(int)pvVar24,0x10,pvVar31);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar29));
  return;
}
