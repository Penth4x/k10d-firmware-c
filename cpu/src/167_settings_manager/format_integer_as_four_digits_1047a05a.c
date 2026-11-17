/* @k10d format_integer_as_four_digits_1047a05a @ 0x1047a05a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit integer into a 4-byte buffer as ASCII decimal digits without a null
 *   terminator.
 * summary:
 *   The function decomposes param_3 into thousands, hundreds, tens, and ones places using
 *   integer division and modulo arithmetic. Each digit is converted to its ASCII character
 *   by adding '0' and stored sequentially into the buffer pointed to by param_2. No null
 *   terminator is written, and no other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_integer_as_four_digits_1047a05a(uint32_t param_1,char *param_2,int param_3)

{
  *param_2 = (char)(param_3 / 1000) + '0';
  param_2[1] = (char)((param_3 % 1000) / 100) + '0';
  param_2[2] = (char)((param_3 % 100) / 10) + '0';
  param_2[3] = (char)param_3 + (char)(param_3 / 10) * -10 + '0';
  return;
}
