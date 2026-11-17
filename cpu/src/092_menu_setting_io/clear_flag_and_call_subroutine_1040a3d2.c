/* @k10d clear_flag_and_call_subroutine_1040a3d2 @ 0x1040a3d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_subroutine_1040a3d2(int param_1)

{
  if (*(char *)(param_1 + 0x55) != '\0') {
    call_helper_on_field_0x48(*(uint32_t *)(param_1 + 0x28));
    *(uint8_t *)(param_1 + 0x55) = 0;
  }
  return;
}
