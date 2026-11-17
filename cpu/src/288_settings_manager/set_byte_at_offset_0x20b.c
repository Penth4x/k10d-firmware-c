/* @k10d set_byte_at_offset_0x20b @ 0x1052d688
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 288_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_at_offset_0x20b(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x20b) = param_2;
  return;
}
