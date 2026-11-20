/* @k10d instantiate_and_link_object_tree_103c40f0 @ 0x103c40f0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Instantiates a hierarchy of objects from a resource table and links them into a parent-
 *   child tree.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential resource IDs
 *   (0x10a0001-0x10a0040) to allocate numerous objects. It uses
 *   iterate_and_remove_list_entry to attach these objects as children to parent containers
 *   and graph_link_nextprev to establish sibling relationships, constructing a complex
 *   object tree. Finally, it registers the root object with the parent context via
 *   set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void instantiate_and_link_object_tree_103c40f0(cls_10595294 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar23;
  void *pvVar24;
  void *pvVar25;
  void *pvVar26;
  int iVar27;
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  void *pvVar32;
  void *pvVar33;
  void *pvVar34;
  void *pvVar35;
  void *pvVar36;
  uint8_t *puVar37;
  void *pvVar38;
  void *pvVar39;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1054a61c/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0001,(void *)0x20,(void *)0x198);
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0002,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0003,(void *)(0),(void *)0x44);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0004,(void *)(0),(void *)0x196);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0005,(void *)(0),(void *)0x44);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0006,(void *)(0),(void *)0x2c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0007,(void *)(0),(void *)0x19c);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1070008,(void *)0x20,(void *)0x8c);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0009,(void *)0x1d0,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a000a,(void *)0x218,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a000e,(void *)0x80,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a000f,(void *)0x20,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar12 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a000b,(void *)0x20,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar13 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0010,(void *)0x260,(void *)0x60);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0011,(void *)0x260,(void *)0x90);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0012,(void *)0x260,(void *)0xc0);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0013,(void *)0x260,(void *)0xf0);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0014,(void *)0x260,(void *)0x120);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0015,(void *)0x260,(void *)0x150);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a000c,(void *)0x20,(void *)0x60);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a000d,(void *)0x20,(void *)0x90);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a000d,(void *)0x20,(void *)0xc0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a000d,(void *)0x20,(void *)0xf0);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a000d,(void *)0x20,(void *)0x120);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a000d,(void *)0x20,(void *)0x150);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0017,(void *)0x38,(void *)0x60);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0018,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar27);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0019,(void *)0x218,(void *)0x60);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a001a,(void *)0x218,(void *)0x60);
  pvVar34 = (void *)0x248;
  puVar37 = &DAT_00000060;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a001b,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar26,pvVar28,pvVar34,puVar37);
  iterate_and_remove_list_entry(pvVar26,pvVar29,pvVar34,puVar37);
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar27);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a001c,(void *)0x38,(void *)0x90);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a001d,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar27);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a001e,(void *)0x218,(void *)0x90);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a001f,(void *)0x218,(void *)0x90);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0020,(void *)0x218,(void *)0x90);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0021,(void *)0x218,(void *)0x90);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0022,(void *)0x218,(void *)0x90);
  pvVar35 = (void *)0x248;
  puVar37 = &DAT_00000090;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0023,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar28,pvVar29,pvVar35,puVar37);
  iterate_and_remove_list_entry(pvVar28,pvVar34,pvVar35,puVar37);
  iterate_and_remove_list_entry(pvVar28,pvVar30,pvVar35,puVar37);
  iterate_and_remove_list_entry(pvVar28,pvVar31,pvVar35,puVar37);
  iterate_and_remove_list_entry(pvVar28,pvVar32,pvVar35,puVar37);
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar27);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0024,(void *)0x38,(void *)0xc0);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0025,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar29,iVar27);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0026,(void *)0x218,(void *)0xc0);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0027,(void *)0x218,(void *)0xc0);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0028,(void *)0x218,(void *)0xc0);
  pvVar32 = (void *)0x248;
  pvVar35 = (void *)0xc0;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0029,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar29,pvVar34,pvVar32,pvVar35);
  iterate_and_remove_list_entry(pvVar29,pvVar30,pvVar32,pvVar35);
  iterate_and_remove_list_entry(pvVar29,pvVar31,pvVar32,pvVar35);
  invoke_virtual_then_call_helper_10494188((int)pvVar29,iVar27);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a002a,(void *)0x38,(void *)0xf0);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a002b,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar34,iVar27);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a002c,(void *)0x218,(void *)0xf0);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a002d,(void *)0x218,(void *)0xf0);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a002e,(void *)0x218,(void *)0xf0);
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a002f,(void *)0x218,(void *)0xf0);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0030,(void *)0x218,(void *)0xf0);
  pvVar36 = (void *)0x248;
  pvVar38 = (void *)0xf0;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0031,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar34,pvVar30,pvVar36,pvVar38);
  iterate_and_remove_list_entry(pvVar34,pvVar31,pvVar36,pvVar38);
  iterate_and_remove_list_entry(pvVar34,pvVar32,pvVar36,pvVar38);
  iterate_and_remove_list_entry(pvVar34,pvVar35,pvVar36,pvVar38);
  iterate_and_remove_list_entry(pvVar34,pvVar33,pvVar36,pvVar38);
  invoke_virtual_then_call_helper_10494188((int)pvVar34,iVar27);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0032,(void *)0x38,(void *)0x120);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0033,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar27);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0034,(void *)0x218,(void *)0x120);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0035,(void *)0x218,(void *)0x120);
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0036,(void *)0x218,(void *)0x120);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0037,(void *)0x218,(void *)0x120);
  pvVar36 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0038,(void *)0x218,(void *)0x120);
  pvVar38 = (void *)0x248;
  pvVar39 = (void *)0x120;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0039,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar30,pvVar31,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar30,pvVar32,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar30,pvVar35,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar30,pvVar33,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar30,pvVar36,pvVar38,pvVar39);
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar27);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a003a,(void *)0x38,(void *)0x150);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a003b,(void *)0x20,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar27);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a003c,(void *)0x218,(void *)0x150);
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a003d,(void *)0x218,(void *)0x150);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a003e,(void *)0x218,(void *)0x150);
  pvVar36 = (void *)0x248;
  pvVar38 = (void *)0x150;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a003f,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar31,pvVar32,pvVar36,pvVar38);
  iterate_and_remove_list_entry(pvVar31,pvVar35,pvVar36,pvVar38);
  iterate_and_remove_list_entry(pvVar31,pvVar33,pvVar36,pvVar38);
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar27);
  pvVar35 = (void *)0x0;
  pvVar33 = (void *)0x0;
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10a0040,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar32,pvVar1,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar2,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar3,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar4,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar5,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar6,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar7,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar9,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar10,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar11,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar12,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar13,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar14,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar15,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar16,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar17,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar18,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar19,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar20,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar21,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar22,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar23,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar24,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar25,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar26,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar28,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar29,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar34,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar30,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar31,pvVar35,pvVar33);
  iterate_and_remove_list_entry(pvVar32,pvVar8,pvVar35,pvVar33);
  graph_link_nextprev((int)pvVar26,(int)pvVar28,0xf,pvVar33);
  graph_link_nextprev((int)pvVar28,(int)pvVar26,0x10,pvVar33);
  graph_link_nextprev((int)pvVar28,(int)pvVar29,0xf,pvVar33);
  graph_link_nextprev((int)pvVar29,(int)pvVar28,0x10,pvVar33);
  graph_link_nextprev((int)pvVar29,(int)pvVar34,0xf,pvVar33);
  graph_link_nextprev((int)pvVar34,(int)pvVar29,0x10,pvVar33);
  graph_link_nextprev((int)pvVar34,(int)pvVar30,0xf,pvVar33);
  graph_link_nextprev((int)pvVar30,(int)pvVar34,0x10,pvVar33);
  graph_link_nextprev((int)pvVar30,(int)pvVar31,0xf,pvVar33);
  graph_link_nextprev((int)pvVar31,(int)pvVar30,0x10,pvVar33);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar32));
  return;
}
