/* @k10d build_object_subtree_103df402 @ 0x103df402
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a set of sub-objects by ID and size, links them into a tree, and registers
 *   them with a parent container.
 * summary:
 *   The function calls app_obj_factory repeatedly with distinct IDs (0x1b20001-0x1b20014)
 *   and sizes to allocate sub-objects. It then links these objects using
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev, registers them with a
 *   container via iterate_and_remove_list_entry, and finally associates the root with the
 *   main object via set_object_field_at_offset_0x10. The specific subsystem (UI, camera
 *   control, etc.) is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_subtree_103df402(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)0x10555e44/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20002,0,(void *)0x48);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20003,0,(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20004,0,(void *)0x44);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20005,0,(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20008,(void *)0x20,(void *)0x124);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b2000c,(void *)0x38,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20011,(void *)0x38,(void *)0x90);
  pvVar12 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b2000a,(void *)0x80,(void *)0x60);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b2000b,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,(int)pvVar13);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b2000d,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,(int)pvVar13);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b2000e,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,(int)pvVar13);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b2000f,(void *)0x80,(void *)0x90);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20010,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,(int)pvVar13);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20012,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,(int)pvVar13);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20013,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,(int)pvVar13);
  pvVar16 = (void *)0x0;
  pvVar17 = (void *)0x0;
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b20014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
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
