/* @k10d free_heap_if_flag_set_1045c56c @ 0x1045c56c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flag_set_1045c56c(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) && ((param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
