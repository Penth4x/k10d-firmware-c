/* @k10d select_mode_flag_by_param @ 0x104e4072
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Returns 0x3801 if param_2 is zero, otherwise returns 0x3000.
 * summary:
 *   The function takes two parameters and returns one of two hardcoded 16-bit values based
 *   on whether the second parameter is zero. It has no callees and performs no memory
 *   writes or side effects. The caller at 0x104e3a44 is not named, so the specific
 *   subsystem context is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_mode_flag_by_param(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0x3000;
  if (param_2 == 0) {
    uVar1 = 0x3801;
  }
  return uVar1;
}
