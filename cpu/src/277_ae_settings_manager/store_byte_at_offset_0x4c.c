/* @k10d store_byte_at_offset_0x4c @ 0x1051e4ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_byte_at_offset_0x4c(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x4c) = param_2;
  return;
}
