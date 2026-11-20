/* @k10d build_object_hierarchy_103e2096 @ 0x103e2096
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Instantiates a large set of objects via a factory and links them into a tree structure.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1810001-0x1810033)
 *   to create numerous object instances. It uses iterate_and_remove_list_entry and
 *   invoke_virtual_then_call_helper_10494188 to add these objects to parent containers and
 *   graph_link_nextprev to establish bidirectional links between them, forming a tree
 *   structure. Finally, it registers the root of this structure with the parent object via
 *   set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_hierarchy_103e2096(cls_10596dc4 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  void *pvVar25;
  int iVar26;
  uint8_t *puVar27;
  uint8_t *puVar28;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1054bc50/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810009,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181000d,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181000b,(void *)0x1a0,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar11 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar11 + 0xc) + 8) + (int)pvVar11,0);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181000c,(void *)0x1e8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar12 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181000f,(void *)0x20,(void *)0x60);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810010,(void *)0x20,(void *)0x60));
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x181000e,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810011,(void *)0x1a0,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810012,(void *)0x1b8,(void *)0x60);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810013,(void *)0x1b8,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar14);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810014,(void *)0x1b8,(void *)0x90);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810015,(void *)0x1b8,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar14);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810016,(void *)0x1b8,(void *)0xc0);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810017,(void *)0x1b8,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar14);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810018,(void *)0x1b8,(void *)0xf0);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810019,(void *)0x1b8,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar14);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181001c,(void *)0x1b8,(void *)0x120);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x181001d,(void *)0x1b8,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x181000a,(void *)0x80,(void *)0x198));
  iVar21 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810028,(void *)0x19c,(void *)0x60));
  iVar22 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810029,(void *)0x1b4,(void *)0x5c));
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x181001a,(void *)0x260,(void *)0x60));
  iVar24 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x181001b,(void *)0x260,(void *)0xd8));
  puVar28 = &DAT_0000005c;
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181002a,(void *)0x1b4,(void *)__frv_reg_unset(7));
  puVar27 = &DAT_00000060;
  iVar26 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,0x1b8,0x60));
  copy_four_words_to_offset_0xa0(pvVar25,iVar26);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  iterate_and_remove_list_entry(pvVar25,pvVar16,puVar27,puVar28);
  iterate_and_remove_list_entry(pvVar25,pvVar17,puVar27,puVar28);
  iterate_and_remove_list_entry(pvVar25,pvVar18,puVar27,puVar28);
  iterate_and_remove_list_entry(pvVar25,pvVar19,puVar27,puVar28);
  iterate_and_remove_list_entry(pvVar25,pvVar20,puVar27,puVar28);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar14);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar21);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar22);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar23);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar24);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar15);
  graph_link_nextprev((int)pvVar16,(int)pvVar17,0xf,puVar28);
  graph_link_nextprev((int)pvVar17,(int)pvVar16,0x10,puVar28);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xf,puVar28);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0x10,puVar28);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xf,puVar28);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0x10,puVar28);
  graph_link_nextprev((int)pvVar19,(int)pvVar20,0xf,puVar28);
  graph_link_nextprev((int)pvVar20,(int)pvVar19,0x10,puVar28);
  graph_link_nextprev((int)pvVar25,(int)pvVar13,0xc,puVar28);
  graph_link_nextprev((int)pvVar25,(int)pvVar13,0x11,puVar28);
  graph_link_nextprev((int)pvVar25,(int)pvVar13,0xe,puVar28);
  graph_link_nextprev((int)pvVar25,(int)pvVar13,7,puVar28);
  graph_link_nextprev((int)pvVar25,(int)pvVar13,0,puVar28);
  graph_link_nextprev((int)pvVar25,(int)pvVar13,1,puVar28);
  graph_link_nextprev((int)pvVar25,(int)pvVar13,3,puVar28);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181001e,(void *)0x1b8,(void *)0x60);
  iVar22 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x181001f,(void *)0x1b8,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar22);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810020,(void *)0x1b8,(void *)0x90);
  iVar22 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810021,(void *)0x1b8,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar22);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810022,(void *)0x1b8,(void *)0xc0);
  iVar22 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810023,(void *)0x1b8,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar22);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810024,(void *)0x1b8,(void *)0xf0);
  iVar22 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810025,(void *)0x1b8,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar22);
  iVar22 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810029,(void *)0x1b4,(void *)0x5c));
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810026,(void *)0x260,(void *)0x60));
  iVar24 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810027,(void *)0x260,(void *)0xd8));
  puVar28 = &DAT_0000005c;
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181002b,(void *)0x1b4,(void *)__frv_reg_unset(7));
  puVar27 = &DAT_00000060;
  iVar26 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,0x1b8,0x60));
  copy_four_words_to_offset_0xa0(pvVar20,iVar26);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  iterate_and_remove_list_entry(pvVar20,pvVar16,puVar27,puVar28);
  iterate_and_remove_list_entry(pvVar20,pvVar17,puVar27,puVar28);
  iterate_and_remove_list_entry(pvVar20,pvVar18,puVar27,puVar28);
  iterate_and_remove_list_entry(pvVar20,pvVar19,puVar27,puVar28);
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar14);
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar21);
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar22);
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar23);
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar24);
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar15);
  graph_link_nextprev((int)pvVar16,(int)pvVar17,0xf,puVar28);
  graph_link_nextprev((int)pvVar17,(int)pvVar16,0x10,puVar28);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xf,puVar28);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0x10,puVar28);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xf,puVar28);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0x10,puVar28);
  graph_link_nextprev((int)pvVar20,(int)pvVar13,0xc,puVar28);
  graph_link_nextprev((int)pvVar20,(int)pvVar13,0x11,puVar28);
  graph_link_nextprev((int)pvVar20,(int)pvVar13,0xe,puVar28);
  graph_link_nextprev((int)pvVar20,(int)pvVar13,7,puVar28);
  graph_link_nextprev((int)pvVar20,(int)pvVar13,0,puVar28);
  graph_link_nextprev((int)pvVar20,(int)pvVar13,1,puVar28);
  graph_link_nextprev((int)pvVar20,(int)pvVar13,3,puVar28);
  pvVar17 = (void *)0x0;
  pvVar18 = (void *)0x0;
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181002c,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar16,pvVar25,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar20,pvVar17,pvVar18);
  graph_link_nextprev((int)pvVar25,(int)pvVar20,0xf,pvVar18);
  graph_link_nextprev((int)pvVar20,(int)pvVar25,0x10,pvVar18);
  graph_link_nextprev((int)pvVar13,(int)pvVar16,0xd,pvVar18);
  graph_link_nextprev((int)pvVar16,(int)pvVar13,0xc,pvVar18);
  graph_link_nextprev((int)pvVar16,(int)pvVar13,0x11,pvVar18);
  graph_link_nextprev((int)pvVar16,(int)pvVar13,0xe,pvVar18);
  graph_link_nextprev((int)pvVar16,(int)pvVar13,7,pvVar18);
  graph_link_nextprev((int)pvVar16,(int)pvVar13,0,pvVar18);
  graph_link_nextprev((int)pvVar16,(int)pvVar13,1,pvVar18);
  graph_link_nextprev((int)pvVar16,(int)pvVar13,3,pvVar18);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181002d,(void *)0x20,(void *)0x90);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x181002e,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar14);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810030,(void *)0x1e8,(void *)0x90);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x181002f,(void *)0x1e8,(void *)0x90);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810031,(void *)0x230,(void *)0x90));
  pvVar20 = (void *)0x1b8;
  puVar27 = &DAT_00000090;
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810032,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar17,pvVar18,pvVar20,puVar27);
  iterate_and_remove_list_entry(pvVar17,pvVar19,pvVar20,puVar27);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar14);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar15);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xd,puVar27);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xe,puVar27);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0xd,puVar27);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0xe,puVar27);
  pvVar19 = (void *)0x0;
  pvVar20 = (void *)0x0;
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1810033,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar18,pvVar1,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar2,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar3,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar4,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar5,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar6,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar7,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar8,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar9,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar11,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar12,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar10,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar13,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar16,pvVar19,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar17,pvVar19,pvVar20);
  graph_link_nextprev((int)pvVar13,(int)pvVar17,0x10,pvVar20);
  graph_link_nextprev((int)pvVar13,(int)pvVar17,0xf,pvVar20);
  graph_link_nextprev((int)pvVar17,(int)pvVar13,0x10,pvVar20);
  graph_link_nextprev((int)pvVar17,(int)pvVar13,0xf,pvVar20);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar18));
  return;
}
