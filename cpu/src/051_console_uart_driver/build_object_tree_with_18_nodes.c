/* @k10d build_object_tree_with_18_nodes @ 0x103b7782
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_tree_with_18_nodes(cls_1056ac8c *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  
  param_1->field_0x4 = 1;
  pvVar1 = (void *)get_or_init_static_buffer_10495746();
  iterate_range_and_call_match(pvVar1,(uint *)0x1056aed8/*ROM*/,param_3,param_4);
  pvVar2 = (void *)app_obj_factory(pvVar1,(void *)0x20c0000,0,0);
  pvVar3 = (void *)app_obj_factory(pvVar1,(void *)0x20c0001,0,0);
  pvVar4 = (void *)app_obj_factory(pvVar1,(void *)0x20c0002,0,0);
  pvVar5 = (void *)app_obj_factory(pvVar1,(void *)0x20c0003,(void *)0x20,(void *)0x78);
  pvVar6 = (void *)app_obj_factory(pvVar1,(void *)0x20c0004,(void *)0x20,(void *)0x78);
  pvVar7 = (void *)app_obj_factory(pvVar1,(void *)0x20c0005,(void *)0x20,(void *)0x78);
  pvVar8 = (void *)app_obj_factory(pvVar1,(void *)0x20c0006,(void *)0x20,(void *)0x78);
  pvVar9 = (void *)app_obj_factory(pvVar1,(void *)0x20c0007,(void *)0x20,(void *)0x78);
  pvVar10 = (void *)app_obj_factory(pvVar1,(void *)0x20c0008,(void *)0x20,(void *)0x78);
  pvVar11 = (void *)app_obj_factory(pvVar1,(void *)0x20c0009,(void *)0x20,(void *)0x78);
  pvVar12 = (void *)app_obj_factory(pvVar1,(void *)0x20c000a,(void *)0x20,(void *)0x78);
  pvVar13 = (void *)app_obj_factory(pvVar1,(void *)0x20c000b,(void *)0x20,(void *)0x78);
  pvVar14 = (void *)app_obj_factory(pvVar1,(void *)0x20c000c,(void *)0x20,(void *)0x90);
  pvVar15 = (void *)app_obj_factory(pvVar1,(void *)0x20c000e,(void *)0xb0,(void *)0xd8);
  pvVar16 = (void *)app_obj_factory(pvVar1,(void *)0x20c0010,(void *)0xb0,(void *)0x108);
  pvVar17 = (void *)app_obj_factory(pvVar1,(void *)0x20c000f,(void *)0xb0,(void *)0xd8);
  pvVar18 = (void *)app_obj_factory(pvVar1,(void *)0x20c000d,(void *)0x20,(void *)0xa8);
  pvVar19 = (void *)app_obj_factory(pvVar1,(void *)0x20c0011,(void *)0x1b8,(void *)0x198);
  pvVar21 = (void *)0x198;
  pvVar1 = (void *)app_obj_factory(pvVar1,(void *)0x20c0012,(void *)0x200,(void *)(uint32_t)param_4);
  call_helper_and_set_flag_104b7726(pvVar5,0x240,1);
  call_helper_and_set_flag_104b7726(pvVar6,0x240,1);
  call_helper_and_set_flag_104b7726(pvVar7,0x240,1);
  call_helper_and_set_flag_104b7726(pvVar8,0x240,1);
  call_helper_and_set_flag_104b7726(pvVar9,0x240,1);
  call_helper_and_set_flag_104b7726(pvVar10,0x240,1);
  call_helper_and_set_flag_104b7726(pvVar11,0x240,1);
  call_helper_and_set_flag_104b7726(pvVar12,0x240,1);
  call_helper_and_set_flag_104b7726(pvVar13,0x240,1);
  call_helper_and_set_flag_104b7726(pvVar14,0x240,1);
  call_helper_and_set_flag_104b7726(pvVar18,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar5,0x90,1);
  call_helper_and_set_flag_104b7744(pvVar6,0x90,1);
  call_helper_and_set_flag_104b7744(pvVar7,0x90,1);
  call_helper_and_set_flag_104b7744(pvVar8,0x90,1);
  call_helper_and_set_flag_104b7744(pvVar9,0x90,1);
  call_helper_and_set_flag_104b7744(pvVar10,0x90,1);
  call_helper_and_set_flag_104b7744(pvVar11,0x90,1);
  call_helper_and_set_flag_104b7744(pvVar12,0x90,1);
  pvVar20 = (void *)0x1;
  call_helper_and_set_flag_104b7744(pvVar13,0x90, (uint32_t)param_3);
  iterate_and_remove_list_entry(pvVar4,pvVar18,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar4,pvVar19,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar4,pvVar1,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar5,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar6,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar7,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar8,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar9,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar10,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar11,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar12,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar13,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar14,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar4,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar17,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar15,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar3,pvVar16,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar2,pvVar3,pvVar20,pvVar21);
  set_object_field_at_offset_0x10(&param_1->field5_0x8,pvVar2);
  return;
}
