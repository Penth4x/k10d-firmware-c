/* @k10d write_two_bytes_at_offset_six @ 0x1051e8e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_at_offset_six(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 6) = param_2;
  return;
}
