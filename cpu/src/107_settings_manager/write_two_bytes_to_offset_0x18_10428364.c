/* @k10d write_two_bytes_to_offset_0x18_10428364 @ 0x10428364
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_offset_0x18_10428364(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 0x18) = param_2;
  return;
}
