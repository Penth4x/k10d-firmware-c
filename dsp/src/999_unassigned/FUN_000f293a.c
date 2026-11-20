/* @k10d FUN_000f293a @ 0x000f293a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000f293a(void)

{
  uint8_t uVar1;
  uint32_t uVar2;
  
  uVar1 = DAT_00000420;
  FUN_000f3046(0xc0);
  bRam00000000 = bRam00000000 & 0xf7;
  wait_and_write_byte_000e0fec(5);
  bRam00000000 = bRam00000000 | 8;
  uVar2 = wait_and_write_byte_000e0fec(0xff);
  configure_two_parameter_state(1,0);
  DAT_00000420 = uVar1;
  return uVar2;
}
