/* @k10d write_byte_at_offset_five @ 0x1051e8e0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_at_offset_five(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 5) = param_2;
  return;
}
