/* @k10d free_object_if_flag_set_1042f318 @ 0x1042f318
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_1042f318(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 0x10) = &DAT_1059eef4/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
