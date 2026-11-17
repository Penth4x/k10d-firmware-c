/* @k10d advance_buffer_read_pointer_104ad326 @ 0x104ad326
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint advance_buffer_read_pointer_104ad326(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = param_1[1] - param_1[3];
    if (param_2 <= uVar1) {
      uVar1 = param_2;
    }
    param_1[3] = param_1[3] + uVar1;
  }
  return uVar1;
}
