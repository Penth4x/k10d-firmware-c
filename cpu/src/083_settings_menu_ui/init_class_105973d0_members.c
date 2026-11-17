/* @k10d init_class_105973d0_members @ 0x103e7f2c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes the internal state of a cls_105973d0 object by allocating and linking
 *   multiple sub-objects.
 * summary:
 *   The function takes a cls_105973d0 object (param_1) and initializes its internal
 *   structure. It calls iterate_range_and_call_match to set up a base component, then
 *   repeatedly calls app_obj_factory with specific IDs (0x1a40001-0x1a40014) to allocate or
 *   retrieve sub-objects. It links some of these sub-objects using
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev, and registers a list
 *   of them with iterate_and_remove_list_entry. Finally, it calls
 *   set_object_field_at_offset_0x10 with the object's first field and the last allocated
 *   sub-object. The specific camera subsystem is not identifiable from the mechanical
 *   operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_class_105973d0_members(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)0x1055401c/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40002,0,(void *)0x48);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40003,0,(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40004,0,(void *)0x44);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40005,0,(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40008,(void *)0x20,(void *)0x124);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a4000c,(void *)0x38,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40011,(void *)0x38,(void *)0x90);
  pvVar12 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a4000a,(void *)0x80,(void *)0x60);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a4000b,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a4000d,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a4000e,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar13);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a4000f,(void *)0x80,(void *)0x90);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a40010,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar13);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a40012,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar13);
  iVar13 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a40013,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar13);
  pvVar16 = (void *)0x0;
  pvVar17 = (void *)0x0;
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a40014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
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
