/* @k10d free_object_if_flag_set_1052107a @ 0x1052107a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_1052107a(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) && (heap_free_2(*(int *)((int)param_1 + 0xc)), (param_2 & 1) != 0))
  {
    heap_free((int)param_1);
  }
  return;
}
