/* @k10d init_object_substructures_103d704e @ 0x103d704e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes internal sub-objects and links them into a hierarchy using a series of
 *   helper calls.
 * summary:
 *   The function calls iterate_range_and_call_match and then repeatedly invokes
 *   app_obj_factory with incrementing IDs (0x1860001-0x1860019) to create or retrieve sub-
 *   objects. It then uses iterate_and_remove_list_entry,
 *   invoke_virtual_then_call_helper_10494188, and graph_link_nextprev to establish
 *   relationships between these objects, likely setting up parent-child links or event
 *   handlers. Finally, it calls set_object_field_at_offset_0x10 to register the constructed
 *   structure with the parent object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_substructures_103d704e(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar15;
  void *pvVar16;
  void *pvVar17;
  uint8_t *puVar18;
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)0x1054cefc/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860002,0,(void *)0x44);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860003,0,(void *)0x196);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860004,0,(void *)0x44);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860005,0,(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860006,0,(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860009,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x186000c,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x186000d,(void *)0x20,(void *)0x60);
  iVar12 = (int)app_obj_factory((void *)param_1[1],(void *)0x186000e,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar12);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860010,(void *)0x1e8,(void *)0x60);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x186000f,(void *)0x1e8,(void *)0x60);
  iVar12 = (int)app_obj_factory((void *)param_1[1],(void *)0x1860011,(void *)0x230,(void *)0x60);
  pvVar16 = (void *)0x1b8;
  puVar18 = (uint8_t *)&DAT_00000060;
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1860012,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar11,pvVar13,pvVar16,puVar18);
  iterate_and_remove_list_entry(pvVar11,pvVar14,pvVar16,puVar18);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar12);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar15);
  graph_link_nextprev((int)pvVar13,(int)pvVar14,0xd,puVar18);
  graph_link_nextprev((int)pvVar13,(int)pvVar14,0xe,puVar18);
  graph_link_nextprev((int)pvVar14,(int)pvVar13,0xd,puVar18);
  graph_link_nextprev((int)pvVar14,(int)pvVar13,0xe,puVar18);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860013,(void *)0x20,(void *)0x90);
  iVar12 = (int)app_obj_factory((void *)param_1[1],(void *)0x1860014,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar12);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860016,(void *)0x1e8,(void *)0x90);
  pvVar16 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860015,(void *)0x1e8,(void *)0x90);
  iVar12 = (int)app_obj_factory((void *)param_1[1],(void *)0x1860017,(void *)0x230,(void *)0x90);
  pvVar17 = (void *)0x1b8;
  puVar18 = (uint8_t *)&DAT_00000090;
  iVar15 = (int)app_obj_factory((void *)param_1[1],(void *)0x1860018,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar13,pvVar14,pvVar17,puVar18);
  iterate_and_remove_list_entry(pvVar13,pvVar16,pvVar17,puVar18);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar12);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar15);
  graph_link_nextprev((int)pvVar14,(int)pvVar16,0xd,puVar18);
  graph_link_nextprev((int)pvVar14,(int)pvVar16,0xe,puVar18);
  graph_link_nextprev((int)pvVar16,(int)pvVar14,0xd,puVar18);
  graph_link_nextprev((int)pvVar16,(int)pvVar14,0xe,puVar18);
  pvVar16 = (void *)0x0;
  pvVar17 = (void *)0x0;
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1860019,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar14,pvVar1,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar2,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar3,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar4,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar5,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar6,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar7,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar8,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar9,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar10,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar11,pvVar16,pvVar17);
  iterate_and_remove_list_entry(pvVar14,pvVar13,pvVar16,pvVar17);
  graph_link_nextprev((int)pvVar11,(int)pvVar13,0x10,pvVar17);
  graph_link_nextprev((int)pvVar11,(int)pvVar13,0xf,pvVar17);
  graph_link_nextprev((int)pvVar13,(int)pvVar11,0x10,pvVar17);
  graph_link_nextprev((int)pvVar13,(int)pvVar11,0xf,pvVar17);
  set_object_field_at_offset_0x10((void *)*param_1,pvVar14);
  return;
}
