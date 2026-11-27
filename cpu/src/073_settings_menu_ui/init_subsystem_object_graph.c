/* @k10d init_subsystem_object_graph @ 0x103d394a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 073_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes a complex object graph by allocating and linking multiple sub-objects via a
 *   factory function.
 * summary:
 *   The function calls app_obj_factory repeatedly with incrementing IDs
 *   (0x1a80001-0x1a80015) to create sub-objects. It then links these objects using
 *   write_field_at_offset_0x48 and invoke_virtual_then_call_helper_10494188, and registers
 *   them in a list or container via iterate_and_remove_list_entry. Finally, it associates
 *   the constructed graph with the parent object using set_object_field_at_offset_0x10. The
 *   specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_subsystem_object_graph(cls_10596278 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  uint32_t uVar13;
  void *pvVar14;
  int iVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x105547d8/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80008,(void *)0x20,(void *)0x18);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a8000b,(void *)0x1b8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar9 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar9 + 0xc) + 8) + (int)pvVar9,0);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a8000c,(void *)0x200,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar10 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar10 + 0xc) + 8) + (int)pvVar10,0);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a8000d,(void *)0x68,(void *)0x18);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a8000e,(void *)0x20,(void *)0x60);
  call_helper_and_set_flag_104b7726(pvVar12,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar12,0x90,1);
  uVar13 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80010,(void *)0x38,(void *)0x120));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar13),(uint16_t)(0x210),(uint16_t)(1));
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a8000f,(void *)(0),(void *)(0));
  write_field_at_offset_0x48(pvVar14,uVar13);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80011,(void *)0x38,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar15);
  uVar13 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80013,(void *)0x38,(void *)0x150));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar13),(uint16_t)(0x210),(uint16_t)(1));
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80012,(void *)(0),(void *)(0));
  write_field_at_offset_0x48(pvVar16,uVar13);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80014,(void *)0x38,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar15);
  pvVar18 = (void *)0x0;
  pvVar19 = (void *)0x0;
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1a80015,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar17,pvVar1,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar2,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar3,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar4,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar5,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar6,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar7,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar8,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar9,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar10,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar11,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar12,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar14,pvVar18,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar16,pvVar18,pvVar19);
  graph_link_nextprev((int)pvVar14,(int)pvVar16,0xf,pvVar19);
  graph_link_nextprev((int)pvVar16,(int)pvVar14,0x10,pvVar19);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar17));
  return;
}
