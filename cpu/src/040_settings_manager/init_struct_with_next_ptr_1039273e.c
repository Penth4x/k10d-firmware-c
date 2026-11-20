/* @k10d init_struct_with_next_ptr_1039273e @ 0x1039273e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105627d4 * init_struct_with_next_ptr_1039273e(cls_105627d4 *param_1)

{
  *(uint32_t *)&param_1->field_0x4 = (uint32_t)&param_1->field_0x8;
  call_two_helpers_on_object_1039282a((void *)__frv_reg_unset(4));
  return param_1;
}
