/* @k10d wait_for_flag_with_timeout_000e22da @ 0x000e22da
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls an unknown status function until it returns non-zero or a counter expires,
 *   setting a one-shot flag.
 * summary:
 *   Checks bit 2 of DAT_0000000b; if clear, clears bit 3 of DAT_00000008 and sets bit 2 of
 *   DAT_0000000b. It then calls test_bit2_of_dat_00000008 in a loop up to 0x15a0 times
 *   until it returns non-zero. If the loop times out (counter reaches 0), it calls
 *   clear_bit2_and_bit7_flags. Returns the value of bit 2 of DAT_0000000b.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint wait_for_flag_with_timeout_000e22da(void)

{
  int iVar1;
  short sVar2;
  
  if ((DAT_0000000b & 4) == 0) {
    DAT_00000008 = DAT_00000008 & 0xfd;
    DAT_0000000b = DAT_0000000b | 4;
    sVar2 = -0x15a0;
    iVar1 = test_bit2_of_dat_00000008();
    if (iVar1 == 0) {
      do {
        sVar2 = sVar2 + -1;
        iVar1 = test_bit2_of_dat_00000008();
        if (iVar1 != 0) break;
      } while (sVar2 != 0);
    }
    if (sVar2 == 0) {
      clear_bit2_and_bit7_flags();
    }
  }
  return (DAT_0000000b & 7) >> 2;
}
