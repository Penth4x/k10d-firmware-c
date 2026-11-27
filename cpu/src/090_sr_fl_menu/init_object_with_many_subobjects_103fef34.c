/* @k10d init_object_with_many_subobjects_103fef34 @ 0x103fef34
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Initializes a class instance by creating and linking numerous sub-objects via a factory
 *   helper.
 * summary:
 *   The function calls app_obj_factory repeatedly with incrementing IDs
 *   (0x1840001-0x184002e) to allocate sub-objects, then invokes virtual methods on them
 *   (likely constructors or initializers). It establishes relationships between these sub-
 *   objects using iterate_and_remove_list_entry and graph_link_nextprev, and finally
 *   registers the main object with set_object_field_at_offset_0x10. The pattern suggests a
 *   complex composite object initialization, possibly for a UI or state machine, but the
 *   specific subsystem is not identifiable from the mechanical operations alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_many_subobjects_103fef34(cls_105983cc *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar27;
  int iVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  void *pvVar32;
  void *pvVar33;
  int iVar34;
  void *pvVar35;
  void *pvVar36;
  void *pvVar37;
  void *pvVar38;
  void *pvVar39;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1054c6a0/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184000a,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184000d,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184000b,(void *)0x98,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar11 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar11 + 0xc) + 8) + (int)pvVar11,0);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184000c,(void *)0xf8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar12 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840017,(void *)0x140,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar13 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840021,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar14 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar14 + 0xc) + 8) + (int)pvVar14,0);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840022,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar15 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar15 + 0xc) + 8) + (int)pvVar15,0);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840023,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar16 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar16 + 0xc) + 8) + (int)pvVar16,0);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840024,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar17 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar17 + 0xc) + 8) + (int)pvVar17,0);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840025,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar18 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar18 + 0xc) + 8) + (int)pvVar18,0);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840026,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar19 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar19 + 0xc) + 8) + (int)pvVar19,0);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840027,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar20 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar20 + 0xc) + 8) + (int)pvVar20,0);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840028,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar21 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar21 + 0xc) + 8) + (int)pvVar21,0);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840029,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar22 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar22 + 0xc) + 8) + (int)pvVar22,0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184002a,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar23 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar23 + 0xc) + 8) + (int)pvVar23,0);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184002b,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar24 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar24 + 0xc) + 8) + (int)pvVar24,0);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184002c,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar25 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar25 + 0xc) + 8) + (int)pvVar25,0);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184002d,(void *)0xf8,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar26 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar26 + 0xc) + 8) + (int)pvVar26,0);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184000e,(void *)0x20,(void *)0x78);
  iVar28 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x184000f,(void *)0x68,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar28);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840011,(void *)0x68,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar29 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar29 + 0xc) + 8) + (int)pvVar29,0);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840010,(void *)0x200,(void *)0xd8);
  (((vtbl_entry*)(*(int *)((int)pvVar30 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar30 + 0xc) + 8) + (int)pvVar30,0);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840012,(void *)0x98,(void *)0xd8);
  invoke_virtual_slot_and_set_flag_104956ba(pvVar31,0x48,1);
  (((vtbl_entry*)(*(int *)((int)pvVar31 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar31 + 0xc) + 8) + (int)pvVar31,0);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840014,(void *)0x1a0,(void *)0xd8);
  invoke_virtual_slot_and_set_flag_104956ba(pvVar32,0x48,1);
  (((vtbl_entry*)(*(int *)((int)pvVar32 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar32 + 0xc) + 8) + (int)pvVar32,0);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840015,(void *)0xb0,(void *)0x150);
  iVar28 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840016,(void *)0x68,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar33,iVar28);
  iVar28 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840011,(void *)0x128,(void *)0x150));
  iVar34 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x184001f,(void *)0x1d0,(void *)0x150));
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1840018,(void *)0x140,(void *)0x150);
  invoke_virtual_then_call_helper_10494188((int)pvVar35,iVar34);
  pvVar36 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184001b,(void *)0x140,(void *)0x150);
  invoke_virtual_then_call_helper_10494188((int)pvVar36,iVar28);
  invoke_virtual_then_call_helper_10494188((int)pvVar36,iVar34);
  pvVar38 = (void *)0x140;
  pvVar39 = (void *)0x150;
  pvVar37 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184001e,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  invoke_virtual_then_call_helper_10494188((int)pvVar37,iVar28);
  iterate_and_remove_list_entry(pvVar33,pvVar35,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar33,pvVar36,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar33,pvVar37,pvVar38,pvVar39);
  graph_link_nextprev((int)pvVar35,(int)pvVar36,0xd,pvVar39);
  graph_link_nextprev((int)pvVar36,(int)pvVar37,0xd,pvVar39);
  graph_link_nextprev((int)pvVar36,(int)pvVar35,0xe,pvVar39);
  graph_link_nextprev((int)pvVar37,(int)pvVar36,0xe,pvVar39);
  pvVar36 = (void *)0x0;
  pvVar37 = (void *)0x0;
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x184002e,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar35,pvVar1,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar2,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar3,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar4,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar5,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar6,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar8,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar11,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar12,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar9,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar7,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar10,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar27,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar31,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar32,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar14,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar15,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar16,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar17,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar18,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar19,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar20,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar21,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar22,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar23,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar24,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar25,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar26,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar29,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar30,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar33,pvVar36,pvVar37);
  graph_link_nextprev((int)pvVar27,(int)pvVar33,0x10,pvVar37);
  graph_link_nextprev((int)pvVar27,(int)pvVar33,0xf,pvVar37);
  graph_link_nextprev((int)pvVar33,(int)pvVar27,0x10,pvVar37);
  pvVar1 = (void *)0xf;
  graph_link_nextprev((int)pvVar33,(int)pvVar27,0xf,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar13,pvVar1,pvVar37);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar35));
  return;
}
