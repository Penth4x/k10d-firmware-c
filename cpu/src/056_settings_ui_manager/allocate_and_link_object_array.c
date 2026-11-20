/* @k10d allocate_and_link_object_array @ 0x103c2208
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a large set of objects via a factory and links them into a parent structure.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1080001-0x1080034)
 *   to allocate numerous objects. It then uses iterate_and_remove_list_entry to attach
 *   these objects to parent containers and graph_link_nextprev to establish sibling
 *   relationships, effectively constructing a complex object hierarchy. Finally, it
 *   registers the root object with the parent object via set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_link_object_array(cls_1059514c *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar25;
  void *pvVar26;
  void *pvVar27;
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  void *pvVar32;
  uint8_t *puVar33;
  void *pvVar34;
  void *pvVar35;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x10549dac/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080001,(void *)0x20,(void *)0x198);
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080002,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080003,(void *)(0),(void *)0x44);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080004,(void *)(0),(void *)0x196);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080005,(void *)(0),(void *)0x44);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080006,(void *)(0),(void *)0x2c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080007,(void *)(0),(void *)0x19c);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080008,(void *)0x1d0,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080009,(void *)0x218,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000b,(void *)0x80,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000c,(void *)0x20,(void *)0x18);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000d,(void *)0x260,(void *)0x60);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000e,(void *)0x260,(void *)0x90);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000f,(void *)0x260,(void *)0xc0);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080010,(void *)0x260,(void *)0xf0);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080011,(void *)0x260,(void *)0x120);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080012,(void *)0x260,(void *)0x150);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000a,(void *)0x20,(void *)0x60);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000a,(void *)0x20,(void *)0x90);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000a,(void *)0x20,(void *)0xc0);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000a,(void *)0x20,(void *)0xf0);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000a,(void *)0x20,(void *)0x120);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108000a,(void *)0x20,(void *)0x150);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080014,(void *)0x38,(void *)0x60);
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080015,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar25);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080016,(void *)0x218,(void *)0x60);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080017,(void *)0x218,(void *)0x60);
  pvVar30 = (void *)0x248;
  puVar33 = &DAT_00000060;
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080018,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar24,pvVar26,pvVar30,puVar33);
  iterate_and_remove_list_entry(pvVar24,pvVar27,pvVar30,puVar33);
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar25);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080019,(void *)0x38,(void *)0x90);
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x108001a,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar25);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108001b,(void *)0x218,(void *)0x90);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108001c,(void *)0x218,(void *)0x90);
  pvVar31 = (void *)0x248;
  puVar33 = &DAT_00000090;
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x108001d,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar26,pvVar27,pvVar31,puVar33);
  iterate_and_remove_list_entry(pvVar26,pvVar30,pvVar31,puVar33);
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar25);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108001e,(void *)0x38,(void *)0xc0);
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x108001f,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar25);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080020,(void *)0x218,(void *)0xc0);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080021,(void *)0x218,(void *)0xc0);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080022,(void *)0x218,(void *)0xc0);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080023,(void *)0x218,(void *)0xc0);
  pvVar32 = (void *)0x248;
  pvVar34 = (void *)0xc0;
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080024,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar27,pvVar30,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar27,pvVar31,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar27,pvVar28,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar27,pvVar29,pvVar32,pvVar34);
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar25);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080025,(void *)0x38,(void *)0xf0);
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080026,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar25);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080027,(void *)0x218,(void *)0xf0);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080028,(void *)0x218,(void *)0xf0);
  pvVar29 = (void *)0x248;
  pvVar32 = (void *)0xf0;
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080029,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar30,pvVar31,pvVar29,pvVar32);
  iterate_and_remove_list_entry(pvVar30,pvVar28,pvVar29,pvVar32);
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar25);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108002a,(void *)0x38,(void *)0x120);
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x108002b,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar25);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108002c,(void *)0x218,(void *)0x120);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108002d,(void *)0x218,(void *)0x120);
  pvVar32 = (void *)0x248;
  pvVar34 = (void *)0x120;
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x108002e,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar31,pvVar28,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar31,pvVar29,pvVar32,pvVar34);
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar25);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x108002f,(void *)0x38,(void *)0x150);
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080030,(void *)0x20,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar25);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080031,(void *)0x218,(void *)0x150);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080032,(void *)0x218,(void *)0x150);
  pvVar34 = (void *)0x248;
  pvVar35 = (void *)0x150;
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080033,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar28,pvVar29,pvVar34,pvVar35);
  iterate_and_remove_list_entry(pvVar28,pvVar32,pvVar34,pvVar35);
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar25);
  pvVar32 = (void *)0x0;
  pvVar34 = (void *)0x0;
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1080034,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar29,pvVar1,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar2,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar3,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar4,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar5,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar6,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar7,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar8,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar9,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar10,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar11,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar12,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar13,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar14,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar15,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar16,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar17,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar18,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar19,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar20,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar21,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar22,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar23,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar24,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar26,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar27,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar30,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar31,pvVar32,pvVar34);
  iterate_and_remove_list_entry(pvVar29,pvVar28,pvVar32,pvVar34);
  graph_link_nextprev((int)pvVar24,(int)pvVar26,0xf,pvVar34);
  graph_link_nextprev((int)pvVar26,(int)pvVar24,0x10,pvVar34);
  graph_link_nextprev((int)pvVar26,(int)pvVar27,0xf,pvVar34);
  graph_link_nextprev((int)pvVar27,(int)pvVar26,0x10,pvVar34);
  graph_link_nextprev((int)pvVar27,(int)pvVar30,0xf,pvVar34);
  graph_link_nextprev((int)pvVar30,(int)pvVar27,0x10,pvVar34);
  graph_link_nextprev((int)pvVar30,(int)pvVar31,0xf,pvVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar30,0x10,pvVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar28,0xf,pvVar34);
  graph_link_nextprev((int)pvVar28,(int)pvVar31,0x10,pvVar34);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar29));
  return;
}
