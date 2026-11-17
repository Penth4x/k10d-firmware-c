/* @k10d write_byte_to_offset_0x22d @ 0x1052d648
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 288_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_offset_0x22d(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x22d) = param_2;
  return;
}
