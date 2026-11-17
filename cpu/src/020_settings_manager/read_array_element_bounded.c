/* @k10d read_array_element_bounded @ 0x1036c7c8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 020_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_array_element_bounded(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0x10) {
    uVar1 = *(uint32_t *)(param_1 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
