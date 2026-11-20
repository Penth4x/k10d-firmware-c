/* @k10d init_object_substructures_104094b4 @ 0x104094b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes multiple sub-objects within the class instance by allocating and linking
 *   them via helper functions.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1830001-0x183001b)
 *   to allocate or retrieve sub-structures. It then uses iterate_and_remove_list_entry and
 *   graph_link_nextprev to establish relationships between these sub-objects, likely
 *   setting up internal state or event handlers. Finally, it calls
 *   set_object_field_at_offset_0x10 to register the initialized structure with the parent
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_substructures_104094b4(cls_10599a88 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar16;
  void *pvVar17;
  void *pvVar18;
  int iVar19;
  void *pvVar20;
  void *pvVar21;
  uint8_t *puVar22;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1054c470/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830008,(void *)0x260,(void *)0xf0);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830009,(void *)0x260,(void *)0x60);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x183000a,(void *)0x20,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x183000b,(void *)0x80,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x183000c,(void *)0x1d0,(void *)0x198);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x183000d,(void *)0x218,(void *)0x198);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x183000e,(void *)0x38,(void *)0x18);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x183000f,(void *)0x20,(void *)0x60);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830010,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar16);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830012,(void *)0x1e8,(void *)0x60);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830011,(void *)0x1e8,(void *)0x60);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830013,(void *)0x230,(void *)0x60));
  pvVar20 = (void *)0x1b8;
  puVar22 = &DAT_00000060;
  iVar19 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830014,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar15,pvVar17,pvVar20,puVar22);
  iterate_and_remove_list_entry(pvVar15,pvVar18,pvVar20,puVar22);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar19);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xd,puVar22);
  graph_link_nextprev((int)pvVar17,(int)pvVar18,0xe,puVar22);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0xd,puVar22);
  graph_link_nextprev((int)pvVar18,(int)pvVar17,0xe,puVar22);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830015,(void *)0x20,(void *)0x90);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830016,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar16);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830018,(void *)0x1e8,(void *)0x90);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830017,(void *)0x1e8,(void *)0x90);
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1830019,(void *)0x230,(void *)0x90));
  pvVar21 = (void *)0x1b8;
  puVar22 = &DAT_00000090;
  iVar19 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x183001a,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar17,pvVar18,pvVar21,puVar22);
  iterate_and_remove_list_entry(pvVar17,pvVar20,pvVar21,puVar22);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar19);
  graph_link_nextprev((int)pvVar18,(int)pvVar20,0xd,puVar22);
  graph_link_nextprev((int)pvVar18,(int)pvVar20,0xe,puVar22);
  graph_link_nextprev((int)pvVar20,(int)pvVar18,0xd,puVar22);
  graph_link_nextprev((int)pvVar20,(int)pvVar18,0xe,puVar22);
  pvVar20 = (void *)0x0;
  pvVar21 = (void *)0x0;
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x183001b,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar18,pvVar1,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar2,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar3,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar4,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar5,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar6,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar7,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar8,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar9,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar10,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar12,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar13,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar11,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar14,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar15,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar18,pvVar17,pvVar20,pvVar21);
  graph_link_nextprev((int)pvVar15,(int)pvVar17,0xf,pvVar21);
  graph_link_nextprev((int)pvVar17,(int)pvVar15,0x10,pvVar21);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar18));
  return;
}
