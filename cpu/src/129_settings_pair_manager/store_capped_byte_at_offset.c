/* @k10d store_capped_byte_at_offset @ 0x1045c62a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_capped_byte_at_offset(void *param_1,int param_2)

{
  if (0x17 < param_2) {
    param_2 = 0x17;
  }
  *(char *)((int)param_1 + 5) = (char)param_2;
  return;
}
