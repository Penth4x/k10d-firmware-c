/* @k10d write_two_bytes_at_offset_eight_1051e8ec @ 0x1051e8ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_at_offset_eight_1051e8ec(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 8) = param_2;
  return;
}
