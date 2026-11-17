/* @k10d copy_bytes_if_flag_set @ 0x104e12e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_bytes_if_flag_set(int param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  uint32_t uVar2;
  
  if (((param_3 == 1) || (param_3 == 2)) || (param_3 == 4)) {
    if (*(char *)(param_1 + 4) == '\x01') {
      copy_bytes_forward(param_2,(void *)(*(int *)(param_1 + 8) + param_4), __frv_reg_unset(6));
      uVar2 = 1;
    }
    else {
      iVar1 = *(int *)(param_1 + 8);
      while (param_3 != 0) {
        param_3 = param_3 + -1;
        *(uint8_t *)(param_3 + iVar1 + param_4) = *(uint8_t *)(param_3 + (int)param_2);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
