/* @k10d clear_flag_if_set_103919d0 @ 0x103919d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_set_103919d0(uint param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    set_object_reference_and_check_flags(param_1,(int *)0x0);
  }
  return;
}
