/* @k10d wait_for_flag_clear @ 0x000e2318
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls an unknown status function until it returns non-zero or a timeout occurs, setting
 *   a one-time initialization flag.
 * summary:
 *   The function checks bit 1 of DAT_00000008 to ensure it runs only once. It clears bit 2
 *   of DAT_0000000b and sets bit 1 of DAT_00000008. It then calls test_bit2_of_dat_00000008
 *   in a loop up to 0x15a0 times, breaking if the return value is non-zero. If the loop
 *   completes without a non-zero return, it calls clear_flag_bit1_in_global. The function
 *   returns the value of bit 1 of DAT_00000008.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint wait_for_flag_clear(void)

{
  int iVar1;
  short sVar2;
  
  if ((DAT_00000008 & 2) == 0) {
    DAT_0000000b = DAT_0000000b & 0xfb;
    DAT_00000008 = DAT_00000008 | 2;
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
      clear_flag_bit1_in_global();
    }
  }
  return (DAT_00000008 & 3) >> 1;
}
