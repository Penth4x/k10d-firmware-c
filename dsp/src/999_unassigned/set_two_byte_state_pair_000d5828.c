/* @k10d set_two_byte_state_pair_000d5828 @ 0x000d5828
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes a conditional byte to DAT_00000050 and a constant 0x13 to DAT_00000056.
 * summary:
 *   Checks if the lower two bits of DAT_00000484 equal 2. If true, sets DAT_00000050 to
 *   0xdb (0x24 - 1); otherwise sets it to 0x76 ('w' - 1). Always sets DAT_00000056 to 0x13.
 *   No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_byte_state_pair_000d5828(void)

{
  char cVar1;
  
  if ((DAT_00000484 & 3) == 2) {
    cVar1 = -0x24;
  }
  else {
    cVar1 = 'w';
  }
  DAT_00000050 = cVar1 + -1;
  DAT_00000056 = 0x13;
  return;
}
