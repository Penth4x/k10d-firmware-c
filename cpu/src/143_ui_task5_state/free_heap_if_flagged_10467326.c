/* @k10d free_heap_if_flagged_10467326 @ 0x10467326
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flagged_10467326(void *param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
