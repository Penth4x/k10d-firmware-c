/* @k10d clear_flag_and_call_helper_103923d6 @ 0x103923d6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_helper_103923d6(int param_1)

{
  if (*(char *)(param_1 + 0x89) != '\0') {
    call_two_unnamed_helpers_103946a4();
    *(uint8_t *)(param_1 + 0x89) = 0;
  }
  return;
}
