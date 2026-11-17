/* @k10d compute_scaled_lookup_value @ 0x1044bdb0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_scaled_lookup_value(void *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = read_byte_at_offset_3_1044bb46(param_1);
  bVar2 = read_byte_at_offset_3_1044bb46(param_1);
  return *(int *)(((int)(uint)bVar2 >> 3 & 0xfU) * 4 + 0x105a1b88/*ROM*/) *
         (*(uint *)((bVar1 & 7) * 4 + 0x105a1b78/*ROM*/) / 10);
}
