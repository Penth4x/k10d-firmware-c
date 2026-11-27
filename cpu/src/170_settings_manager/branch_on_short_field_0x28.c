/* @k10d branch_on_short_field_0x28 @ 0x1047e9a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void branch_on_short_field_0x28(cls_105aaebc *param_1, uint32_t param_2)
{
  if (param_1->field_0x28 == 0x20) {
    build_and_validate_config((int *)(uint32_t)param_1,(uint32_t)param_2);
  }
  else {
    build_object_from_param_fields((int *)(uint32_t)param_1,(uint32_t)param_2);
  }
  return;
}
