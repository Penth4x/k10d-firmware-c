/* @k10d init_object_subcomponents @ 0x103d9dea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes and links multiple sub-objects within the class instance using a factory
 *   helper.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1880001-0x1880014)
 *   to create or retrieve sub-objects. It then configures some of these objects via
 *   call_helper_and_set_flag_104b7726 and call_helper_and_set_flag_104b7744, links pairs of
 *   them using write_field_at_offset_0x48 and invoke_virtual_then_call_helper_10494188, and
 *   registers all created objects into a container (pvVar16) via
 *   iterate_and_remove_list_entry. Finally, it establishes bidirectional links between two
 *   specific sub-objects and calls set_object_field_at_offset_0x10 to finalize the setup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_subcomponents(cls_105965fc *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)&DAT_1054d3d4/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x188000a,(void *)0x1a0,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar8 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar8 + 0xc) + 8) + (int)pvVar8,0);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x188000b,(void *)0x1e8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar9 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar9 + 0xc) + 8) + (int)pvVar9,0);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x188000c,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x188000d,(void *)0x20,(void *)0x60);
  call_helper_and_set_flag_104b7726(pvVar11,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar11,0x90,1);
  uVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x188000f,(void *)0x38,(void *)0x120));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar12),(uint16_t)(0x210),(uint16_t)(1));
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x188000e,(void *)(0),(void *)(0));
  write_field_at_offset_0x48(pvVar13,uVar12);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880010,(void *)0x38,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  uVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880012,(void *)0x38,(void *)0x150));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar12),(uint16_t)(0x210),(uint16_t)(1));
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880011,(void *)(0),(void *)(0));
  write_field_at_offset_0x48(pvVar15,uVar12);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880013,(void *)0x38,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar14);
  pvVar17 = (void *)0x0;
  pvVar18 = (void *)0x0;
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1880014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
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
