/* @k10d instantiate_and_link_object_tree_103c7508 @ 0x103c7508
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 058_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Allocates a hierarchy of objects via a factory and links them into a parent-child tree.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1030001-0x1030029)
 *   to allocate numerous object instances. It then uses
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev to establish parent-
 *   child relationships between these objects, and iterate_and_remove_list_entry to attach
 *   them to a container object. Finally, it registers the root container with the parent
 *   object via set_object_field_at_offset_0x10. The pattern of creating many small objects
 *   and linking them suggests the construction of a complex data structure or component
 *   hierarchy.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void instantiate_and_link_object_tree_103c7508(cls_10595788 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar20;
  void *pvVar21;
  uint8_t *puVar22;
  void *pvVar23;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)&DAT_10548588/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030002,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030003,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030004,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030005,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030006,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030007,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030001,(void *)0x20,(void *)0x198);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030008,(void *)0x80,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030009,(void *)0x20,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030027,(void *)0x230,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar10 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar10 + 0xc) + 8) + (int)pvVar10,0);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030028,(void *)0x278,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar11 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar11 + 0xc) + 8) + (int)pvVar11,0);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x103000a,(void *)0x68,(void *)0x18);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x103000b,(void *)0x98,(void *)0x18);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x103000c,(void *)0x50,(void *)0x18));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x103000d,(void *)0x1e8,(void *)0x18));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x103000e,(void *)0x128,(void *)0x48));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x103000f,(void *)0x50,(void *)0x18));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030010,(void *)0x20,(void *)0x60);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030011,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030012,(void *)0x248,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar14);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030013,(void *)0x20,(void *)0x90);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030014,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030015,(void *)0x248,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar14);
  pvVar20 = (void *)0x1b8;
  puVar22 = &DAT_00000090;
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030016,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar16,pvVar17,pvVar20,puVar22);
  pvVar20 = (void *)0x1b8;
  puVar22 = &DAT_00000090;
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030017,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar16,pvVar17,pvVar20,puVar22);
  pvVar20 = (void *)0x1b8;
  puVar22 = &DAT_00000090;
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030018,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar16,pvVar17,pvVar20,puVar22);
  pvVar20 = (void *)0x1b8;
  puVar22 = &DAT_00000090;
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030019,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar16,pvVar17,pvVar20,puVar22);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x103001a,(void *)0x20,(void *)0xc0);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x103001b,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x103001c,(void *)0x248,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar14);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x103001d,(void *)0x20,(void *)0xf0);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x103001e,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x103001f,(void *)0x248,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar14);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030020,(void *)0x20,(void *)0x120);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030021,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030022,(void *)0x248,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar14);
  pvVar21 = (void *)0x1b8;
  pvVar23 = (void *)0x120;
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030023,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar18,pvVar19,pvVar21,pvVar23);
  pvVar21 = (void *)0x1b8;
  pvVar23 = (void *)0x120;
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030024,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar18,pvVar19,pvVar21,pvVar23);
  pvVar21 = (void *)0x1b8;
  pvVar23 = (void *)0x120;
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030025,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar18,pvVar19,pvVar21,pvVar23);
  pvVar21 = (void *)0x1b8;
  pvVar23 = (void *)0x120;
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030026,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar18,pvVar19,pvVar21,pvVar23);
  pvVar21 = (void *)0x0;
  pvVar23 = (void *)0x0;
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1030029,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar19,pvVar1,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar2,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar3,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar4,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar5,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar6,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar7,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar8,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar9,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar13,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar12,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar10,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar11,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar15,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar16,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar17,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar20,pvVar21,pvVar23);
  iterate_and_remove_list_entry(pvVar19,pvVar18,pvVar21,pvVar23);
  graph_link_nextprev((int)pvVar13,(int)pvVar18,0x10,pvVar23);
  graph_link_nextprev((int)pvVar13,(int)pvVar15,0xf,pvVar23);
  graph_link_nextprev((int)pvVar15,(int)pvVar13,0x10,pvVar23);
  graph_link_nextprev((int)pvVar15,(int)pvVar16,0xf,pvVar23);
  graph_link_nextprev((int)pvVar16,(int)pvVar15,0x10,pvVar23);
  graph_link_nextprev((int)pvVar16,(int)pvVar17,0xf,pvVar23);
  graph_link_nextprev((int)pvVar17,(int)pvVar16,0x10,pvVar23);
  graph_link_nextprev((int)pvVar17,(int)pvVar20,0xf,pvVar23);
  graph_link_nextprev((int)pvVar20,(int)pvVar17,0x10,pvVar23);
  graph_link_nextprev((int)pvVar20,(int)pvVar18,0xf,pvVar23);
  graph_link_nextprev((int)pvVar18,(int)pvVar20,0x10,pvVar23);
  graph_link_nextprev((int)pvVar18,(int)pvVar13,0xf,pvVar23);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar19));
  return;
}
