/* @k10d register_fourteen_subobjects @ 0x103d0b5a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 068_settings_capture_ui (unit names are model-proposed)
 * purpose:
 *   Creates 14 sub-objects via app_obj_factory and registers them into a container object.
 * summary:
 *   The function calls iterate_range_and_call_match to initialize a context, then invokes
 *   app_obj_factory 14 times with distinct IDs (0x18a0001-0x18a0012) to create sub-objects.
 *   It calls invoke_virtual_then_call_helper_10494188 on two of the results, then registers
 *   all 14 sub-objects into a container (pvVar16) using iterate_and_remove_list_entry.
 *   Finally, it links the container to the parent object via
 *   set_object_field_at_offset_0x10. This appears to be a virtual method (slot 5) of
 *   cls_10595f08 that sets up a collection of child components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_fourteen_subobjects(cls_10595f08 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)&DAT_1054d6a4/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0009,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a000c,(void *)0x38,(void *)0x18);
  iVar11 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a000d,(void *)0x20,(void *)0x18));
  invoke_virtual_then_call_helper_10494188((int)pvVar10,iVar11);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a000e,(void *)0x1b8,(void *)0x18);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a000f,(void *)0x200,(void *)0x18);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0010,(void *)0x1a0,(void *)0x18);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0011,(void *)0x20,(void *)0xc0);
  pvVar17 = (void *)0x0;
  pvVar18 = (void *)0x0;
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18a0012,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
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
  iterate_and_remove_list_entry(pvVar16,pvVar12,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar13,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar14,pvVar17,pvVar18);
  iterate_and_remove_list_entry(pvVar16,pvVar15,pvVar17,pvVar18);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar16));
  return;
}
