/* @k10d init_object_and_set_field @ 0x10463f02
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 140_property_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_and_set_field(void *param_1)

{
  init_object_with_buffer(param_1);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x50),1,0x1f);
  return 1;
}
