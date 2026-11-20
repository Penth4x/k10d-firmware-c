/* @k10d free_object_if_flag_set_1047a4c0 @ 0x1047a4c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_1047a4c0(void *param_1,uint param_2)

{
  if ((param_1 != 0) &&
     (free_heap_if_flag_set_1045c56c((void *)((int)param_1 + 0x5e),2), (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
