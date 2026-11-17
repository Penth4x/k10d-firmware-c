/* @k10d build_linked_object_list_104248fe @ 0x104248fe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Allocates a sequence of objects by ID and links them into a doubly-linked list.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x10e0001-0x10e0012)
 *   and varying size/offset parameters to create objects. It then uses
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev to establish forward
 *   and backward links between these objects, forming a list structure. Finally, it
 *   registers the objects with a container via iterate_and_remove_list_entry and associates
 *   the list head with the class instance via set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_linked_object_list_104248fe(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)&DAT_1054b33c/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory(param_1[1],(void *)0x10e0001,(void *)0x20,(void *)0x198);
  pvVar2 = (void *)app_obj_factory(param_1[1],(void *)0x10e0002,0,0);
  pvVar3 = (void *)app_obj_factory(param_1[1],(void *)0x10e0003,0,(void *)0x44);
  pvVar4 = (void *)app_obj_factory(param_1[1],(void *)0x10e0004,0,(void *)0x196);
  pvVar5 = (void *)app_obj_factory(param_1[1],(void *)0x10e0005,0,(void *)0x44);
  pvVar6 = (void *)app_obj_factory(param_1[1],(void *)0x10e0006,(void *)0x80,(void *)0x198);
  pvVar7 = (void *)app_obj_factory(param_1[1],(void *)0x10e0007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory(param_1[1],(void *)0x10e0008,(void *)200,(void *)0x18);
  pvVar9 = (void *)app_obj_factory(param_1[1],(void *)0x10e0009,(void *)0x20,(void *)0x60);
  iVar10 = app_obj_factory(param_1[1],(void *)0x10e000a,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar9,iVar10);
  iVar10 = app_obj_factory(param_1[1],(void *)0x10e000b,(void *)0x248,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar9,iVar10);
  pvVar11 = (void *)app_obj_factory(param_1[1],(void *)0x10e000c,(void *)0x20,(void *)0x90);
  iVar10 = app_obj_factory(param_1[1],(void *)0x10e000d,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar10);
  iVar10 = app_obj_factory(param_1[1],(void *)0x10e000e,(void *)0x248,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar10);
  pvVar12 = (void *)app_obj_factory(param_1[1],(void *)0x10e000f,(void *)0x20,(void *)0xc0);
  iVar10 = app_obj_factory(param_1[1],(void *)0x10e0010,(void *)0x20,(void *)0xc0);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar10);
  iVar10 = app_obj_factory(param_1[1],(void *)0x10e0011,(void *)0x248,(void *)0xc0);
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar10);
  pvVar14 = (void *)0x0;
  pvVar15 = (void *)0x0;
  pvVar13 = (void *)app_obj_factory(param_1[1],(void *)0x10e0012,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar13,pvVar1,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar13,pvVar2,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar13,pvVar3,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar13,pvVar4,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar13,pvVar5,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar13,pvVar6,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar13,pvVar7,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar13,pvVar8,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar13,pvVar9,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar13,pvVar11,pvVar14,pvVar15);
  iterate_and_remove_list_entry(pvVar13,pvVar12,pvVar14,pvVar15);
  graph_link_nextprev((int)pvVar9,(int)pvVar11,0xf,pvVar15);
  graph_link_nextprev((int)pvVar11,(int)pvVar9,0x10,pvVar15);
  graph_link_nextprev((int)pvVar11,(int)pvVar12,0xf,pvVar15);
  graph_link_nextprev((int)pvVar12,(int)pvVar11,0x10,pvVar15);
  set_object_field_at_offset_0x10((void *)*param_1,pvVar13);
  return;
}
