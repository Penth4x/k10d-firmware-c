/* @k10d instantiate_and_link_object_array @ 0x1037f13c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Creates a set of objects via a factory call and links them into a parent structure.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x3070000-0x307001c)
 *   and varying size parameters to instantiate numerous objects. It then uses
 *   iterate_and_remove_list_entry to add these objects to a parent structure (pvVar1) and
 *   invoke_virtual_then_call_helper_10494188/graph_link_nextprev to establish relationships
 *   between specific object groups. Finally, it attaches the constructed structure to the
 *   main object via set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void instantiate_and_link_object_array(cls_10558da4 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar15;
  int iVar16;
  void *pvVar17;
  uint32_t uVar18;
  int iVar19;
  int iVar20;
  void *pvVar21;
  int iVar22;
  int iVar23;
  void *pvVar24;
  uint32_t uVar25;
  void *pvVar26;
  void *pvVar27;
  int iVar28;
  int iVar29;
  void *pvVar30;
  void *pvVar31;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055d6c8/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070001,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070002,(void *)0x20,(void *)0x18);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070003,(void *)0x1a0,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070004,(void *)0x1e8,(void *)0x18);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070005,(void *)0x200,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070006,(void *)0x218,(void *)0x48);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070007,(void *)0x20,(void *)0x90);
  call_helper_and_set_flag_104b7726(pvVar8,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar8,0x60,1);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070017,(void *)0x20,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070018,(void *)0x68,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070019,(void *)0x20,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x307001a,(void *)0x80,(void *)0x198);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x307001b,(void *)0x1b8,(void *)0x198);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x307001c,(void *)0x200,(void *)0x198);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x307000b,(void *)0x20,(void *)0x120));
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x307000a,(void *)0x20,(void *)0x120));
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070008,(void *)(0),(void *)(0));
  uVar18 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070009,(void *)0x50,(void *)0x120));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar18),(uint16_t)(0x120),(uint16_t)(1));
  iVar19 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x307000c,(void *)0x1a0,(void *)0x120));
  iVar20 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x307000d,(void *)0x218,(void *)0x120));
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x307000e,(void *)0x1d0,(void *)0x120);
  iVar22 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070012,(void *)0x20,(void *)0x150));
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070011,(void *)0x20,(void *)0x150));
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x307000f,(void *)(0),(void *)(0));
  uVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070010,(void *)0x50,(void *)0x150));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar25),(uint16_t)(0x120),(uint16_t)(1));
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070015,(void *)0x1d0,(void *)0x150);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070016,(void *)0x1d0,(void *)0x150);
  iVar28 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070013,(void *)0x1a0,(void *)0x150));
  pvVar30 = (void *)0x218;
  pvVar31 = (void *)0x150;
  iVar29 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3070014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar8,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar10,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar11,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar12,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar13,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar14,pvVar30,pvVar31);
  write_field_at_offset_0x48(pvVar17,uVar18);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar22);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar19);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar21,pvVar30,pvVar31);
  write_field_at_offset_0x48(pvVar24,uVar25);
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar23);
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar15);
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar28);
  invoke_virtual_then_call_helper_10494188((int)pvVar24,iVar29);
  iterate_and_remove_list_entry(pvVar1,pvVar26,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar27,pvVar30,pvVar31);
  graph_link_nextprev((int)pvVar17,(int)pvVar24,0xf,pvVar31);
  pvVar2 = (void *)0x10;
  graph_link_nextprev((int)pvVar24,(int)pvVar17,0x10,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar17,pvVar2,pvVar31);
  iterate_and_remove_list_entry(pvVar1,pvVar24,pvVar2,pvVar31);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
