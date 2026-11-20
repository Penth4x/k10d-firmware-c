/* @k10d init_object_substructures_103c30f4 @ 0x103c30f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and links numerous sub-objects via app_obj_factory and registers them with a
 *   parent object.
 * summary:
 *   The function calls app_obj_factory repeatedly with incrementing IDs
 *   (0x1090001-0x1090036) to allocate sub-structures. It then uses
 *   iterate_and_remove_list_entry to register these sub-objects with a parent object
 *   (pvVar34) and graph_link_nextprev to establish bidirectional links between several of
 *   them. Finally, it calls set_object_field_at_offset_0x10 with the parent object and the
 *   last allocated sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_substructures_103c30f4(cls_105951ec *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  uint8_t *puVar33;
  void *pvVar34;
  void *pvVar35;
  void *pvVar36;
  void *pvVar37;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1054a1d0/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090001,(void *)0x20,(void *)0x198);
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090002,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090003,(void *)(0),(void *)0x44);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090004,(void *)(0),(void *)0x196);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090005,(void *)(0),(void *)0x44);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090007,(void *)(0),(void *)0x2c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090008,(void *)(0),(void *)0x19c);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090006,(void *)0x20,(void *)0x11c);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090009,(void *)0x1d0,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109000a,(void *)0x218,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109000e,(void *)0x80,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109000f,(void *)0x20,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar12 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109000b,(void *)0x20,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar13 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090010,(void *)0x260,(void *)0x60);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090011,(void *)0x260,(void *)0x90);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090012,(void *)0x260,(void *)0xc0);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090013,(void *)0x260,(void *)0xf0);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090014,(void *)0x260,(void *)0x120);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090015,(void *)0x260,(void *)0x150);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109000c,(void *)0x20,(void *)0x60);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109000c,(void *)0x20,(void *)0x90);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109000c,(void *)0x20,(void *)0xc0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109000c,(void *)0x20,(void *)0xf0);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109000d,(void *)0x20,(void *)0x120);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109000d,(void *)0x20,(void *)0x150);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090017,(void *)0x38,(void *)0x60);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090018,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar27);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090019,(void *)0x218,(void *)0x60);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109001a,(void *)0x218,(void *)0x60);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109001b,(void *)0x218,(void *)0x60);
  pvVar31 = (void *)0x248;
  puVar33 = &DAT_00000060;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x109001c,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar26,pvVar28,pvVar31,puVar33);
  iterate_and_remove_list_entry(pvVar26,pvVar29,pvVar31,puVar33);
  iterate_and_remove_list_entry(pvVar26,pvVar30,pvVar31,puVar33);
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar27);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109001d,(void *)0x38,(void *)0x90);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x109001e,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar27);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109001f,(void *)0x218,(void *)0x90);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090020,(void *)0x218,(void *)0x90);
  pvVar31 = (void *)0x248;
  puVar33 = &DAT_00000090;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090021,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar28,pvVar29,pvVar31,puVar33);
  iterate_and_remove_list_entry(pvVar28,pvVar30,pvVar31,puVar33);
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar27);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090022,(void *)0x38,(void *)0xc0);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090023,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar29,iVar27);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090024,(void *)0x218,(void *)0xc0);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090025,(void *)0x218,(void *)0xc0);
  pvVar32 = (void *)0x248;
  pvVar34 = (void *)0xc0;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090026,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar29,pvVar30,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar31,pvVar32,pvVar34);
  invoke_virtual_then_call_helper_10494188((int)pvVar29,iVar27);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090027,(void *)0x38,(void *)0xf0);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090028,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar27);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090029,(void *)0x218,(void *)0xf0);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109002a,(void *)0x218,(void *)0xf0);
  pvVar34 = (void *)0x248;
  pvVar35 = (void *)0xf0;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x109002b,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar30,pvVar31,pvVar34,pvVar35);
  iterate_and_remove_list_entry(pvVar30,pvVar32,pvVar34,pvVar35);
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar27);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109002c,(void *)0x38,(void *)0x120);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x109002d,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar27);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109002e,(void *)0x218,(void *)0x120);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x109002f,(void *)0x218,(void *)0x120);
  pvVar35 = (void *)0x248;
  pvVar36 = (void *)0x120;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090030,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar31,pvVar32,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar31,pvVar34,pvVar35,pvVar36);
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar27);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090031,(void *)0x38,(void *)0x150);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090032,(void *)0x20,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar32,iVar27);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090033,(void *)0x218,(void *)0x150);
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090034,(void *)0x218,(void *)0x150);
  pvVar36 = (void *)0x248;
  pvVar37 = (void *)0x150;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090035,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar32,pvVar34,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar32,pvVar35,pvVar36,pvVar37);
  invoke_virtual_then_call_helper_10494188((int)pvVar32,iVar27);
  pvVar35 = (void *)0x0;
  pvVar36 = (void *)0x0;
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1090036,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar34,pvVar1,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar2,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar3,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar4,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar5,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar6,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar7,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar9,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar10,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar11,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar12,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar13,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar14,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar15,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar16,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar17,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar18,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar19,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar20,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar21,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar22,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar23,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar24,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar25,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar26,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar28,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar29,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar30,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar31,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar32,pvVar35,pvVar36);
  iterate_and_remove_list_entry(pvVar34,pvVar8,pvVar35,pvVar36);
  graph_link_nextprev((int)pvVar26,(int)pvVar28,0xf,pvVar36);
  graph_link_nextprev((int)pvVar28,(int)pvVar26,0x10,pvVar36);
  graph_link_nextprev((int)pvVar28,(int)pvVar29,0xf,pvVar36);
  graph_link_nextprev((int)pvVar29,(int)pvVar28,0x10,pvVar36);
  graph_link_nextprev((int)pvVar29,(int)pvVar30,0xf,pvVar36);
  graph_link_nextprev((int)pvVar30,(int)pvVar29,0x10,pvVar36);
  graph_link_nextprev((int)pvVar30,(int)pvVar31,0xf,pvVar36);
  graph_link_nextprev((int)pvVar31,(int)pvVar30,0x10,pvVar36);
  graph_link_nextprev((int)pvVar31,(int)pvVar32,0xf,pvVar36);
  graph_link_nextprev((int)pvVar32,(int)pvVar31,0x10,pvVar36);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar34));
  return;
}
