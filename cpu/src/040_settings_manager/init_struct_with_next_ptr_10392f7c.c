/* @k10d init_struct_with_next_ptr_10392f7c @ 0x10392f7c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105628cc * init_struct_with_next_ptr_10392f7c(cls_105628cc *param_1)

{
  *(uint32_t *)&param_1->field_0x4 = (uint32_t)&param_1->field_0x8;
  initialize_object_with_three_calls_10393162((void *)(uint32_t)param_1);
  return param_1;
}
