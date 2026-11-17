/* @k10d init_event_queue_with_18_slots @ 0x10408718
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes a queue structure at param_1+0x24 and registers 18 event slots with varying
 *   sizes.
 * summary:
 *   Calls iterate_range_and_call_match to initialize the queue header at offset 0x24 of
 *   param_1. Then calls app_obj_factory 18 times to create slots with IDs
 *   0x3190000-0x3190012 and specific sizes. Finally, calls iterate_and_remove_list_entry
 *   for each slot to link them into the queue, and calls set_object_field_at_offset_0x10 to
 *   finalize the setup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_event_queue_with_18_slots(void *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar18;
  void *pvVar19;
  uint8_t *puVar20;
  uint8_t *puVar21;
  
  iterate_range_and_call_match(*(void **)((int)param_1 + 0x24),(uint *)0x10599850/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190000,0,0);
  pvVar2 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190001,(void *)0x20,(void *)0x48);
  pvVar3 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190002,(void *)0x20,(void *)0x18);
  pvVar4 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190003,(void *)0x20,(void *)0x18);
  pvVar5 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190004,(void *)0x20,(void *)0x18);
  pvVar6 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190005,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190006,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190007,(void *)0x1a0,(void *)0x18);
  pvVar9 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190008,(void *)0x1e8,(void *)0x18);
  pvVar10 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190009,(void *)0x200,(void *)0x18);
  pvVar11 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x319000a,(void *)0x158,(void *)0x18);
  pvVar12 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x319000b,(void *)0x110,(void *)0x18);
  pvVar13 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x319000c,(void *)0x20,(void *)0x150);
  pvVar14 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x319000d,(void *)0x140,(void *)0x48);
  pvVar15 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x319000e,(void *)0x140,(void *)0xcc);
  pvVar16 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x319000f,(void *)0x140,(void *)0x150);
  pvVar17 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190010,(void *)0x20,(void *)0x120);
  pvVar18 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190011,(void *)0x38,(void *)0x120);
  puVar20 = (uint8_t *)&DAT_00000080;
  puVar21 = (uint8_t *)&DAT_00000090;
  pvVar19 = (void *)app_obj_factory(*(void **)((int)param_1 + 0x24),(void *)0x3190012,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar1,pvVar2,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar3,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar4,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar5,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar6,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar7,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar8,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar9,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar10,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar11,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar12,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar13,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar14,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar15,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar16,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar17,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar18,puVar20,puVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar19,puVar20,puVar21);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
