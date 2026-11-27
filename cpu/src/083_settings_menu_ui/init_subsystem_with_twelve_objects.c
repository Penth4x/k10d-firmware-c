/* @k10d init_subsystem_with_twelve_objects @ 0x103e8548
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes a subsystem by creating twelve child objects and linking them into a parent
 *   container.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1940001-0x1940014)
 *   to allocate or retrieve child objects. It configures some of these objects via
 *   call_helper_and_set_flag_104b7726 and call_helper_and_set_flag_104b7744, and links
 *   pairs of them using write_field_at_offset_0x48 and
 *   invoke_virtual_then_call_helper_10494188. Finally, it registers all created objects
 *   with a parent object (pvVar16) via iterate_and_remove_list_entry and establishes
 *   bidirectional links between two specific objects using graph_link_nextprev.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_subsystem_with_twelve_objects(cls_10597680 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)&DAT_10551a60/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x194000a,(void *)0x1a0,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar8 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar8 + 0xc) + 8) + (int)pvVar8,0);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x194000b,(void *)0x1e8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar9 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar9 + 0xc) + 8) + (int)pvVar9,0);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x194000c,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x194000d,(void *)0x20,(void *)0x60);
  call_helper_and_set_flag_104b7726(pvVar11,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar11,0x90,1);
  uVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x194000f,(void *)0x38,(void *)0x120));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar12),(uint16_t)(0x210),(uint16_t)(1));
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x194000e,(void *)(0),(void *)(0));
  write_field_at_offset_0x48(pvVar13,uVar12);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940010,(void *)0x38,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  uVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940012,(void *)0x38,(void *)0x150));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar12),(uint16_t)(0x210),(uint16_t)(1));
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940011,(void *)(0),(void *)(0));
  write_field_at_offset_0x48(pvVar15,uVar12);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940013,(void *)0x38,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar14);
  pvVar17 = (void *)0x0;
  pvVar18 = (void *)0x0;
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1940014,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
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
  graph_link_nextprev((int)pvVar15,(int)pvVar13,0x10,pvVar18);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar16));
  return;
}
