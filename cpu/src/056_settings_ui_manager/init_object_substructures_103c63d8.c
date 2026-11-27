/* @k10d init_object_substructures_103c63d8 @ 0x103c63d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a large set of sub-objects and links them into the parent
 *   object.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x10d0001-0x10d002d)
 *   to allocate memory for numerous sub-structures. It then uses
 *   iterate_and_remove_list_entry and invoke_virtual_then_call_helper_10494188 to link
 *   these sub-objects together and attach them to the parent object (param_1). Finally, it
 *   calls set_object_field_at_offset_0x10 to register the initialized structure. This
 *   appears to be a complex initialization routine for a subsystem with many components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_substructures_103c63d8(cls_105953cc *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar26;
  void *pvVar27;
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  uint8_t *puVar32;
  void *pvVar33;
  void *pvVar34;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1054afa4/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0001,(void *)0x20,(void *)0x198);
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0002,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0003,(void *)(0),(void *)0x44);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0004,(void *)(0),(void *)0x196);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0005,(void *)(0),(void *)0x44);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0006,(void *)(0),(void *)0x2c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0007,(void *)(0),(void *)0x19c);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0008,(void *)0x20,(void *)0x11c);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0009,(void *)0x1d0,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d000a,(void *)0x218,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d000d,(void *)0x80,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d000e,(void *)0x20,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar12 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d000b,(void *)0x20,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar13 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d000f,(void *)0x260,(void *)0x60);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0010,(void *)0x260,(void *)0x90);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0011,(void *)0x260,(void *)0xc0);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0012,(void *)0x260,(void *)0xf0);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0013,(void *)0x260,(void *)0x120);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0014,(void *)0x260,(void *)0x150);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d000c,(void *)0x20,(void *)0x60);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d000c,(void *)0x20,(void *)0x90);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d000c,(void *)0x20,(void *)0xc0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d000c,(void *)0x20,(void *)0xf0);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0015,(void *)0xf8,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar24 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar24 + 0xc) + 8) + (int)pvVar24,0);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0016,(void *)0x38,(void *)0x60);
  iVar26 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0017,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar26);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0018,(void *)0x218,(void *)0x60);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0019,(void *)0x218,(void *)0x60);
  pvVar29 = (void *)0x248;
  puVar32 = &DAT_00000060;
  iVar26 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d001a,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  iterate_and_remove_list_entry(pvVar25,pvVar27,pvVar29,puVar32);
  iterate_and_remove_list_entry(pvVar25,pvVar28,pvVar29,puVar32);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar26);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d001b,(void *)0x38,(void *)0x90);
  iVar26 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d001c,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar26);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d001d,(void *)0x218,(void *)0x90);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d001e,(void *)0x218,(void *)0x90);
  pvVar30 = (void *)0x248;
  puVar32 = &DAT_00000090;
  iVar26 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d001f,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  iterate_and_remove_list_entry(pvVar27,pvVar28,pvVar30,puVar32);
  iterate_and_remove_list_entry(pvVar27,pvVar29,pvVar30,puVar32);
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar26);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0020,(void *)0x38,(void *)0xc0);
  iVar26 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0021,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar26);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0022,(void *)0x218,(void *)0xc0);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0023,(void *)0x218,(void *)0xc0);
  pvVar31 = (void *)0x248;
  pvVar33 = (void *)0xc0;
  iVar26 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0024,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  iterate_and_remove_list_entry(pvVar28,pvVar29,pvVar31,pvVar33);
  iterate_and_remove_list_entry(pvVar28,pvVar30,pvVar31,pvVar33);
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar26);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0025,(void *)0x38,(void *)0xf0);
  iVar26 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0026,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar29,iVar26);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0027,(void *)0x218,(void *)0xf0);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0028,(void *)0x218,(void *)0xf0);
  pvVar33 = (void *)0x248;
  pvVar34 = (void *)0xf0;
  iVar26 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d0029,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  iterate_and_remove_list_entry(pvVar29,pvVar30,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar31,pvVar33,pvVar34);
  invoke_virtual_then_call_helper_10494188((int)pvVar29,iVar26);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d002a,(void *)0x20,(void *)0x120);
  iVar26 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d002b,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar26);
  iVar26 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d002c,(void *)0x248,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar26);
  pvVar33 = (void *)0x0;
  pvVar34 = (void *)0x0;
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x10d002d,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar31,pvVar1,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar2,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar3,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar4,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar5,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar6,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar7,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar9,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar10,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar11,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar12,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar13,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar14,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar15,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar16,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar17,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar18,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar19,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar20,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar21,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar22,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar23,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar24,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar25,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar27,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar28,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar29,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar30,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar8,pvVar33,pvVar34);
  graph_link_nextprev((int)pvVar25,(int)pvVar27,0xf,pvVar34);
  graph_link_nextprev((int)pvVar27,(int)pvVar25,0x10,pvVar34);
  graph_link_nextprev((int)pvVar27,(int)pvVar28,0xf,pvVar34);
  graph_link_nextprev((int)pvVar28,(int)pvVar27,0x10,pvVar34);
  graph_link_nextprev((int)pvVar28,(int)pvVar29,0xf,pvVar34);
  graph_link_nextprev((int)pvVar29,(int)pvVar28,0x10,pvVar34);
  graph_link_nextprev((int)pvVar29,(int)pvVar30,0xf,pvVar34);
  graph_link_nextprev((int)pvVar30,(int)pvVar29,0x10,pvVar34);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar31));
  return;
}
