/* @k10d read_bounded_array_element_10477358 @ 0x10477358
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_bounded_array_element_10477358(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if ((param_2 == 0) || (9999 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint32_t *)(*(int *)(param_1 + 8) + param_2 * 4);
  }
  return uVar1;
}
