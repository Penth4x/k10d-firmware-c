/* @k10d store_three_words_at_offset_0x24 @ 0x1048dd9e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_three_words_at_offset_0x24(int param_1,uint16_t param_2,uint16_t param_3,uint16_t param_4)

{
  *(uint16_t *)(param_1 + 0x24) = param_4;
  *(uint16_t *)(param_1 + 0x26) = param_2;
  *(uint16_t *)(param_1 + 0x28) = param_3;
  return;
}
