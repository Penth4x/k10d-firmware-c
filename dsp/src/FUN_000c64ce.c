/* @k10d FUN_000c64ce @ 0x000c64ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000c64ce(void)

{
  uint8_t uVar1;
  
  if (DAT_0003c3ac == '\0') {
    uVar1 = add_signed_offset_by_mode(DAT_0003c564,0);
    DAT_0003c480 = add_signed_offset_by_mode(DAT_0003c565,0);
  }
  else {
    uVar1 = add_byte_offset_by_mode(DAT_0003c564,0);
    DAT_0003c480 = add_byte_offset_by_mode(DAT_0003c565,0);
  }
  DAT_0003c47d = uVar1;
  DAT_0003c47e = uVar1;
  DAT_0003c564 = uVar1;
  DAT_0003c481 = DAT_0003c480;
  DAT_0003c565 = DAT_0003c480;
  return;
}
