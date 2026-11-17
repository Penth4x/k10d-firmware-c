/* @k10d clear_two_fields_at_offset_0x20 @ 0x104d7ea6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_fields_at_offset_0x20(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x20) = 0;
  *(uint8_t *)((int)param_1 + 0x24) = 0;
  return;
}
