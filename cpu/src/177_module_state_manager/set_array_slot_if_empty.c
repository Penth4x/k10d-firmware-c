/* @k10d set_array_slot_if_empty @ 0x10483f9c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_array_slot_if_empty(void *param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((param_2 < 0x1e) && (param_3 != 0)) {
    if (*(int *)((int)param_1 + param_2 * 4 + 0x10) == 0) {
      *(int *)((int)param_1 + param_2 * 4 + 0x10) = param_3;
      uVar1 = 1;
    }
  }
  return uVar1;
}
