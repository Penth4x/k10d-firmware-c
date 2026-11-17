/* @k10d clear_flag_and_call_helper_10392cde @ 0x10392cde
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_helper_10392cde(int param_1)

{
  if (*(char *)(param_1 + 0x80) != '\0') {
    call_two_unnamed_helpers_103946a4();
    *(uint8_t *)(param_1 + 0x80) = 0;
  }
  return;
}
