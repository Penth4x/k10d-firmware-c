/* @k10d initialize_subsystem_with_four_channels @ 0x104cf096
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Allocates and configures a subsystem object with four child channel objects linked to a
 *   parent.
 * summary:
 *   The function allocates a 0x20-byte object via heap_alloc and stores it at offset 0x38
 *   of the parent structure. It creates a parent object
 *   (get_or_init_static_buffer_10495746) and four child objects (app_obj_factory) with IDs
 *   0x4000000 through 0x4000003, configuring them with parameters like 0x240 and 0x20. The
 *   children are linked to the parent via iterate_and_remove_list_entry, and the parent is
 *   associated with the 0x20-byte object via set_object_field_at_offset_0x10. The specific
 *   subsystem (display, sensor, etc.) is not determinable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subsystem_with_four_channels(cls_105b979c *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  uint8_t *puVar7;
  int iVar8;
  
  piVar1 = (int *)heap_alloc((void *)0x20);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105b4254_new(piVar1);
  }
  param_1->field_0x38 = (uintptr_t)(piVar1);
  (((vtbl_entry*)(*piVar1))[7].fn)((int)((vtbl_entry*)(*piVar1))[7].adj + (int)piVar1,0);
  iVar8 = *(int *)param_1->field_0x38;
  (((vtbl_entry*)(iVar8))[8].fn)((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar8))[8].adj,0);
  pvVar2 = (void *)get_or_init_static_buffer_10495746();
  param_1->field_0x3c = (uintptr_t)(pvVar2);
  iterate_range_and_call_match(pvVar2,(uint *)0x105b9838/*ROM*/,param_3,param_4);
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x3c),(void *)0x4000000,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x3c),(void *)0x4000001,(void *)0x20,(void *)0xc0);
  set_struct_fields_and_flag(pvVar3,0x240,1);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x3c),(void *)0x4000002,(void *)0x20,(void *)0xf0);
  set_struct_fields_and_flag(pvVar4,0x240,1);
  puVar7 = &DAT_00000078;
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x3c),(void *)0x4000003,(void *)0x20,(void *)__frv_reg_unset(7));
  call_helper_and_set_flag_104b7726(pvVar5,0x240,1);
  pvVar6 = (void *)0x1;
  call_helper_and_set_flag_104b7744(pvVar5,0x90, __frv_reg_unset(6));
  iterate_and_remove_list_entry(pvVar2,pvVar3,pvVar6,puVar7);
  iterate_and_remove_list_entry(pvVar2,pvVar4,pvVar6,puVar7);
  iterate_and_remove_list_entry(pvVar2,pvVar5,pvVar6,puVar7);
  (((vtbl_entry*)(*(int *)((int)pvVar3 + 0xc)))[1].fn)
            ((int)pvVar3 + (int)*(short *)(*(int *)((int)pvVar3 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)((int)pvVar4 + 0xc)))[1].fn)
            ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)((int)pvVar5 + 0xc)))[1].fn)
            ((int)pvVar5 + (int)*(short *)(*(int *)((int)pvVar5 + 0xc) + 8),0);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x38),(void *)(pvVar2));
  return 1;
}
