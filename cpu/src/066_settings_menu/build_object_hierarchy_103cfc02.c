/* @k10d build_object_hierarchy_103cfc02 @ 0x103cfc02
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 066_settings_menu (unit names are model-proposed)
 * purpose:
 *   Instantiates a set of objects via a factory and links them into a tree structure.
 * summary:
 *   The function calls app_obj_factory repeatedly with unique IDs (0x1920001-0x1920025) to
 *   create numerous object instances. It then uses iterate_and_remove_list_entry and
 *   graph_link_nextprev to establish parent-child and sibling relationships between these
 *   objects, forming a tree structure. Finally, it registers the root of this tree
 *   (pvVar24) with the parent object via set_object_field_at_offset_0x10. The specific
 *   subsystem (e.g., UI, camera control) is not identifiable from the mechanical operations
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_hierarchy_103cfc02(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar29;
  int iVar30;
  void *pvVar31;
  int iVar32;
  uint8_t *puVar33;
  uint8_t *puVar34;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)&DAT_105515c4/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920002,0,(void *)0x44);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920003,0,(void *)0x196);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920004,0,(void *)0x44);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920005,0,(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920006,0,(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920009,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192000d,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192000e,(void *)0xb0,(void *)0xa8);
  pvVar12 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920025,(void *)0xc4,(void *)0x13e);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920024,(void *)0x138,(void *)0xde);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192001b,(void *)0x188,(void *)0xf0);
  (**(code **)(*(int *)((int)pvVar14 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar14 + 0xc) + 8) + (int)pvVar14,0);
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192001c,(void *)0x188,(void *)0xf0);
  (**(code **)(*(int *)((int)pvVar15 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar15 + 0xc) + 8) + (int)pvVar15,0);
  pvVar16 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192001d,(void *)0x188,(void *)0xf0);
  (**(code **)(*(int *)((int)pvVar16 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar16 + 0xc) + 8) + (int)pvVar16,0);
  pvVar17 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192001e,(void *)0x188,(void *)0xf0);
  (**(code **)(*(int *)((int)pvVar17 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar17 + 0xc) + 8) + (int)pvVar17,0);
  pvVar18 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192001f,(void *)0x188,(void *)0x138);
  (**(code **)(*(int *)((int)pvVar18 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar18 + 0xc) + 8) + (int)pvVar18,0);
  pvVar19 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920020,(void *)0x188,(void *)0x138);
  (**(code **)(*(int *)((int)pvVar19 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar19 + 0xc) + 8) + (int)pvVar19,0);
  pvVar20 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920021,(void *)0x188,(void *)0x138);
  (**(code **)(*(int *)((int)pvVar20 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar20 + 0xc) + 8) + (int)pvVar20,0);
  pvVar21 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920022,(void *)0x188,(void *)0x138);
  (**(code **)(*(int *)((int)pvVar21 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar21 + 0xc) + 8) + (int)pvVar21,0);
  pvVar22 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192000f,(void *)0x80,(void *)0x60);
  iVar23 = (int)app_obj_factory((void *)param_1[1],(void *)0x1920010,(void *)0x80,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar23);
  iVar23 = (int)app_obj_factory((void *)param_1[1],(void *)0x1920011,(void *)0x68,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar22,iVar23);
  pvVar24 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920012,(void *)0x80,(void *)0x60);
  iVar23 = (int)app_obj_factory((void *)param_1[1],(void *)0x1920013,(void *)0x80,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar23);
  pvVar25 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920014,(void *)0x80,(void *)0x90);
  iVar23 = (int)app_obj_factory((void *)param_1[1],(void *)0x1920015,(void *)0x80,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar23);
  pvVar26 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920016,(void *)0x80,(void *)0xc0);
  iVar23 = (int)app_obj_factory((void *)param_1[1],(void *)0x1920017,(void *)0x80,(void *)0xc0);
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar23);
  iVar23 = (int)app_obj_factory((void *)param_1[1],(void *)0x192000a,(void *)0x80,(void *)0x198);
  pvVar27 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192000b,(void *)0x1a0,(void *)0x198);
  (**(code **)(*(int *)((int)pvVar27 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar27 + 0xc) + 8) + (int)pvVar27,0);
  pvVar28 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192000c,(void *)0x1e8,(void *)0x198);
  (**(code **)(*(int *)((int)pvVar28 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar28 + 0xc) + 8) + (int)pvVar28,0);
  iVar29 = (int)app_obj_factory((void *)param_1[1],(void *)0x1920018,(void *)100,(void *)0x60);
  iVar30 = (int)app_obj_factory((void *)param_1[1],(void *)0x1920019,(void *)0x7c,(void *)0x5c);
  puVar34 = (uint8_t *)&DAT_0000005c;
  pvVar31 = (void *)app_obj_factory((void *)param_1[1],(void *)0x192001a,(void *)0x7c,(void *)__frv_reg_unset(7));
  puVar33 = (uint8_t *)&DAT_00000060;
  iVar32 = (int)alloc_two_word_pair_1045bc2e(auStack_10,0x80,0x60);
  copy_four_words_to_offset_0xa0(pvVar31,iVar32);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  iterate_and_remove_list_entry(pvVar31,pvVar24,puVar33,puVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar25,puVar33,puVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar26,puVar33,puVar34);
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar23);
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar29);
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar30);
  graph_link_nextprev((int)pvVar24,(int)pvVar26,0x10,puVar34);
  graph_link_nextprev((int)pvVar24,(int)pvVar25,0xf,puVar34);
  graph_link_nextprev((int)pvVar25,(int)pvVar24,0x10,puVar34);
  graph_link_nextprev((int)pvVar25,(int)pvVar26,0xf,puVar34);
  graph_link_nextprev((int)pvVar26,(int)pvVar25,0x10,puVar34);
  graph_link_nextprev((int)pvVar26,(int)pvVar24,0xf,puVar34);
  graph_link_nextprev((int)pvVar22,(int)pvVar31,0xd,puVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar22,0xc,puVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar22,0x11,puVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar22,0xe,puVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar22,7,puVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar22,0,puVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar22,1,puVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar22,3,puVar34);
  pvVar25 = (void *)0x0;
  pvVar26 = (void *)0x0;
  pvVar24 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1920023,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar24,pvVar1,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar2,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar3,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar4,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar5,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar6,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar7,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar8,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar9,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar27,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar28,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar11,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar14,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar15,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar16,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar17,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar18,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar19,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar20,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar21,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar10,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar22,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar31,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar13,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar12,pvVar25,pvVar26);
  set_object_field_at_offset_0x10((void *)*param_1,pvVar24);
  return;
}
