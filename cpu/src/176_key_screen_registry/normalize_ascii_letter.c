/* @k10d normalize_ascii_letter @ 0x10481e0a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Converts an ASCII character to lowercase if it is a letter, otherwise returns 0.
 * summary:
 *   The function checks if the input is an uppercase ASCII letter (0x41-0x5a) or a
 *   lowercase ASCII letter (0x61-0x7a). If it is an uppercase letter, it converts it to
 *   lowercase by subtracting 0x20. If it is a lowercase letter, it returns the value
 *   unchanged. Any other input value results in a return value of 0. There are no callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint normalize_ascii_letter(uint param_1)

{
  if (((int)param_1 < 0x41) || (0x5a < (int)param_1)) {
    if (((int)param_1 < 0x61) || (0x7a < (int)param_1)) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 - 0x20 & 0xff;
    }
  }
  return param_1;
}
