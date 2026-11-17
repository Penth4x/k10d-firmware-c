/* @k10d check_two_digit_ascii_value @ 0x10475e54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_digit_ascii_value(uint32_t param_1,byte *param_2,uint param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((((&DAT_106220f1)[*param_2] & 0x20) != 0) && (((&DAT_106220f1)[param_2[1]] & 0x20) != 0)) &&
     (uVar1 = 1, ((*param_2 - 0x30) * 10 + (param_2[1] - 0x30) & 0xffff) != param_3)) {
    uVar1 = 0;
  }
  return uVar1;
}
