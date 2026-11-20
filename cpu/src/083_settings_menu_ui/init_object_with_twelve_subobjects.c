/* @k10d init_object_with_twelve_subobjects @ 0x103e72f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes an object by creating twelve sub-objects and linking them into a hierarchy.
 * summary:
 *   The function calls iterate_range_and_call_match to initialize the object's base or
 *   context. It then calls app_obj_factory twelve times with distinct IDs
 *   (0x1b10001-0x1b10014) to create sub-objects or resources. It uses
 *   invoke_virtual_then_call_helper_10494188 to link some of these sub-objects into two
 *   parent structures (pvVar12 and pvVar14). It then calls iterate_and_remove_list_entry to
 *   register all twelve sub-objects with a central manager (pvVar15). Finally, it calls
 *   graph_link_nextprev to establish bidirectional links between the two parent structures
 *   and calls set_object_field_at_offset_0x10 to finalize the initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_twelve_subobjects(cls_105972a8 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x10555ca0/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10002,(void *)(0),(void *)0x48);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10003,(void *)(0),(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10008,(void *)0x20,(void *)0x124);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b1000c,(void *)0x38,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10011,(void *)0x38,(void *)0x90);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b1000a,(void *)0x80,(void *)0x60);
  iVar13 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b1000b,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  iVar13 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b1000d,(void *)0x20,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  iVar13 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b1000e,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b1000f,(void *)0x80,(void *)0x90);
  iVar13 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10010,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar13);
  iVar13 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10012,(void *)0x20,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar13);
  iVar13 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10013,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar13);
  pvVar16 = (void *)0x0;
  pvVar17 = (void *)0x0;
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1b10014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar15,pvVar1,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar2,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar3,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar4,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar5,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar6,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar7,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar8,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar9,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar10,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar11,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar12,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar15,pvVar14,pvVar16,pvVar17);
  graph_link_nextprev((int)pvVar12,(int)pvVar14,0xf,pvVar17);
  graph_link_nextprev((int)pvVar12,(int)pvVar14,0x10,pvVar17);
  graph_link_nextprev((int)pvVar14,(int)pvVar12,0xf,pvVar17);
  graph_link_nextprev((int)pvVar14,(int)pvVar12,0x10,pvVar17);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar15));
  return;
}
