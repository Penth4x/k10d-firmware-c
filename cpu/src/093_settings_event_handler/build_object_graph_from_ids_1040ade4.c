/* @k10d build_object_graph_from_ids_1040ade4 @ 0x1040ade4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 093_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Allocates a set of sub-objects by ID and wires them together into a parent container.
 * summary:
 *   The function calls app_obj_factory repeatedly with a series of IDs
 *   (0x1bb0001-0x1bb0015) to create child objects. It then uses
 *   iterate_and_remove_list_entry and graph_link_nextprev to establish relationships
 *   between these children and a parent object (pvVar16). Finally, it registers the
 *   constructed graph with the main object via set_object_field_at_offset_0x10. This
 *   appears to be an initialization routine for a complex subsystem structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_object_graph_from_ids_1040ade4(cls_10599b9c *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  int iVar18;
  void *pvVar19;
  uint8_t *puVar20;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)&DAT_10552488/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0009,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb000c,(void *)0x38,(void *)0x18);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0013,(void *)0x230,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar11 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar11 + 0xc) + 8) + (int)pvVar11,0);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0014,(void *)0x278,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar12 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb000a,(void *)0x20,(void *)0x60);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb000b,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb000d,(void *)0x20,(void *)0x90);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb000e,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar14);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0010,(void *)0x1e8,(void *)0x90);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb000f,(void *)0x1e8,(void *)0x90);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0011,(void *)0x230,(void *)0x90));
  pvVar19 = (void *)0x1b8;
  puVar20 = &DAT_00000090;
  iVar18 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0012,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar15,pvVar16,pvVar19,puVar20);
  iterate_and_remove_list_entry(pvVar15,pvVar17,pvVar19,puVar20);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar14);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar18);
  graph_link_nextprev((int)pvVar16,(int)pvVar17,0xd,puVar20);
  graph_link_nextprev((int)pvVar16,(int)pvVar17,0xe,puVar20);
  graph_link_nextprev((int)pvVar17,(int)pvVar16,0xd,puVar20);
  graph_link_nextprev((int)pvVar17,(int)pvVar16,0xe,puVar20);
  pvVar17 = (void *)0x0;
  pvVar19 = (void *)0x0;
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bb0015,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar16,pvVar1,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar2,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar3,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar4,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar5,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar6,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar7,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar8,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar9,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar10,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar13,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar11,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar12,pvVar17,pvVar19);
  iterate_and_remove_list_entry(pvVar16,pvVar15,pvVar17,pvVar19);
  graph_link_nextprev((int)pvVar13,(int)pvVar15,0x10,pvVar19);
  graph_link_nextprev((int)pvVar13,(int)pvVar15,0xf,pvVar19);
  graph_link_nextprev((int)pvVar15,(int)pvVar13,0x10,pvVar19);
  graph_link_nextprev((int)pvVar15,(int)pvVar13,0xf,pvVar19);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar16));
  return;
}
