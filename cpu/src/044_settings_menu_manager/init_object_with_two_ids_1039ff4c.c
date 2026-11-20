/* @k10d init_object_with_two_ids_1039ff4c @ 0x1039ff4c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_1039ff4c(cls_10564530 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  uint32_t uVar2;
  
  param_1->field_0x4 = 1;
  pvVar1 = (void *)get_or_init_static_buffer_10495746();
  iterate_range_and_call_match(pvVar1,(uint *)0x10566870/*ROM*/,param_3,param_4);
  param_1->field_0x4c = 0x280;
  param_1->field_0x4e = 0x1e0;
  uVar2 = get_or_init_static_buffer_10495746();
  pvVar1 = (void *)app_obj_factory((void *)uVar2,(void *)0x2080000,0,0);
  set_object_field_at_offset_0x10(&param_1->field5_0x8,pvVar1);
  return;
}
