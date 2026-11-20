/* @k10d FUN_000f29e8 @ 0x000f29e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f29e8(void)

{
  uint8_t uVar1;
  
  uVar1 = DAT_00000420;
  FUN_000f3046(0xc1);
  bRam00000000 = bRam00000000 | 8;
  DAT_0003c140 = wait_and_write_byte_000e0fec(0xff);
  DAT_0003c141 = wait_and_write_byte_000e0fec(0xff);
  configure_two_parameter_state(1,0);
  DAT_00000420 = uVar1;
  return;
}
