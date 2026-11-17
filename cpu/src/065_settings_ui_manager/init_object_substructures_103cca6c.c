/* @k10d init_object_substructures_103cca6c @ 0x103cca6c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Initializes multiple sub-objects within the class instance by calling helper functions
 *   with specific IDs and sizes.
 * summary:
 *   The function takes a pointer to an object (param_1) and uses param_1[1] as a context or
 *   parent pointer. It calls iterate_range_and_call_match once, then repeatedly calls
 *   app_obj_factory with a series of incrementing IDs (0x19c0001 to 0x19c0014) and varying
 *   size/offset parameters to create or retrieve sub-structures. It then links some of
 *   these structures using invoke_virtual_then_call_helper_10494188 and
 *   graph_link_nextprev, and registers them with a manager object (pvVar15) via
 *   iterate_and_remove_list_entry. Finally, it calls set_object_field_at_offset_0x10 with
 *   the object's first field and the manager. The specific camera subsystem is not
 *   identifiable from the mechanical operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_substructures_103cca6c(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)0x10553234/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0002,0,(void *)0x48);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0003,0,(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0004,0,(void *)0x44);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0005,0,(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0008,(void *)0x20,(void *)0x124);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c000c,(void *)0x38,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0011,(void *)0x38,(void *)0x90);
  pvVar12 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c000a,(void *)0x80,(void *)0x60);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c000b,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,(int)pvVar13);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c000d,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,(int)pvVar13);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c000e,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,(int)pvVar13);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c000f,(void *)0x80,(void *)0x90);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0010,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,(int)pvVar13);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0012,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,(int)pvVar13);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0013,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,(int)pvVar13);
  pvVar16 = (void *)0x0;
  pvVar17 = (void *)0x0;
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x19c0014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
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
  set_object_field_at_offset_0x10((void *)*param_1,pvVar15);
  return;
}
