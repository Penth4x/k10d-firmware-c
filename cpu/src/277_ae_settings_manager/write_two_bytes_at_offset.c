/* @k10d write_two_bytes_at_offset @ 0x1051e4b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_at_offset(int param_1,uint8_t param_2,uint8_t param_3)

{
  *(uint8_t *)(param_1 + 2) = param_2;
  *(uint8_t *)(param_1 + 3) = param_3;
  return;
}
