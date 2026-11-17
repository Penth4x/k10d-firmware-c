/* @k10d append_to_buffer @ 0x104ad5c8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t append_to_buffer(int *param_1,uint8_t *param_2,uint32_t param_3)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = copy_bytes_aligned(param_2,(uint8_t *)(*param_1 + param_1[2]),param_3,param_1[3] - param_1[2]);
    param_1[2] = param_1[2] + iVar1;
  }
  return param_3;
}
