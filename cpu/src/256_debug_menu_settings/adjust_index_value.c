/* @k10d adjust_index_value @ 0x104f06aa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Increments specific integer values by one based on a lookup table.
 * summary:
 *   The function takes an integer parameter and checks it against a set of specific values
 *   (7, 11, 15, 19, 23). If a match is found, it returns the value incremented by one.
 *   Otherwise, it returns the input value unchanged. No memory access or side effects are
 *   observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int adjust_index_value(uint32_t param_1,int param_2)

{
  if (param_2 == 7) {
    param_2 = 8;
  }
  else if (param_2 == 0xb) {
    param_2 = 0xc;
  }
  else if (param_2 == 0xf) {
    param_2 = 0x10;
  }
  else if (param_2 == 0x13) {
    param_2 = 0x14;
  }
  else if (param_2 == 0x17) {
    param_2 = 0x18;
  }
  return param_2;
}
