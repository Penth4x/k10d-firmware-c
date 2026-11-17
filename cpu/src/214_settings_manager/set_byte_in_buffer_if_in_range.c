/* @k10d set_byte_in_buffer_if_in_range @ 0x104b096a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_byte_in_buffer_if_in_range(int *param_1,uint8_t param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (param_3 < bVar1) {
    *(uint8_t *)(*param_1 + param_3) = param_2;
  }
  return param_3 < bVar1;
}
