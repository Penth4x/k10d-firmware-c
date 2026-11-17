/* @k10d call_subroutine_if_flag_set_103967da @ 0x103967da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_if_flag_set_103967da(void *param_1)

{
  if (*(char *)((int)param_1 + 0x80) != '\0') {
    toggle_flag_and_update_two_fields_1039be40((void *)((int)param_1 + 0xc));
  }
  return;
}
