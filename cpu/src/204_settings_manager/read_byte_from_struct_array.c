/* @k10d read_byte_from_struct_array @ 0x1049a7a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_from_struct_array(int param_1,int param_2)

{
  uint8_t uVar1;
  
  if ((param_2 < 0) || (3 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint8_t *)(param_1 + param_2 * 0x38 + 0x48);
  }
  return uVar1;
}
