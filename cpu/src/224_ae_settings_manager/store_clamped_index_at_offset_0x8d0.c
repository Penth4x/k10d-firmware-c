/* @k10d store_clamped_index_at_offset_0x8d0 @ 0x104bd0f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_clamped_index_at_offset_0x8d0(int param_1,int param_2)

{
  if ((param_2 == -1) || (0 < param_2)) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x8d0) = param_2;
  return;
}
