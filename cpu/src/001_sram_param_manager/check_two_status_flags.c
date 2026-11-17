/* @k10d check_two_status_flags @ 0x100f196a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_status_flags(uint param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = check_bit0_of_dat_800482f0();
  if (iVar1 == 1) {
    uVar2 = 0xffffffff;
  }
  else if ((((param_1 & 3) == 3) && ((param_1 & 0xc0) != 0xc0)) &&
          (iVar1 = test_bit_1_of_dat_800482d4(), iVar1 == 1)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
