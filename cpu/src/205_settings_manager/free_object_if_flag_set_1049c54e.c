/* @k10d free_object_if_flag_set_1049c54e @ 0x1049c54e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_1049c54e(int param_1,uint param_2)

{
  if ((param_1 != 0) && (heap_free_2(*(int *)(param_1 + 0x14)), (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
