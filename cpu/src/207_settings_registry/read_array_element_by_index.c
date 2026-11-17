/* @k10d read_array_element_by_index @ 0x104a9c94
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 207_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_array_element_by_index(int param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < *(uint *)(param_1 + 4)) {
    uVar1 = *(uint32_t *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
