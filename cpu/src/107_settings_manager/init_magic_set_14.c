/* @k10d init_magic_set_14 @ 0x1042834c
 * name: verified (structural evidence: decomp)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes 0xA55A5AA5 (param_2 != 0) or 0xffffffff to param_1+0x14.
 * summary:
 *   VERIFIED: decomp
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_magic_set_14(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xa55a5aa5;
  }
  *(uint32_t *)(param_1 + 0x14) = uVar1;
  return;
}
