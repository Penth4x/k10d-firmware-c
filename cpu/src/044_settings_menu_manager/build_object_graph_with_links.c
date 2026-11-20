/* @k10d build_object_graph_with_links @ 0x103a07a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_graph_with_links(cls_1056482c *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  void *pvVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  
  param_1->field_0x4 = 1;
  sVar1 = 0x68 - sRam105668ac;
  sVar2 = 0xb0 - sRam105668ac;
  sVar3 = 0xf8 - sRam105668ac;
  sVar4 = 0x140 - sRam105668ac;
  sVar5 = 0x188 - sRam105668ac;
  sVar6 = 0x1d0 - sRam105668ac;
  sVar7 = 0x18 - sRam105668ac;
  pvVar8 = (void *)get_or_init_static_buffer_10495746();
  iterate_range_and_call_match(pvVar8,(uint *)0x105668b4/*ROM*/,param_3,param_4);
  pvVar9 = (void *)app_obj_factory(pvVar8,(void *)0x2020000,0,0);
  pvVar10 = (void *)app_obj_factory(pvVar8,(void *)0x2020001,(void *)0x68,(void *)0x18);
  pvVar11 = (void *)app_obj_factory(pvVar8,(void *)0x2020002,(void *)0xb0,(void *)0x18);
  pvVar12 = (void *)app_obj_factory(pvVar8,(void *)0x2020003,(void *)0xf8,(void *)0x18);
  pvVar13 = (void *)app_obj_factory(pvVar8,(void *)0x2020004,(void *)0x140,(void *)0x18);
  pvVar14 = (void *)app_obj_factory(pvVar8,(void *)0x2020005,(void *)0x188,(void *)0x18);
  pvVar15 = (void *)app_obj_factory(pvVar8,(void *)0x2020006,(void *)0x1d0,(void *)0x18);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(pvVar8),(void *)0x2020007,(void *)(sVar1),(void *)(sVar7)));
  iVar17 = (uintptr_t)(app_obj_factory((int *)(pvVar8),(void *)0x2020008,(void *)(sVar2),(void *)(sVar7)));
  iVar18 = (uintptr_t)(app_obj_factory((int *)(pvVar8),(void *)0x2020009,(void *)(sVar3),(void *)(sVar7)));
  iVar19 = (uintptr_t)(app_obj_factory((int *)(pvVar8),(void *)0x202000a,(void *)(sVar4),(void *)(sVar7)));
  iVar20 = (uintptr_t)(app_obj_factory((int *)(pvVar8),(void *)0x202000b,(void *)(sVar5),(void *)(sVar7)));
  iVar21 = (uintptr_t)(app_obj_factory((int *)(pvVar8),(void *)0x202000c,(void *)(sVar6),(void *)(sVar7)));
  iVar22 = (uintptr_t)(app_obj_factory(pvVar8,(void *)0x202000e,(void *)0x20,(void *)0x108));
  pvVar23 = (void *)app_obj_factory(pvVar8,(void *)0x202000d,(void *)0x20,(void *)0xd8);
  iVar24 = (uintptr_t)(app_obj_factory(pvVar8,(void *)0x202000f,(void *)0x20,(void *)0x108));
  iVar25 = (uintptr_t)(app_obj_factory(pvVar8,(void *)0x2020010,(void *)0x20,(void *)0x108));
  iVar26 = (uintptr_t)(app_obj_factory(pvVar8,(void *)0x2020011,(void *)0x20,(void *)0x108));
  iVar27 = (uintptr_t)(app_obj_factory(pvVar8,(void *)0x2020012,(void *)0x20,(void *)0x108));
  iVar28 = (uintptr_t)(app_obj_factory(pvVar8,(void *)0x2020013,(void *)0x20,(void *)0x108));
  call_helper_and_set_flag_104b7726((uint32_t *)(iVar22),(uint16_t)(0x240),(uint16_t)(1));
  call_helper_and_set_flag_104b7726(pvVar23,0x240,1);
  call_helper_and_set_flag_104b7726((uint32_t *)(iVar24),(uint16_t)(0x240),(uint16_t)(1));
  call_helper_and_set_flag_104b7726((uint32_t *)(iVar25),(uint16_t)(0x240),(uint16_t)(1));
  call_helper_and_set_flag_104b7726((uint32_t *)(iVar26),(uint16_t)(0x240),(uint16_t)(1));
  call_helper_and_set_flag_104b7726((uint32_t *)(iVar27),(uint16_t)(0x240),(uint16_t)(1));
  call_helper_and_set_flag_104b7726((uint32_t *)(iVar28),(uint16_t)(0x240),(uint16_t)(1));
  pvVar29 = (void *)app_obj_factory(pvVar8,(void *)0x2020014,0,0);
  pvVar31 = (void *)0x198;
  pvVar30 = (void *)0x20;
  pvVar8 = (void *)app_obj_factory(pvVar8,(void *)0x2020015,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar9,pvVar10,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar9,pvVar11,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar9,pvVar12,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar9,pvVar13,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar9,pvVar14,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar9,pvVar15,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar9,pvVar23,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar9,pvVar29,pvVar30,pvVar31);
  iterate_and_remove_list_entry(pvVar9,pvVar8,pvVar30,pvVar31);
  (((vtbl_entry*)(*(int *)((int)pvVar10 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar10 + 0xc) + 8) + (int)pvVar10,1);
  (((vtbl_entry*)(*(int *)((int)pvVar11 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar11 + 0xc) + 8) + (int)pvVar11,1);
  (((vtbl_entry*)(*(int *)((int)pvVar12 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,1);
  (((vtbl_entry*)(*(int *)((int)pvVar13 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,1);
  (((vtbl_entry*)(*(int *)((int)pvVar14 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar14 + 0xc) + 8) + (int)pvVar14,1);
  (((vtbl_entry*)(*(int *)((int)pvVar15 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar15 + 0xc) + 8) + (int)pvVar15,1);
  (((vtbl_entry*)(*(int *)((int)pvVar23 + 0xc)))[1].fn)
            ((int)pvVar23 + (int)*(short *)(*(int *)((int)pvVar23 + 0xc) + 8),1);
  (((vtbl_entry*)(*(int *)((int)pvVar29 + 0xc)))[1].fn)
            ((int)pvVar29 + (int)*(short *)(*(int *)((int)pvVar29 + 0xc) + 8),1);
  (((vtbl_entry*)(*(int *)((int)pvVar8 + 0xc)))[1].fn)
            ((int)pvVar8 + (int)*(short *)(*(int *)((int)pvVar8 + 0xc) + 8),1);
  invoke_virtual_then_call_helper_10494188((int)pvVar10,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar17);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar18);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar19);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar20);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar21);
  invoke_virtual_then_call_helper_10494188((int)pvVar10,iVar22);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar24);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar25);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar26);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar27);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar28);
  graph_link_nextprev((int)pvVar10,(int)pvVar11,0xd,pvVar31);
  graph_link_nextprev((int)pvVar10,(int)pvVar11,0x10,pvVar31);
  graph_link_nextprev((int)pvVar10,(int)pvVar15,0xe,pvVar31);
  graph_link_nextprev((int)pvVar11,(int)pvVar12,0xd,pvVar31);
  graph_link_nextprev((int)pvVar11,(int)pvVar12,0x10,pvVar31);
  graph_link_nextprev((int)pvVar11,(int)pvVar10,0xe,pvVar31);
  graph_link_nextprev((int)pvVar12,(int)pvVar13,0xd,pvVar31);
  graph_link_nextprev((int)pvVar12,(int)pvVar13,0x10,pvVar31);
  graph_link_nextprev((int)pvVar12,(int)pvVar11,0xe,pvVar31);
  graph_link_nextprev((int)pvVar13,(int)pvVar14,0xd,pvVar31);
  graph_link_nextprev((int)pvVar13,(int)pvVar14,0x10,pvVar31);
  graph_link_nextprev((int)pvVar13,(int)pvVar12,0xe,pvVar31);
  graph_link_nextprev((int)pvVar14,(int)pvVar15,0xd,pvVar31);
  graph_link_nextprev((int)pvVar14,(int)pvVar15,0x10,pvVar31);
  graph_link_nextprev((int)pvVar14,(int)pvVar13,0xe,pvVar31);
  graph_link_nextprev((int)pvVar15,(int)pvVar10,0xd,pvVar31);
  graph_link_nextprev((int)pvVar15,(int)pvVar10,0x10,pvVar31);
  graph_link_nextprev((int)pvVar15,(int)pvVar14,0xe,pvVar31);
  set_object_field_at_offset_0x10(&param_1->field5_0x8,pvVar9);
  return;
}
