/* @k10d build_linked_object_tree @ 0x103d0fde
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 070_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Instantiates a hierarchy of objects via a factory and links them into a tree structure.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x18b0001-0x18b0030)
 *   to create numerous objects. It then uses invoke_virtual_then_call_helper_10494188,
 *   iterate_and_remove_list_entry, and graph_link_nextprev to establish parent-child
 *   relationships and sibling links between these objects, forming a structured tree.
 *   Finally, it registers the root object with the parent via
 *   set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_linked_object_tree(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *puVar20;
  void *pvVar21;
  void *pvVar22;
  void *pvVar23;
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)&DAT_1054d820/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0002,0,(void *)0x44);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0003,0,(void *)0x196);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0004,0,(void *)0x44);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0005,0,(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0006,0,(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0009,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b000d,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b000e,(void *)0x20,(void *)0x18);
  invoke_virtual_then_call_helper_10494188((int)pvVar10,(int)pvVar11);
  pvVar12 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b000f,(void *)0x1b8,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0010,(void *)0x200,(void *)0x18);
  invoke_virtual_then_call_helper_10494188((int)pvVar10,(int)pvVar11);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0011,(void *)0x1a0,(void *)0x18);
  invoke_virtual_then_call_helper_10494188((int)pvVar10,(int)pvVar11);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b000c,(void *)0x110,(void *)0x48);
  invoke_virtual_then_call_helper_10494188((int)pvVar10,(int)pvVar11);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0012,(void *)0x20,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0013,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,(int)pvVar11);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0015,(void *)0x1e8,(void *)0x60);
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0014,(void *)0x1e8,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0016,(void *)0x230,(void *)0x60);
  pvVar17 = (void *)0x1b8;
  puVar20 = &DAT_00000060;
  pvVar16 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0017,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar13,pvVar14,pvVar17,puVar20);
  iterate_and_remove_list_entry(pvVar13,pvVar15,pvVar17,puVar20);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,(int)pvVar11);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,(int)pvVar16);
  graph_link_nextprev((int)pvVar14,(int)pvVar15,0xd,puVar20);
  graph_link_nextprev((int)pvVar14,(int)pvVar15,0xe,puVar20);
  graph_link_nextprev((int)pvVar15,(int)pvVar14,0xd,puVar20);
  graph_link_nextprev((int)pvVar15,(int)pvVar14,0xe,puVar20);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0018,(void *)0x20,(void *)0x90);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0019,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,(int)pvVar11);
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b001b,(void *)0x1e8,(void *)0x90);
  pvVar17 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b001a,(void *)0x1e8,(void *)0x90);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b001c,(void *)0x230,(void *)0x90);
  pvVar18 = (void *)0x1b8;
  puVar20 = &DAT_00000090;
  pvVar16 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b001d,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar14,pvVar15,pvVar18,puVar20);
  iterate_and_remove_list_entry(pvVar14,pvVar17,pvVar18,puVar20);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,(int)pvVar11);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,(int)pvVar16);
  graph_link_nextprev((int)pvVar15,(int)pvVar17,0xd,puVar20);
  graph_link_nextprev((int)pvVar15,(int)pvVar17,0xe,puVar20);
  graph_link_nextprev((int)pvVar17,(int)pvVar15,0xd,puVar20);
  graph_link_nextprev((int)pvVar17,(int)pvVar15,0xe,puVar20);
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b001e,(void *)0x20,(void *)0xc0);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b001f,(void *)0x20,(void *)0xc0);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,(int)pvVar11);
  pvVar17 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0021,(void *)0x1e8,(void *)0xc0);
  pvVar18 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0020,(void *)0x1e8,(void *)0xc0);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0022,(void *)0x230,(void *)0xc0);
  pvVar19 = (void *)0x1b8;
  pvVar21 = (void *)0xc0;
  pvVar16 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0023,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar15,pvVar17,pvVar19,pvVar21);
  iterate_and_remove_list_entry(pvVar15,pvVar18,pvVar19,pvVar21);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,(int)pvVar11);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,(int)pvVar16);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xd,pvVar21);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xe,pvVar21);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0xd,pvVar21);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0xe,pvVar21);
  pvVar17 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0024,(void *)0x20,(void *)0xf0);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0025,(void *)0x20,(void *)0xf0);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,(int)pvVar11);
  pvVar18 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0027,(void *)0x1e8,(void *)0xf0);
  pvVar19 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0026,(void *)0x1e8,(void *)0xf0);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0028,(void *)0x230,(void *)0xf0);
  pvVar21 = (void *)0x1b8;
  pvVar22 = (void *)0xf0;
  pvVar16 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0029,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar17,pvVar18,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar17,pvVar19,pvVar21,pvVar22);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,(int)pvVar11);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,(int)pvVar16);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xd,pvVar22);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xe,pvVar22);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0xd,pvVar22);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0xe,pvVar22);
  pvVar18 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b002a,(void *)0x20,(void *)0x120);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b002b,(void *)0x20,(void *)0x120);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,(int)pvVar11);
  pvVar19 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b002d,(void *)0x1e8,(void *)0x120);
  pvVar21 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b002c,(void *)0x1e8,(void *)0x120);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b002e,(void *)0x230,(void *)0x120);
  pvVar22 = (void *)0x1b8;
  pvVar23 = (void *)0x120;
  pvVar16 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b002f,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar18,pvVar19,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar18,pvVar21,pvVar22,pvVar23);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,(int)pvVar11);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,(int)pvVar16);
  graph_link_nextprev((int)pvVar19,(int)pvVar21,0xd,pvVar23);
  graph_link_nextprev((int)pvVar19,(int)pvVar21,0xe,pvVar23);
  graph_link_nextprev((int)pvVar21,(int)pvVar19,0xd,pvVar23);
  graph_link_nextprev((int)pvVar21,(int)pvVar19,0xe,pvVar23);
  pvVar21 = (void *)0x0;
  pvVar22 = (void *)0x0;
  pvVar19 = (void *)app_obj_factory((void *)param_1[1],(void *)0x18b0030,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar19,pvVar1,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar2,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar3,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar4,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar5,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar6,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar7,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar8,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar9,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar10,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar12,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar13,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar14,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar15,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar17,pvVar21,pvVar22);
  iterate_and_remove_list_entry(pvVar19,pvVar18,pvVar21,pvVar22);
  graph_link_nextprev((int)pvVar10,(int)pvVar13,0xf,pvVar22);
  graph_link_nextprev((int)pvVar10,(int)pvVar18,0x10,pvVar22);
  graph_link_nextprev((int)pvVar13,(int)pvVar10,0x10,pvVar22);
  graph_link_nextprev((int)pvVar13,(int)pvVar14,0xf,pvVar22);
  graph_link_nextprev((int)pvVar14,(int)pvVar13,0x10,pvVar22);
  graph_link_nextprev((int)pvVar14,(int)pvVar15,0xf,pvVar22);
  graph_link_nextprev((int)pvVar15,(int)pvVar14,0x10,pvVar22);
  graph_link_nextprev((int)pvVar15,(int)pvVar17,0xf,pvVar22);
  graph_link_nextprev((int)pvVar17,(int)pvVar15,0x10,pvVar22);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xf,pvVar22);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0x10,pvVar22);
  graph_link_nextprev((int)pvVar18,(int)pvVar10,0xf,pvVar22);
  set_object_field_at_offset_0x10((void *)*param_1,pvVar19);
  return;
}
