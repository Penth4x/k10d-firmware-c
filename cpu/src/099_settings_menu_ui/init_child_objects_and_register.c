/* @k10d init_child_objects_and_register @ 0x10422dd8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes four child objects via a factory, configures them, and registers them with
 *   a parent container.
 * summary:
 *   The function calls iterate_range_and_call_match to initialize a base structure, then
 *   uses app_obj_factory to create four distinct child objects (IDs 0x1bd0001-0x1bd0005).
 *   It invokes virtual methods on two of these objects (slots 2) and calls configuration
 *   helpers call_helper_and_set_flag_104b7726 and call_helper_and_set_flag_104b7744 on a
 *   fourth. Finally, it registers all four children with a fifth object (ID 0x1bd0005)
 *   using iterate_and_remove_list_entry and links the result to the parent object via
 *   set_object_field_at_offset_0x10. This appears to be a setup routine for a subsystem
 *   with multiple components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_child_objects_and_register(cls_1059dc64 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x10552640/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bd0001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bd0003,(void *)0x1a0,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar2 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,0);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bd0004,(void *)0x1e8,(void *)0x18);
  (((vtbl_entry*)(*(int *)((int)pvVar3 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar3 + 0xc) + 8) + (int)pvVar3,0);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bd0002,(void *)0x20,(void *)0x60);
  call_helper_and_set_flag_104b7726(pvVar4,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar4,0x90,1);
  pvVar6 = (void *)0x0;
  pvVar7 = (void *)0x0;
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bd0005,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar5,pvVar1,pvVar6,pvVar7);
  iterate_and_remove_list_entry(pvVar5,pvVar2,pvVar6,pvVar7);
  iterate_and_remove_list_entry(pvVar5,pvVar3,pvVar6,pvVar7);
  iterate_and_remove_list_entry(pvVar5,pvVar4,pvVar6,pvVar7);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar5));
  return;
}
