/* @k10d read_byte_from_buffer @ 0x1047e526
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_from_buffer(int *param_1,int param_2)

{
  uint8_t uVar1;
  
  if ((param_2 < 0) || (param_1[1] <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint8_t *)(*param_1 + param_2);
  }
  return uVar1;
}
