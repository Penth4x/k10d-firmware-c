/* @k10d toggle_flag_at_offset_0x2ac @ 0x1036a6e0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 014_io_settings_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_flag_at_offset_0x2ac(int param_1)

{
  if (*(int *)(param_1 + 0x2ac) == 0) {
    *(uint32_t *)(param_1 + 0x2ac) = 1;
  }
  else if (*(int *)(param_1 + 0x2ac) == 1) {
    *(uint32_t *)(param_1 + 0x2ac) = 0;
  }
  return;
}
