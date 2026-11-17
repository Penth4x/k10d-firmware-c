/* @k10d increment_byte_if_below_limit_1051eaae @ 0x1051eaae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_byte_if_below_limit_1051eaae(int param_1)

{
  if (*(byte *)(param_1 + 5) + 1 < (uint)*(byte *)(param_1 + 4)) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) + 1;
  }
  return;
}
