/* @k10d set_byte_at_offset_11 @ 0x1051e4dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_at_offset_11(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0xb) = param_2;
  return;
}
