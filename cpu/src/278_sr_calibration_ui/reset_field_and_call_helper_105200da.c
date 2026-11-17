/* @k10d reset_field_and_call_helper_105200da @ 0x105200da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_field_and_call_helper_105200da(int param_1)

{
  *(uint32_t *)(param_1 + 0xc) = 0;
  (*(code *)0x104ad2ea/*ROM*/)(*(uint32_t *)(param_1 + 4),0,0,0);
  return;
}
