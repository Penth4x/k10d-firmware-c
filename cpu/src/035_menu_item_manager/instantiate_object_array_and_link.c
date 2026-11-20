/* @k10d instantiate_object_array_and_link @ 0x1037c332
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Creates a fixed set of objects via a factory call, links them into a parent structure,
 *   and attaches the result to the input object.
 * summary:
 *   The function calls app_obj_factory approximately 55 times with sequential IDs
 *   (0x3060000-0x3060036) and varying size/offset parameters to instantiate objects. It
 *   then calls iterate_and_remove_list_entry for each created object, passing a common
 *   parent pointer (pvVar1) and fixed size arguments (0x50, 0x150), suggesting registration
 *   or addition to a container. Two specific objects are cross-linked via
 *   graph_link_nextprev, and the final structure is associated with the input object via
 *   set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void instantiate_object_array_and_link(cls_10558c04 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  void *pvVar32;
  void *pvVar33;
  void *pvVar34;
  void *pvVar35;
  void *pvVar36;
  void *pvVar37;
  void *pvVar38;
  void *pvVar39;
  void *pvVar40;
  void *pvVar41;
  void *pvVar42;
  void *pvVar43;
  void *pvVar44;
  void *pvVar45;
  void *pvVar46;
  void *pvVar47;
  uint32_t uVar48;
  void *pvVar49;
  int iVar50;
  int iVar51;
  uint32_t uVar52;
  void *pvVar53;
  int iVar54;
  int iVar55;
  void *pvVar56;
  void *pvVar57;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055d240/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060001,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060002,(void *)0x20,(void *)0x18);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060003,(void *)0x218,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060004,(void *)0x218,(void *)0x48);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060005,(void *)0x218,(void *)0x78);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060006,(void *)0x218,(void *)0xa8);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060007,(void *)0x218,(void *)0xd8);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060008,(void *)0x218,(void *)0x108);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060009,(void *)0x214,(void *)0x14);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306000a,(void *)0x214,(void *)0x44);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306000b,(void *)0x214,(void *)0x74);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306000c,(void *)0x214,(void *)0xa4);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306000d,(void *)0x214,(void *)0xd4);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306000e,(void *)0x214,(void *)0x104);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306000f,(void *)0x80,(void *)0x30);
  call_helper_and_set_flag_104b7726(pvVar16,0x180,1);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060010,(void *)0x80,(void *)0x30);
  call_helper_and_set_flag_104b7726(pvVar17,0x180,1);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060011,(void *)0x80,(void *)0x30);
  call_helper_and_set_flag_104b7726(pvVar18,0x180,1);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060012,(void *)0x80,(void *)0x30);
  call_helper_and_set_flag_104b7726(pvVar19,0x180,1);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060013,(void *)0x80,(void *)0x30);
  call_helper_and_set_flag_104b7726(pvVar20,0x180,1);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060014,(void *)0x80,(void *)0x30);
  call_helper_and_set_flag_104b7726(pvVar21,0x180,1);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060015,(void *)0x170,(void *)0x168);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060016,(void *)0x1cc,(void *)0x170);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060017,(void *)0x1f0,(void *)0x170);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060018,(void *)0x214,(void *)0x170);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060019,(void *)0x238,(void *)0x170);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306001a,(void *)0x170,(void *)0x168);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306001b,(void *)0x170,(void *)0x168);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306001c,(void *)0x170,(void *)0x168);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306001d,(void *)0x170,(void *)0x138);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306001e,(void *)(0),(void *)(0));
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306001f,(void *)0x170,(void *)0x168);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060020,(void *)0x170,(void *)0x168);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060021,(void *)0x170,(void *)0x168);
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060022,(void *)0x170,(void *)0x168);
  pvVar36 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060023,(void *)0x170,(void *)0x168);
  pvVar37 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060024,(void *)0x170,(void *)0x168);
  pvVar38 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060025,(void *)0x170,(void *)0x168);
  pvVar39 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060026,(void *)(0),(void *)(0));
  pvVar40 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060027,(void *)0x170,(void *)0x168);
  pvVar41 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060028,(void *)(0),(void *)(0));
  pvVar42 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060029,(void *)0x20,(void *)0x168);
  pvVar43 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306002a,(void *)0x80,(void *)0x198);
  pvVar44 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306002b,(void *)0xe0,(void *)0x198);
  pvVar45 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306002c,(void *)0x1b8,(void *)0x198);
  pvVar46 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306002d,(void *)0x200,(void *)0x198);
  pvVar47 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x306002e,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar47,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar47,0x90,1);
  uVar48 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x306002f,(void *)0x50,(void *)0x120));
  pvVar49 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060031,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar48),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar50 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060033,(void *)0x50,(void *)0x120));
  iVar51 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060035,(void *)0x50,(void *)0x120));
  uVar52 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060030,(void *)0x50,(void *)0x150));
  pvVar53 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060032,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar52),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar54 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060034,(void *)0x50,(void *)0x150));
  pvVar56 = (void *)0x50;
  pvVar57 = (void *)0x150;
  iVar55 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3060036,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  write_field_at_offset_0x48(pvVar49,uVar48);
  write_field_at_offset_0x48(pvVar53,uVar52);
  invoke_virtual_then_call_helper_10494188((int)pvVar49,iVar50);
  invoke_virtual_then_call_helper_10494188((int)pvVar53,iVar54);
  invoke_virtual_then_call_helper_10494188((int)pvVar49,iVar55);
  invoke_virtual_then_call_helper_10494188((int)pvVar53,iVar51);
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar8,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar10,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar11,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar12,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar13,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar14,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar15,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar16,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar17,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar18,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar19,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar20,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar21,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar22,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar23,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar24,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar25,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar26,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar27,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar28,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar29,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar30,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar31,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar32,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar33,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar34,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar35,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar36,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar37,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar38,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar39,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar40,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar41,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar42,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar43,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar44,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar45,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar46,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar47,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar49,pvVar56,pvVar57);
  iterate_and_remove_list_entry(pvVar1,pvVar53,pvVar56,pvVar57);
  graph_link_nextprev((int)pvVar49,(int)pvVar53,0xf,pvVar57);
  graph_link_nextprev((int)pvVar53,(int)pvVar49,0x10,pvVar57);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
