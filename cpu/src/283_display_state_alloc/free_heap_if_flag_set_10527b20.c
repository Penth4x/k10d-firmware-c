/* @k10d free_heap_if_flag_set_10527b20 @ 0x10527b20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 283_display_state_alloc (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flag_set_10527b20(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
