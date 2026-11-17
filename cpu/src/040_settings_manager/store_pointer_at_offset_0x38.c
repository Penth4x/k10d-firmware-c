/* @k10d store_pointer_at_offset_0x38 @ 0x1039285e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_pointer_at_offset_0x38(int param_1,void *param_2)

{
  *(void **)(param_1 + 0x38) = param_2;
  return;
}
