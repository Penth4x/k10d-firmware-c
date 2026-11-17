/* @k10d map_mode_index_to_code_104806c4 @ 0x104806c4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 173_screen_activation (unit names are model-proposed)
 * purpose:
 *   Returns a fixed code value based on an integer index parameter.
 * summary:
 *   The function takes an integer parameter and returns one of five hardcoded values: 0,
 *   0x102, 2, 10, or 0xffff. The first parameter is unused. Without context from callers or
 *   callees, the specific meaning of these codes is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_code_104806c4(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 1) {
    uVar1 = 0;
  }
  else if (param_2 == 0) {
    uVar1 = 0x102;
  }
  else if (param_2 == 2) {
    uVar1 = 2;
  }
  else if (param_2 == 3) {
    uVar1 = 10;
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}
