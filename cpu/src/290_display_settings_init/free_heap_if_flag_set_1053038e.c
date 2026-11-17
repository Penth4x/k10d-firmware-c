/* @k10d free_heap_if_flag_set_1053038e @ 0x1053038e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 290_display_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flag_set_1053038e(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
