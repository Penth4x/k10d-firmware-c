/* @k10d build_object_graph_from_ids_103e5c32 @ 0x103e5c32
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Creates a set of objects via a factory, links them into a graph, and registers them
 *   with a manager.
 * summary:
 *   The function calls app_obj_factory repeatedly with specific IDs (0x1a90001-0x1a9001e)
 *   and size parameters to instantiate objects. It then uses
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev to establish
 *   relationships between these objects, and finally registers them via
 *   iterate_and_remove_list_entry. This pattern is characteristic of initializing a complex
 *   object hierarchy or state machine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_graph_from_ids_103e5c32(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)0x10554990/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90002,0,(void *)0x48);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90003,0,(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90004,0,(void *)0x44);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90005,0,(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90008,(void *)0x20,(void *)0x124);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a9000c,(void *)0x38,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90011,(void *)0x38,(void *)0x90);
  pvVar12 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90016,(void *)0x38,(void *)0xc0);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a9001b,(void *)0x38,(void *)0xf0);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a9000a,(void *)0x80,(void *)0x60);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a9000b,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar15);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a9000d,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar15);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a9000e,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar15);
  pvVar16 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a9000f,(void *)0x80,(void *)0x90);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a90010,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar15);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a90012,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar15);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a90013,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar15);
  pvVar17 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90014,(void *)0x80,(void *)0xc0);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a90015,(void *)0x20,(void *)0xc0);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar15);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a90017,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar15);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a90018,(void *)0x20,(void *)0xc0);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar15);
  pvVar18 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a90019,(void *)0x80,(void *)0xf0);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a9001a,(void *)0x20,(void *)0xf0);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar15);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a9001c,(void *)0x20,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar15);
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1a9001d,(void *)0x20,(void *)0xf0);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar15);
  pvVar20 = (void *)0x0;
  pvVar21 = (void *)0x0;
  pvVar19 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1a9001e,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar19,pvVar1,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar2,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar3,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar4,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar5,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar6,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar7,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar8,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar9,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar10,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar11,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar12,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar13,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar14,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar16,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar17,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar18,pvVar20,pvVar21);
  graph_link_nextprev((int)pvVar14,(int)pvVar16,0xf,pvVar21);
  graph_link_nextprev((int)pvVar14,(int)pvVar18,0x10,pvVar21);
  graph_link_nextprev((int)pvVar16,(int)pvVar17,0xf,pvVar21);
  graph_link_nextprev((int)pvVar16,(int)pvVar14,0x10,pvVar21);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xf,pvVar21);
  graph_link_nextprev((int)pvVar17,(int)pvVar16,0x10,pvVar21);
  graph_link_nextprev((int)pvVar18,(int)pvVar14,0xf,pvVar21);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0x10,pvVar21);
  set_object_field_at_offset_0x10((void *)*param_1,pvVar19);
  return;
}
