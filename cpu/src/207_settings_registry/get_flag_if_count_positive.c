/* @k10d get_flag_if_count_positive @ 0x104aa024
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 207_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t get_flag_if_count_positive(int param_1)

{
  uint8_t uVar1;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint8_t *)(param_1 + 0x18);
  }
  return uVar1;
}
