/* @k10d FUN_000e62be @ 0x000e62be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000e62be(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = check_and_clear_flag_bit_000e640a();
  if (((iVar1 != 0) || (iVar1 = return_zero_stub_000e68c6(), iVar1 != 0)) || (iVar1 = check_and_set_state_flag_000e6376(), iVar1 != 0)
     ) {
    iVar1 = check_and_set_state_flag_000e6376();
    if ((iVar1 != 0) || ((DAT_0003c066 & 0x40) != 0)) {
      DAT_0003c07e = DAT_0003c07e | 0x10;
    }
    uVar2 = 1;
  }
  return uVar2;
}
