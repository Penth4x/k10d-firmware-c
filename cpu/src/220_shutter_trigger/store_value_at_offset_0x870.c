/* @k10d store_value_at_offset_0x870 @ 0x104b755a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x870(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x870) = param_2;
  return;
}
