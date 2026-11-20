/* @k10d instantiate_and_link_object_graph_103e64b8 @ 0x103e64b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Creates a set of objects via a factory and links them into a graph using helper
 *   functions.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1850001-0x1850029)
 *   to instantiate numerous objects. It then uses invoke_virtual_then_call_helper_10494188
 *   and graph_link_nextprev to establish relationships between these objects, and
 *   iterate_and_remove_list_entry to configure their properties. Finally, it registers the
 *   root object (pvVar18) with the parent context via set_object_field_at_offset_0x10. The
 *   specific subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void instantiate_and_link_object_graph_103e64b8(cls_10597214 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  int iVar20;
  int iVar21;
  void *pvVar22;
  int iVar23;
  uint8_t *puVar24;
  void *pvVar25;
  uint8_t *puVar26;
  void *pvVar27;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1054cbb4/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850009,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x185000d,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x185000b,(void *)0x1a0,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar11 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar11 + 0xc) + 8) + (int)pvVar11,0);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x185000c,(void *)0x1e8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar12 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x185000f,(void *)0x20,(void *)0x60);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850010,(void *)0x20,(void *)0x60));
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x185000e,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850011,(void *)0x1a0,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850012,(void *)0x1b8,(void *)0x60);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850013,(void *)0x1b8,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar14);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850014,(void *)0x1b8,(void *)0x90);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850015,(void *)0x1b8,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar14);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850016,(void *)0x1b8,(void *)0xc0);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850017,(void *)0x1b8,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar14);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850018,(void *)0x1b8,(void *)0xf0);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850019,(void *)0x1b8,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x185000a,(void *)0x80,(void *)0x198));
  iVar20 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x185001a,(void *)0x19c,(void *)0x60));
  iVar21 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x185001b,(void *)0x1b4,(void *)0x5c));
  puVar26 = &DAT_0000005c;
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x185001c,(void *)0x1b4,(void *)__frv_reg_unset(7));
  puVar24 = &DAT_00000060;
  iVar23 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,0x1b8,0x60));
  copy_four_words_to_offset_0xa0(pvVar22,iVar23);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  iterate_and_remove_list_entry(pvVar22,pvVar16,puVar24,puVar26);
  iterate_and_remove_list_entry(pvVar22,pvVar17,puVar24,puVar26);
  iterate_and_remove_list_entry(pvVar22,pvVar18,puVar24,puVar26);
  iterate_and_remove_list_entry(pvVar22,pvVar19,puVar24,puVar26);
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar14);
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar20);
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar21);
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar15);
  graph_link_nextprev((int)pvVar16,(int)pvVar19,0x10,puVar26);
  graph_link_nextprev((int)pvVar16,(int)pvVar17,0xf,puVar26);
  graph_link_nextprev((int)pvVar17,(int)pvVar16,0x10,puVar26);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xf,puVar26);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0x10,puVar26);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xf,puVar26);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0x10,puVar26);
  graph_link_nextprev((int)pvVar19,(int)pvVar16,0xf,puVar26);
  graph_link_nextprev((int)pvVar13,(int)pvVar22,0xd,puVar26);
  graph_link_nextprev((int)pvVar22,(int)pvVar13,0xc,puVar26);
  graph_link_nextprev((int)pvVar22,(int)pvVar13,0x11,puVar26);
  graph_link_nextprev((int)pvVar22,(int)pvVar13,0xe,puVar26);
  graph_link_nextprev((int)pvVar22,(int)pvVar13,7,puVar26);
  graph_link_nextprev((int)pvVar22,(int)pvVar13,0,puVar26);
  graph_link_nextprev((int)pvVar22,(int)pvVar13,1,puVar26);
  graph_link_nextprev((int)pvVar22,(int)pvVar13,3,puVar26);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x185001d,(void *)0x20,(void *)0x90);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x185001e,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar14);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850020,(void *)0x1e8,(void *)0x90);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x185001f,(void *)0x1e8,(void *)0x90);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850021,(void *)0x230,(void *)0x90));
  pvVar19 = (void *)0x1b8;
  puVar24 = &DAT_00000090;
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850022,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar16,pvVar17,pvVar19,puVar24);
  iterate_and_remove_list_entry(pvVar16,pvVar18,pvVar19,puVar24);
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar14);
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar15);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xd,puVar24);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xe,puVar24);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0xd,puVar24);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0xe,puVar24);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850023,(void *)0x20,(void *)0xc0);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850024,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar14);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850026,(void *)0x1e8,(void *)0xc0);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850025,(void *)0x1e8,(void *)0xc0);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850027,(void *)0x230,(void *)0xc0));
  pvVar25 = (void *)0x1b8;
  pvVar27 = (void *)0xc0;
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850028,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar17,pvVar18,pvVar25,pvVar27);
  iterate_and_remove_list_entry(pvVar17,pvVar19,pvVar25,pvVar27);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar14);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar15);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xd,pvVar27);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xe,pvVar27);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0xd,pvVar27);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0xe,pvVar27);
  pvVar19 = (void *)0x0;
  pvVar25 = (void *)0x0;
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1850029,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar18,pvVar1,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar2,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar3,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar4,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar5,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar6,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar7,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar8,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar9,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar11,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar12,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar10,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar13,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar22,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar16,pvVar19,pvVar25);
  iterate_and_remove_list_entry(pvVar18,pvVar17,pvVar19,pvVar25);
  graph_link_nextprev((int)pvVar13,(int)pvVar17,0x10,pvVar25);
  graph_link_nextprev((int)pvVar13,(int)pvVar16,0xf,pvVar25);
  graph_link_nextprev((int)pvVar16,(int)pvVar13,0x10,pvVar25);
  graph_link_nextprev((int)pvVar16,(int)pvVar17,0xf,pvVar25);
  graph_link_nextprev((int)pvVar17,(int)pvVar16,0x10,pvVar25);
  graph_link_nextprev((int)pvVar17,(int)pvVar13,0xf,pvVar25);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar18));
  return;
}
