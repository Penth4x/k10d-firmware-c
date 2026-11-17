/* @k10d format_int_as_three_digit_string @ 0x10475c08
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_int_as_three_digit_string(uint32_t param_1,char *param_2,int param_3)

{
  char cVar1;
  
  *param_2 = (char)(param_3 / 100) + '0';
  cVar1 = (char)(param_3 / 10);
  param_2[1] = cVar1 + (char)((param_3 / 10) / 10) * -10 + '0';
  param_2[2] = (char)param_3 + '0' + cVar1 * -10;
  return;
}
