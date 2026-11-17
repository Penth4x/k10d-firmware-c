/* @k10d init_object_with_subobjects_1037b14a @ 0x1037b14a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a parent object by creating and linking multiple sub-objects with specific
 *   offsets and sizes.
 * summary:
 *   The function takes a parent object pointer (param_1) and initializes its internal state
 *   at offset 0x24. It calls app_obj_factory repeatedly to create sub-objects with IDs
 *   ranging from 0x3040000 to 0x304000c, specifying various offsets and sizes. It then
 *   links these sub-objects together using write_field_at_offset_0x48 and
 *   invoke_virtual_then_call_helper_10494188, and registers them with the parent using
 *   iterate_and_remove_list_entry. Finally, it calls set_object_field_at_offset_0x10 to
 *   complete the initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_subobjects_1037b14a(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  uint32_t uVar8;
  void *pvVar9;
  int iVar10;
  uint32_t uVar11;
  void *pvVar12;
  int iVar13;
  void *pvVar14;
  void *pvVar15;
  
  iterate_range_and_call_match(*(void **)((int)param_1 + 0x24),(uint *)0x1055ce6c/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3040000,0,0);
  pvVar2 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3040001,(void *)0x20,(void *)0x18);
  pvVar3 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3040002,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar3,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar3,0x90,1);
  pvVar4 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3040003,(void *)0x20,(void *)0x198);
  pvVar5 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3040004,(void *)0x80,(void *)0x198);
  pvVar6 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3040005,(void *)0x1b8,(void *)0x198);
  pvVar7 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3040006,(void *)0x200,(void *)0x198);
  uVar8 = (uint32_t)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3040007,(void *)0x50,(void *)0x120);
  pvVar9 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3040009,0,0);
  call_helper_and_set_flag_104b7726((void *)uVar8,0x1e0,1);
  iVar10 = (int)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x304000b,(void *)0x50,(void *)0x120);
  uVar11 = (uint32_t)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3040008,(void *)0x50,(void *)0x150);
  pvVar12 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x304000a,0,0);
  call_helper_and_set_flag_104b7726((void *)uVar11,0x1e0,1);
  pvVar15 = (void *)0x150;
  pvVar14 = (void *)0x50;
  iVar13 = (int)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x304000c,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  write_field_at_offset_0x48(pvVar9,uVar8);
  write_field_at_offset_0x48(pvVar12,uVar11);
  invoke_virtual_then_call_helper_10494188((int)pvVar9,iVar10);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar12,pvVar14,pvVar15);
  graph_link_nextprev((int)pvVar9,(int)pvVar12,0xf,pvVar15);
  graph_link_nextprev((int)pvVar12,(int)pvVar9,0x10,pvVar15);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
