/* @k10d init_object_with_many_subobjects_103c5354 @ 0x103c5354
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by creating and linking numerous sub-objects via a helper
 *   function.
 * summary:
 *   The function calls app_obj_factory repeatedly with a sequence of IDs
 *   (0x10b0001-0x10b0038) to create sub-objects or fields. It then uses
 *   iterate_and_remove_list_entry and graph_link_nextprev to link these sub-objects into a
 *   structure, likely a tree or list, and finally calls set_object_field_at_offset_0x10 to
 *   register the result. The specific camera subsystem is not identifiable from the
 *   mechanical operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_many_subobjects_103c5354(cls_10595334 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  uint8_t *puVar36;
  void *pvVar37;
  void *pvVar38;
  void *pvVar39;
  void *pvVar40;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1054ab30/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0001,(void *)0x20,(void *)0x198);
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0002,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0003,(void *)(0),(void *)0x44);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0004,(void *)(0),(void *)0x196);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0005,(void *)(0),(void *)0x44);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0006,(void *)(0),(void *)0x2c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0007,(void *)(0),(void *)0x19c);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0008,(void *)0x20,(void *)0x11c);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0009,(void *)0x1d0,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b000a,(void *)0x218,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b000e,(void *)0x80,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b000f,(void *)0x20,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar12 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b000b,(void *)0x20,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar13 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0010,(void *)0x260,(void *)0x60);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0011,(void *)0x260,(void *)0x90);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0012,(void *)0x260,(void *)0xc0);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0013,(void *)0x260,(void *)0xf0);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0014,(void *)0x260,(void *)0x120);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0015,(void *)0x260,(void *)0x150);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b000c,(void *)0x20,(void *)0x60);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b000c,(void *)0x20,(void *)0x90);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b000c,(void *)0x20,(void *)0xc0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b000c,(void *)0x20,(void *)0xf0);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b000d,(void *)0x20,(void *)0x120);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b000d,(void *)0x20,(void *)0x150);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0017,(void *)0x38,(void *)0x60);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0018,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar27);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0019,(void *)0x218,(void *)0x60);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b001a,(void *)0x218,(void *)0x60);
  pvVar32 = (void *)0x248;
  puVar36 = &DAT_00000060;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b001b,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  iterate_and_remove_list_entry(pvVar26,pvVar28,pvVar32,puVar36);
  iterate_and_remove_list_entry(pvVar26,pvVar29,pvVar32,puVar36);
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar27);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b001c,(void *)0x38,(void *)0x90);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b001d,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar27);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b001e,(void *)0x218,(void *)0x90);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b001f,(void *)0x218,(void *)0x90);
  pvVar33 = (void *)0x248;
  puVar36 = &DAT_00000090;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0020,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  iterate_and_remove_list_entry(pvVar28,pvVar29,pvVar33,puVar36);
  iterate_and_remove_list_entry(pvVar28,pvVar32,pvVar33,puVar36);
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar27);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0021,(void *)0x38,(void *)0xc0);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0022,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar29,iVar27);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0023,(void *)0x218,(void *)0xc0);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0024,(void *)0x218,(void *)0xc0);
  pvVar34 = (void *)0x248;
  pvVar37 = (void *)0xc0;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0025,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  iterate_and_remove_list_entry(pvVar29,pvVar32,pvVar34,pvVar37);
  iterate_and_remove_list_entry(pvVar29,pvVar33,pvVar34,pvVar37);
  invoke_virtual_then_call_helper_10494188((int)pvVar29,iVar27);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0026,(void *)0x38,(void *)0xf0);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0027,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar32,iVar27);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0028,(void *)0x218,(void *)0xf0);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0029,(void *)0x218,(void *)0xf0);
  pvVar37 = (void *)0x248;
  pvVar38 = (void *)0xf0;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b002a,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  iterate_and_remove_list_entry(pvVar32,pvVar33,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar32,pvVar34,pvVar37,pvVar38);
  invoke_virtual_then_call_helper_10494188((int)pvVar32,iVar27);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b002b,(void *)0x38,(void *)0x120);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b002c,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar33,iVar27);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b002d,(void *)0x218,(void *)0x120);
  pvVar37 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b002e,(void *)0x218,(void *)0x120);
  pvVar38 = (void *)0x248;
  pvVar39 = (void *)0x120;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b002f,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  iterate_and_remove_list_entry(pvVar33,pvVar34,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar33,pvVar37,pvVar38,pvVar39);
  invoke_virtual_then_call_helper_10494188((int)pvVar33,iVar27);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0030,(void *)0x38,(void *)0x150);
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0031,(void *)0x20,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar34,iVar27);
  pvVar37 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0032,(void *)0x218,(void *)0x150);
  pvVar38 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0033,(void *)0x218,(void *)0x150);
  pvVar39 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0034,(void *)0x218,(void *)0x150);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0035,(void *)0x218,(void *)0x150);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0036,(void *)0x218,(void *)0x150);
  pvVar35 = (void *)0x248;
  pvVar40 = (void *)0x150;
  iVar27 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0037,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  iterate_and_remove_list_entry(pvVar34,pvVar37,pvVar35,pvVar40);
  iterate_and_remove_list_entry(pvVar34,pvVar38,pvVar35,pvVar40);
  iterate_and_remove_list_entry(pvVar34,pvVar39,pvVar35,pvVar40);
  iterate_and_remove_list_entry(pvVar34,pvVar30,pvVar35,pvVar40);
  iterate_and_remove_list_entry(pvVar34,pvVar31,pvVar35,pvVar40);
  invoke_virtual_then_call_helper_10494188((int)pvVar34,iVar27);
  pvVar38 = (void *)0x0;
  pvVar39 = (void *)0x0;
  pvVar37 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10b0038,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar37,pvVar1,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar2,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar3,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar4,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar5,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar6,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar7,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar9,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar10,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar11,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar12,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar13,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar14,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar15,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar16,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar17,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar18,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar19,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar20,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar21,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar22,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar23,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar24,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar25,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar26,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar28,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar29,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar32,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar33,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar34,pvVar38,pvVar39);
  iterate_and_remove_list_entry(pvVar37,pvVar8,pvVar38,pvVar39);
  graph_link_nextprev((int)pvVar26,(int)pvVar28,0xf,pvVar39);
  graph_link_nextprev((int)pvVar28,(int)pvVar26,0x10,pvVar39);
  graph_link_nextprev((int)pvVar28,(int)pvVar29,0xf,pvVar39);
  graph_link_nextprev((int)pvVar29,(int)pvVar28,0x10,pvVar39);
  graph_link_nextprev((int)pvVar29,(int)pvVar32,0xf,pvVar39);
  graph_link_nextprev((int)pvVar32,(int)pvVar29,0x10,pvVar39);
  graph_link_nextprev((int)pvVar32,(int)pvVar33,0xf,pvVar39);
  graph_link_nextprev((int)pvVar33,(int)pvVar32,0x10,pvVar39);
  graph_link_nextprev((int)pvVar33,(int)pvVar34,0xf,pvVar39);
  graph_link_nextprev((int)pvVar34,(int)pvVar33,0x10,pvVar39);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar37));
  return;
}
