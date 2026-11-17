/* @k10d free_object_if_flag_set_1049b220 @ 0x1049b220
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_1049b220(int param_1,uint param_2)

{
  if ((param_1 != 0) && (free_heap_if_flag_set_1045c56c((void *)(param_1 + 0xb4),2), (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
