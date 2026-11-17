/* @k10d memmove_downward @ 0x1045cd18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void memmove_downward(void *param_1,int param_2,uint32_t *param_3,int param_4)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)
           ((((uint)((int)param_3 - param_2 >> 1) >> 0x1e) + ((int)param_3 - param_2) & 0xfffffffc)
           + param_4);
  while (param_3 = param_3 + -1, param_3 != (uint32_t *)(param_2 + -4)) {
    puVar1 = puVar1 + -1;
    *puVar1 = *param_3;
  }
  return;
}
