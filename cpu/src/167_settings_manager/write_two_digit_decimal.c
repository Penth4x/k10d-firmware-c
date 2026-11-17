/* @k10d write_two_digit_decimal @ 0x1047a218
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 0-99 integer as two ASCII digits into a char buffer.
 * summary:
 *   Takes an integer param_3, computes the tens digit via integer division by 10, and
 *   stores the tens and ones digits as ASCII characters ('0' offset) into param_2[0] and
 *   param_2[1]. No callees are invoked. The caller format_ordered_numeric_fields likely
 *   uses this to format a small numeric value for display or logging.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_digit_decimal(uint32_t param_1,char *param_2,int param_3)

{
  char cVar1;
  
  cVar1 = (char)(param_3 / 10);
  *param_2 = cVar1 + '0';
  param_2[1] = (char)param_3 + cVar1 * -10 + '0';
  return;
}
