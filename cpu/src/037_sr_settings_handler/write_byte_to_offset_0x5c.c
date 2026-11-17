/* @k10d write_byte_to_offset_0x5c @ 0x103909a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 037_sr_settings_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_offset_0x5c(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x5c) = param_2;
  return;
}
