/* @k10d read_setting_at_offset_0xcc @ 0x104f1964
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_setting_at_offset_0xcc(int param_1)

{
  setting_get(*(int *)(param_1 + 0xc),0xcc);
  return;
}
