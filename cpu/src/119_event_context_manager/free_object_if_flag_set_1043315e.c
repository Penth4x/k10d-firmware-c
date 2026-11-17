/* @k10d free_object_if_flag_set_1043315e @ 0x1043315e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 119_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_1043315e(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x10) = 0x1059f274/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
