/* @k10d free_heap_if_flagged_1052e424 @ 0x1052e424
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flagged_1052e424(void *param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
