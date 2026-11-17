/* @k10d store_clamped_byte_at_offset_7 @ 0x1045c646
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_clamped_byte_at_offset_7(void *param_1,int param_2)

{
  if (0x3b < param_2) {
    param_2 = 0x3b;
  }
  *(char *)((int)param_1 + 7) = (char)param_2;
  return;
}
