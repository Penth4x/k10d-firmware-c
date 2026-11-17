/* @k10d init_child_objects_and_link @ 0x103e3f8e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Creates and initializes a series of child objects, links them into a container, and
 *   registers the container.
 * summary:
 *   The function allocates multiple child objects using app_obj_factory with specific IDs
 *   and sizes. It initializes these objects via virtual calls and helper functions
 *   (call_helper_and_set_flag_104b7726, call_helper_and_set_flag_104b7744), then links them
 *   into a parent object (pvVar10) using iterate_and_remove_list_entry. Finally, it
 *   registers the parent object with set_object_field_at_offset_0x10. This appears to be an
 *   initialization routine for a composite object structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_child_objects_and_link(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)0x1054d578/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1890001,0,0);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1890005,(void *)0x20,(void *)0x198);
  (**(code **)(*(int *)((int)pvVar2 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,0);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1890006,(void *)0x80,(void *)0x198);
  (**(code **)(*(int *)((int)pvVar3 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar3 + 0xc) + 8) + (int)pvVar3,0);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1890008,(void *)0x20,(void *)0x60);
  call_helper_and_set_flag_104b7726(pvVar4,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar4,0x90,1);
  (**(code **)(*(int *)((int)pvVar4 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar4 + 0xc) + 8) + (int)pvVar4,0);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1890009,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar5,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar5,0x90,1);
  (**(code **)(*(int *)((int)pvVar5 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar5 + 0xc) + 8) + (int)pvVar5,0);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x189000a,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar6,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar6,0x90,1);
  (**(code **)(*(int *)((int)pvVar6 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar6 + 0xc) + 8) + (int)pvVar6,0);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x189000b,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar7,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar7,0x90,1);
  (**(code **)(*(int *)((int)pvVar7 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar7 + 0xc) + 8) + (int)pvVar7,0);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x189000c,(void *)0x20,(void *)0x60);
  call_helper_and_set_flag_104b7726(pvVar8,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar8,0x90,1);
  (**(code **)(*(int *)((int)pvVar8 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar8 + 0xc) + 8) + (int)pvVar8,0);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x189000d,(void *)0x50,(void *)0xf0);
  init_object_with_hash_and_flag(pvVar9,0);
  pvVar11 = (void *)0x0;
  pvVar12 = (void *)0x0;
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x189000e,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar10,pvVar1,pvVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar10,pvVar2,pvVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar10,pvVar3,pvVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar10,pvVar4,pvVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar10,pvVar5,pvVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar10,pvVar6,pvVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar10,pvVar7,pvVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar10,pvVar8,pvVar11,pvVar12);
  iterate_and_remove_list_entry(pvVar10,pvVar9,pvVar11,pvVar12);
  set_object_field_at_offset_0x10((void *)*param_1,pvVar10);
  return;
}
