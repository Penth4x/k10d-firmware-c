/* @k10d init_class_105961e8_members @ 0x103d332e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 073_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes the internal state of a cls_105961e8 object by allocating and linking a
 *   series of sub-objects.
 * summary:
 *   The function takes a cls_105961e8 object (param_1) and initializes its internal
 *   structure. It calls iterate_range_and_call_match with a fixed address (0x10556330) and
 *   then repeatedly calls app_obj_factory with incrementing IDs (0x1b50001-0x1b50014) to
 *   create or retrieve sub-objects. These sub-objects are then linked together using
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev, and registered with a
 *   parent object (pvVar15) via iterate_and_remove_list_entry. Finally, it calls
 *   set_object_field_at_offset_0x10 to associate the initialized structure with the
 *   object's first member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_class_105961e8_members(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)0x10556330/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50002,0,(void *)0x48);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50003,0,(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50004,0,(void *)0x44);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50005,0,(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50008,(void *)0x20,(void *)0x124);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b5000c,(void *)0x38,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50011,(void *)0x38,(void *)0x90);
  pvVar12 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b5000a,(void *)0x80,(void *)0x60);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1b5000b,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1b5000d,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1b5000e,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b5000f,(void *)0x80,(void *)0x90);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1b50010,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar13);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1b50012,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar13);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1b50013,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar13);
  pvVar16 = (void *)0x0;
  pvVar17 = (void *)0x0;
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1b50014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
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
