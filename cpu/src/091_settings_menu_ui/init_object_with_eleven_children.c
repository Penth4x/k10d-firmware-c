/* @k10d init_object_with_eleven_children @ 0x10408f66
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Creates eleven child objects via a helper, links them into a parent structure, and
 *   registers the parent.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1ba0001-0x1ba0011)
 *   to obtain child object pointers. It then uses iterate_and_remove_list_entry and
 *   invoke_virtual_then_call_helper_10494188 to establish relationships between these
 *   children and a parent object (pvVar13). Finally, it calls
 *   set_object_field_at_offset_0x10 to register the parent object with the first parameter.
 *   The specific subsystem is not identifiable from the mechanical object construction
 *   pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_eleven_children(cls_105999ec *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  uint8_t *puVar17;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1054ca4c/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0009,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba000a,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba000b,(void *)0x20,(void *)0x60);
  iVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba000c,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar12);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba000e,(void *)0x1e8,(void *)0x60);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba000d,(void *)0x1e8,(void *)0x60);
  iVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba000f,(void *)0x230,(void *)0x60));
  pvVar16 = (void *)0x1b8;
  puVar17 = &DAT_00000060;
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0010,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar11,pvVar13,pvVar16,puVar17);
  iterate_and_remove_list_entry(pvVar11,pvVar14,pvVar16,puVar17);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar12);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar15);
  graph_link_nextprev((int)pvVar13,(int)pvVar14,0xd,puVar17);
  graph_link_nextprev((int)pvVar13,(int)pvVar14,0xe,puVar17);
  graph_link_nextprev((int)pvVar14,(int)pvVar13,0xd,puVar17);
  graph_link_nextprev((int)pvVar14,(int)pvVar13,0xe,puVar17);
  pvVar14 = (void *)0x0;
  pvVar16 = (void *)0x0;
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ba0011,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar13,pvVar1,pvVar14,pvVar16);
  iterate_and_remove_list_entry(pvVar13,pvVar2,pvVar14,pvVar16);
  iterate_and_remove_list_entry(pvVar13,pvVar3,pvVar14,pvVar16);
  iterate_and_remove_list_entry(pvVar13,pvVar4,pvVar14,pvVar16);
  iterate_and_remove_list_entry(pvVar13,pvVar5,pvVar14,pvVar16);
  iterate_and_remove_list_entry(pvVar13,pvVar6,pvVar14,pvVar16);
  iterate_and_remove_list_entry(pvVar13,pvVar7,pvVar14,pvVar16);
  iterate_and_remove_list_entry(pvVar13,pvVar8,pvVar14,pvVar16);
  iterate_and_remove_list_entry(pvVar13,pvVar9,pvVar14,pvVar16);
  iterate_and_remove_list_entry(pvVar13,pvVar10,pvVar14,pvVar16);
  iterate_and_remove_list_entry(pvVar13,pvVar11,pvVar14,pvVar16);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar13));
  return;
}
