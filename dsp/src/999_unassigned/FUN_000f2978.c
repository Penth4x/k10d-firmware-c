/* @k10d FUN_000f2978 @ 0x000f2978
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f2978(void)

{
  uint8_t uVar1;
  
  uVar1 = DAT_00000420;
  FUN_000f3046(0xc0);
  bRam00000000 = bRam00000000 & 0xf7;
  wait_and_write_byte_000e0fec(6);
  configure_two_parameter_state(1,0);
  DAT_00000420 = uVar1;
  return;
}
