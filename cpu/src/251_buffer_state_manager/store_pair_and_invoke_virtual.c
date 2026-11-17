/* @k10d store_pair_and_invoke_virtual @ 0x104e0642
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_pair_and_invoke_virtual(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  *(uint32_t *)(param_1 + 0x1024) = param_2;
  *(uint32_t *)(param_1 + 0x1028) = param_3;
  iVar1 = **(int **)(param_1 + 0x1020);
  (**(code **)(iVar1 + 0x14))((int)*(int **)(param_1 + 0x1020) + (int)*(short *)(iVar1 + 0x10));
  return 1;
}
