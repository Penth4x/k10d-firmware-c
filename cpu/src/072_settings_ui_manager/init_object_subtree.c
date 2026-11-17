/* @k10d init_object_subtree @ 0x103d258c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 072_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Creates a set of child objects, links them into a container, and registers the
 *   container with the parent.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1930001-0x1930014)
 *   to instantiate multiple child objects. It then uses iterate_and_remove_list_entry to
 *   add each child to a container object (pvVar16) and graph_link_nextprev to establish
 *   specific relationships between pairs of children. Finally, it registers the container
 *   with the parent object via set_object_field_at_offset_0x10. The mechanical pattern is
 *   the initialization of a hierarchical object structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_subtree(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  uint32_t uVar12;
  void *pvVar13;
  int iVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)&DAT_105518bc/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1930001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1930002,0,(void *)0x44);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1930003,0,(void *)0x196);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1930004,0,(void *)0x44);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1930005,0,(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1930006,0,(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1930007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x193000a,(void *)0x1a0,(void *)0x198);
  (**(code **)(*(int *)((int)pvVar8 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar8 + 0xc) + 8) + (int)pvVar8,0);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x193000b,(void *)0x1e8,(void *)0x198);
  (**(code **)(*(int *)((int)pvVar9 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar9 + 0xc) + 8) + (int)pvVar9,0);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x193000c,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x193000d,(void *)0x20,(void *)0x60);
  call_helper_and_set_flag_104b7726(pvVar11,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar11,0x90,1);
  uVar12 = (uint32_t)(uintptr_t)app_obj_factory((void *)param_1[1],(void *)0x193000f,(void *)0x38,(void *)0x120);
  call_helper_and_set_flag_104b7726((void *)uVar12,0x210,1);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x193000e,0,0);
  write_field_at_offset_0x48(pvVar13,uVar12);
  iVar14 = (int)(intptr_t)app_obj_factory((void *)param_1[1],(void *)0x1930010,(void *)0x38,(void *)0x120);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  uVar12 = (uint32_t)(uintptr_t)app_obj_factory((void *)param_1[1],(void *)0x1930012,(void *)0x38,(void *)0x150);
  call_helper_and_set_flag_104b7726((void *)uVar12,0x210,1);
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1930011,0,0);
  write_field_at_offset_0x48(pvVar15,uVar12);
  iVar14 = (int)(intptr_t)app_obj_factory((void *)param_1[1],(void *)0x1930013,(void *)0x38,(void *)0x150);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar14);
  pvVar17 = (void *)0x0;
  pvVar18 = (void *)0x0;
  pvVar16 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1930014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar16,pvVar1,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar2,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar3,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar4,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar5,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar6,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar7,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar8,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar9,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar10,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar11,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar13,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar15,pvVar17,pvVar18);
  graph_link_nextprev((int)pvVar13,(int)pvVar15,0xf,pvVar18);
  graph_link_nextprev((int)pvVar13,(int)pvVar15,0x10,pvVar18);
  graph_link_nextprev((int)pvVar15,(int)pvVar13,0xf,pvVar18);
  graph_link_nextprev((int)pvVar15,(int)pvVar13,0x10,pvVar18);
  set_object_field_at_offset_0x10((void *)*param_1,pvVar16);
  return;
}
