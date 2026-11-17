/* @k10d FUN_000efee0 @ 0x000efee0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000efee0(uint param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if (((((DAT_0003c447 == param_1) && (iVar1 = check_and_clear_flag_bit_000e640a(), iVar1 == 0)) &&
       ((DAT_0003c021 & 2) == 0)) &&
      ((iVar1 = check_and_set_state_flag_000e6376(), iVar1 == 0 && ((DAT_0003c198 & 0x10) == 0)))) &&
     ((DAT_0003c02f & 1) == 0)) {
    if (((DAT_0003f3e1 & 0x80) == 0) &&
       (((DAT_00000005 & 4) != 0 || (iVar1 = check_two_flag_conditions_000e6c7e(), iVar1 != 0)))) {
      DAT_0003c022 = DAT_0003c022 & 0xbf;
      uVar2 = 1;
    }
  }
  else {
    DAT_0003c022 = DAT_0003c022 & 0xbf;
    uVar2 = 1;
  }
  return uVar2;
}
