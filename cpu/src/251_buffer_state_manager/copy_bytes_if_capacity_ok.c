/* @k10d copy_bytes_if_capacity_ok @ 0x104e1394
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_bytes_if_capacity_ok(uint *param_1,void *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint32_t uVar2;
  
  if (*param_1 < (uint)(param_4 + param_3)) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1[2];
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      *(uint8_t *)(param_3 + (int)param_2) = *(uint8_t *)(param_3 + uVar1 + param_4);
    }
    uVar2 = 1;
  }
  return uVar2;
}
