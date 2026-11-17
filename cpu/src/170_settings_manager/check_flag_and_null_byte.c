/* @k10d check_flag_and_null_byte @ 0x1047e61c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_null_byte(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = check_six_char_pattern((char *)__frv_reg_unset(4));
  if ((iVar1 != 0) && (*(char *)(param_1 + 4) == '\0')) {
    uVar2 = 1;
  }
  return uVar2;
}
