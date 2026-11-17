/* @k10d copy_bytes_forward @ 0x104e171c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_forward(uint8_t *param_1,uint8_t *param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 < 2) {
    if (param_3 == 1) {
      *param_2 = *param_1;
    }
  }
  else {
    iVar1 = 0;
    do {
      param_3 = param_3 - 1;
      param_2[param_3] = param_1[iVar1];
      iVar1 = iVar1 + 1;
    } while (param_3 != 0);
  }
  return;
}
