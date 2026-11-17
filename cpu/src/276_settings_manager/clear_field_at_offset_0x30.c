/* @k10d clear_field_at_offset_0x30 @ 0x1051ce66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_field_at_offset_0x30(int param_1)

{
  *(uint32_t *)(param_1 + 0x30) = 0;
  return;
}
