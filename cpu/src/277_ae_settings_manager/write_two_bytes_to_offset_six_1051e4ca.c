/* @k10d write_two_bytes_to_offset_six_1051e4ca @ 0x1051e4ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_offset_six_1051e4ca(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 6) = param_2;
  return;
}
