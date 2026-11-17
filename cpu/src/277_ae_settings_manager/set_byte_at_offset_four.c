/* @k10d set_byte_at_offset_four @ 0x1051e8da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_at_offset_four(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 4) = param_2;
  return;
}
