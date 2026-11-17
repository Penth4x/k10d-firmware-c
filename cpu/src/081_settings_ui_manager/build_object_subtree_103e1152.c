/* @k10d build_object_subtree_103e1152 @ 0x103e1152
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a hierarchy of sub-objects and links them into a tree structure under a
 *   parent object.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1820001-0x1820033)
 *   and varying sizes to allocate numerous sub-objects. It then establishes relationships
 *   between these objects using iterate_and_remove_list_entry (likely parent-child or
 *   containment) and graph_link_nextprev (likely sibling or adjacent linking). Finally, it
 *   registers the root of this constructed tree with the parent object via
 *   set_object_field_at_offset_0x10. The specific subsystem (UI, data structure, etc.) is
 *   not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_subtree_103e1152(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  void *puVar23;
  void *pvVar24;
  void *pvVar25;
  void *pvVar26;
  void *pvVar27;
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)0x1054c060/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820002,0,(void *)0x44);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820003,0,(void *)0x196);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820004,0,(void *)0x44);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820005,0,(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820006,0,(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820008,(void *)0x260,(void *)0x60);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820009,(void *)0x260,(void *)0xf0);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182000a,(void *)0x20,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182000b,(void *)0x80,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182000c,(void *)0x1d0,(void *)0x198);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182000d,(void *)0x218,(void *)0x198);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182000e,(void *)0x38,(void *)0x18);
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182000f,(void *)0x20,(void *)0x60);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820010,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar16);
  pvVar17 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820012,(void *)0x1e8,(void *)0x60);
  pvVar18 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820011,(void *)0x1e8,(void *)0x60);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820013,(void *)0x230,(void *)0x60);
  pvVar20 = (void *)0x1b8;
  puVar23 = &DAT_00000060;
  iVar19 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar15,pvVar17,pvVar20,puVar23);
  iterate_and_remove_list_entry(pvVar15,pvVar18,pvVar20,puVar23);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar19);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xd,puVar23);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xe,puVar23);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0xd,puVar23);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0xe,puVar23);
  pvVar17 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820015,(void *)0x20,(void *)0x90);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820016,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar16);
  pvVar18 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820018,(void *)0x1e8,(void *)0x90);
  pvVar20 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820017,(void *)0x1e8,(void *)0x90);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820019,(void *)0x230,(void *)0x90);
  pvVar21 = (void *)0x1b8;
  puVar23 = &DAT_00000090;
  iVar19 = (int)app_obj_factory((void *)param_1[1],(void *)0x182001a,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar17,pvVar18,pvVar21,puVar23);
  iterate_and_remove_list_entry(pvVar17,pvVar20,pvVar21,puVar23);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar19);
  graph_link_nextprev((int)pvVar18,(int)pvVar20,0xd,puVar23);
  graph_link_nextprev((int)pvVar18,(int)pvVar20,0xe,puVar23);
  graph_link_nextprev((int)pvVar20,(int)pvVar18,0xd,puVar23);
  graph_link_nextprev((int)pvVar20,(int)pvVar18,0xe,puVar23);
  pvVar18 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182001b,(void *)0x20,(void *)0xc0);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x182001c,(void *)0x20,(void *)0xc0);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar16);
  pvVar20 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182001e,(void *)0x1e8,(void *)0xc0);
  pvVar21 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182001d,(void *)0x1e8,(void *)0xc0);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x182001f,(void *)0x230,(void *)0xc0);
  pvVar22 = (void *)0x1b8;
  pvVar24 = (void *)0xc0;
  iVar19 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820020,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar18,pvVar20,pvVar22,pvVar24);
  iterate_and_remove_list_entry(pvVar18,pvVar21,pvVar22,pvVar24);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar19);
  graph_link_nextprev((int)pvVar20,(int)pvVar21,0xd,pvVar24);
  graph_link_nextprev((int)pvVar20,(int)pvVar21,0xe,pvVar24);
  graph_link_nextprev((int)pvVar21,(int)pvVar20,0xd,pvVar24);
  graph_link_nextprev((int)pvVar21,(int)pvVar20,0xe,pvVar24);
  pvVar20 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820021,(void *)0x20,(void *)0xf0);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820022,(void *)0x20,(void *)0xf0);
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar16);
  pvVar21 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820024,(void *)0x1e8,(void *)0xf0);
  pvVar22 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820023,(void *)0x1e8,(void *)0xf0);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820025,(void *)0x230,(void *)0xf0);
  pvVar24 = (void *)0x1b8;
  pvVar25 = (void *)0xf0;
  iVar19 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820026,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar20,pvVar21,pvVar24,pvVar25);
  iterate_and_remove_list_entry(pvVar20,pvVar22,pvVar24,pvVar25);
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar19);
  graph_link_nextprev((int)pvVar21,(int)pvVar22,0xd,pvVar25);
  graph_link_nextprev((int)pvVar21,(int)pvVar22,0xe,pvVar25);
  graph_link_nextprev((int)pvVar22,(int)pvVar21,0xd,pvVar25);
  graph_link_nextprev((int)pvVar22,(int)pvVar21,0xe,pvVar25);
  pvVar21 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820027,(void *)0x20,(void *)0x120);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820028,(void *)0x20,(void *)0x120);
  invoke_virtual_then_call_helper_10494188((int)pvVar21,iVar16);
  pvVar22 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182002a,(void *)0x1e8,(void *)0x120);
  pvVar24 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820029,(void *)0x1e8,(void *)0x120);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x182002b,(void *)0x230,(void *)0x120);
  pvVar25 = (void *)0x1b8;
  pvVar26 = (void *)0x120;
  iVar19 = (int)app_obj_factory((void *)param_1[1],(void *)0x182002c,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar21,pvVar22,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar21,pvVar24,pvVar25,pvVar26);
  invoke_virtual_then_call_helper_10494188((int)pvVar21,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar21,iVar19);
  graph_link_nextprev((int)pvVar22,(int)pvVar24,0xd,pvVar26);
  graph_link_nextprev((int)pvVar22,(int)pvVar24,0xe,pvVar26);
  graph_link_nextprev((int)pvVar24,(int)pvVar22,0xd,pvVar26);
  graph_link_nextprev((int)pvVar24,(int)pvVar22,0xe,pvVar26);
  pvVar22 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182002d,(void *)0x20,(void *)0x150);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x182002e,(void *)0x20,(void *)0x150);
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar16);
  pvVar24 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820030,(void *)0x1e8,(void *)0x150);
  pvVar25 = (void *)app_obj_factory((void *)param_1[1],(void *)0x182002f,(void *)0x1e8,(void *)0x150);
  iVar16 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820031,(void *)0x230,(void *)0x150);
  pvVar26 = (void *)0x1b8;
  pvVar27 = (void *)0x150;
  iVar19 = (int)app_obj_factory((void *)param_1[1],(void *)0x1820032,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar22,pvVar24,pvVar26,pvVar27);
  iterate_and_remove_list_entry(pvVar22,pvVar25,pvVar26,pvVar27);
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar19);
  graph_link_nextprev((int)pvVar24,(int)pvVar25,0xd,pvVar27);
  graph_link_nextprev((int)pvVar24,(int)pvVar25,0xe,pvVar27);
  graph_link_nextprev((int)pvVar25,(int)pvVar24,0xd,pvVar27);
  graph_link_nextprev((int)pvVar25,(int)pvVar24,0xe,pvVar27);
  pvVar25 = (void *)0x0;
  pvVar26 = (void *)0x0;
  pvVar24 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1820033,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar24,pvVar1,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar2,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar3,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar4,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar5,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar6,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar7,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar8,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar9,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar10,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar12,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar13,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar11,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar14,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar15,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar17,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar18,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar20,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar21,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar22,pvVar25,pvVar26);
  graph_link_nextprev((int)pvVar15,(int)pvVar17,0xf,pvVar26);
  graph_link_nextprev((int)pvVar17,(int)pvVar15,0x10,pvVar26);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xf,pvVar26);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0x10,pvVar26);
  graph_link_nextprev((int)pvVar18,(int)pvVar20,0xf,pvVar26);
  graph_link_nextprev((int)pvVar20,(int)pvVar18,0x10,pvVar26);
  graph_link_nextprev((int)pvVar20,(int)pvVar21,0xf,pvVar26);
  graph_link_nextprev((int)pvVar21,(int)pvVar20,0x10,pvVar26);
  graph_link_nextprev((int)pvVar21,(int)pvVar22,0xf,pvVar26);
  graph_link_nextprev((int)pvVar22,(int)pvVar21,0x10,pvVar26);
  set_object_field_at_offset_0x10((void *)*param_1,pvVar24);
  return;
}
