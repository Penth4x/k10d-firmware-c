/* @k10d clear_two_fields_and_reset @ 0x104ad300
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_fields_and_reset(uint32_t *param_1,int param_2)

{
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    zero_memory_region((uint32_t *)(*param_1),(uint)(param_1[1]),(uint32_t)(0));
  }
  return;
}
