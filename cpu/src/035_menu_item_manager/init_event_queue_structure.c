/* @k10d init_event_queue_structure @ 0x1038ed32
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a complex event queue or message buffer structure by allocating sub-objects
 *   and linking them.
 * summary:
 *   The function takes a parent object (param_1) and initializes a sub-object at offset
 *   0x24. It calls app_obj_factory repeatedly with sequential IDs (0x3150000-0x3150012) to
 *   create or configure multiple sub-components, some with specific sizes (0x18, 0x48,
 *   0x198, 0x120, 0x150). It then links these components using write_field_at_offset_0x48,
 *   invoke_virtual_then_call_helper_10494188, and iterate_and_remove_list_entry, and sets
 *   up bidirectional links between two specific sub-objects (pvVar13 and pvVar17) using
 *   graph_link_nextprev. Finally, it associates the initialized structure with the parent
 *   object via set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_event_queue_structure(cls_1055a164 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  uint32_t uVar12;
  void *pvVar13;
  int iVar14;
  int iVar15;
  uint32_t uVar16;
  void *pvVar17;
  int iVar18;
  int iVar19;
  void *pvVar20;
  void *pvVar21;
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1056088c/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150001,(void *)0x20,(void *)0x18);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150002,(void *)(0),(void *)(0));
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150003,(void *)0x1a0,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150004,(void *)0x1e8,(void *)0x18);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150005,(void *)0x200,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150006,(void *)0x218,(void *)0x48);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150007,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150008,(void *)0x68,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150009,(void *)0x1b8,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x315000a,(void *)0x200,(void *)0x198);
  uVar12 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x315000b,(void *)0x50,(void *)0x120));
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x315000d,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar12),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x315000f,(void *)0x50,(void *)0x120));
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150011,(void *)0x50,(void *)0x120));
  uVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x315000c,(void *)0x50,(void *)0x150));
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x315000e,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar16),(uint16_t)(0x1e0),(uint16_t)(1));
  iVar18 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150010,(void *)0x50,(void *)0x150));
  pvVar21 = (void *)0x150;
  pvVar20 = (void *)0x50;
  iVar19 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3150012,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  write_field_at_offset_0x48(pvVar13,uVar12);
  write_field_at_offset_0x48(pvVar17,uVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar14);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar18);
  invoke_virtual_then_call_helper_10494188((int)pvVar13,iVar19);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar15);
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar8,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar10,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar11,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar13,pvVar20,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar17,pvVar20,pvVar21);
  graph_link_nextprev((int)pvVar13,(int)pvVar17,0xf,pvVar21);
  graph_link_nextprev((int)pvVar17,(int)pvVar13,0x10,pvVar21);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
