/* @k10d clear_struct_field_at_offset_4 @ 0x10475782
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_field_at_offset_4(int param_1)

{
  *(uint8_t *)(param_1 + 4) = 0;
  return;
}
