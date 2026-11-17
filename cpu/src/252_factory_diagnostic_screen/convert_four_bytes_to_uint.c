/* @k10d convert_four_bytes_to_uint @ 0x104e42ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint convert_four_bytes_to_uint(uint32_t param_1,byte *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 1) {
    uVar1 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 |
            (uint)param_2[3];
  }
  else {
    uVar1 = (uint)param_2[3] << 0x18 | (uint)param_2[2] << 0x10 | (uint)param_2[1] << 8 |
            (uint)*param_2;
  }
  return uVar1;
}
