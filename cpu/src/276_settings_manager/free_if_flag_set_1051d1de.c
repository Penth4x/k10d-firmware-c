/* @k10d free_if_flag_set_1051d1de @ 0x1051d1de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_if_flag_set_1051d1de(void *param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
