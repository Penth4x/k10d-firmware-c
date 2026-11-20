/* @k10d init_object_substructures_103d4076 @ 0x103d4076
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 074_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Initializes internal sub-objects and links them into a hierarchy for the cls_1059630c
 *   instance.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1960001-0x1960015)
 *   to allocate or retrieve internal components. It then uses
 *   invoke_virtual_then_call_helper_10494188 and iterate_and_remove_list_entry to link
 *   these components into a tree structure, and finally calls
 *   set_object_field_at_offset_0x10 to register the root component with the parent object.
 *   This appears to be the initialization logic for a complex object graph.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_substructures_103d4076(cls_1059630c *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  int iVar16;
  uint8_t *puVar17;
  uint8_t *puVar18;
  void *pvVar19;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)&DAT_105526b8/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960001,(void *)0x20,(void *)0x198);
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960002,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960003,(void *)(0),(void *)0x44);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960004,(void *)(0),(void *)0x196);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960005,(void *)(0),(void *)0x44);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960006,(void *)(0),(void *)0x2c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960007,(void *)(0),(void *)0x19c);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960008,(void *)0x80,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960009,(void *)0x20,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x196000a,(void *)200,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x196000b,(void *)0xf8,(void *)0x18);
  iVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x196000c,(void *)0xb0,(void *)0x18));
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar12);
  iVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x196000d,(void *)0x128,(void *)0x48));
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar12);
  iVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x196000e,(void *)0xb0,(void *)0x18));
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar12);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x196000f,(void *)0x20,(void *)0x60);
  iVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960010,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar12);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960011,(void *)0x218,(void *)0x60);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960012,(void *)0x20,(void *)0xc0);
  iVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960013,(void *)0x248,(void *)0x60));
  puVar17 = &DAT_00000200;
  puVar18 = &DAT_00000060;
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar13,pvVar14,puVar17,puVar18);
  iterate_and_remove_list_entry(pvVar13,pvVar15,puVar17,puVar18);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar12);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar16);
  pvVar15 = (void *)0x0;
  pvVar19 = (void *)0x0;
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1960015,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar14,pvVar1,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar2,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar8,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar3,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar4,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar5,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar6,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar7,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar9,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar11,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar10,pvVar15,pvVar19);
  iterate_and_remove_list_entry(pvVar14,pvVar13,pvVar15,pvVar19);
  graph_link_nextprev((int)pvVar11,(int)pvVar13,0xf,pvVar19);
  graph_link_nextprev((int)pvVar11,(int)pvVar13,0x10,pvVar19);
  graph_link_nextprev((int)pvVar13,(int)pvVar11,0x10,pvVar19);
  graph_link_nextprev((int)pvVar13,(int)pvVar11,0xf,pvVar19);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar14));
  return;
}
