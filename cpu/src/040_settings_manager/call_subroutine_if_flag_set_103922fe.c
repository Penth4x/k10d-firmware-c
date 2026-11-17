/* @k10d call_subroutine_if_flag_set_103922fe @ 0x103922fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_if_flag_set_103922fe(void *param_1)

{
  if (*(char *)((int)param_1 + 0x88) != '\0') {
    toggle_flag_and_update_two_fields_10397cee((void *)((int)param_1 + 0xc));
  }
  return;
}
