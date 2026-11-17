/* @k10d write_byte_at_offset_1051ed5c @ 0x1051ed5c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_at_offset_1051ed5c(void *param_1,int param_2,uint8_t param_3)

{
  *(uint8_t *)((int)param_1 + param_2 + 5) = param_3;
  return;
}
