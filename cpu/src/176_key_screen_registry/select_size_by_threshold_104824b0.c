/* @k10d select_size_by_threshold_104824b0 @ 0x104824b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_size_by_threshold_104824b0(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0x7fa8) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = 0x10;
    if (0x3ffd3f < param_2) {
      uVar1 = 0x20;
    }
  }
  return uVar1;
}
