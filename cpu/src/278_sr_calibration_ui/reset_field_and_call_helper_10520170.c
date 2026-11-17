/* @k10d reset_field_and_call_helper_10520170 @ 0x10520170
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_field_and_call_helper_10520170(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0xc) = 0;
  (*(code *)0x104ad2ea/*ROM*/)(*(uint32_t *)(param_1 + 4),0,0,0);
  return param_2;
}
