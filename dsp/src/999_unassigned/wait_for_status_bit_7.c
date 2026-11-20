/* @k10d wait_for_status_bit_7 @ 0x000e4cb0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls DAT_0000048c for bit 7 to be set, repeating up to 4 times with a write to
 *   DAT_00000481.
 * summary:
 *   The function initializes a counter to 4 and calls dispatch_on_flag_bits_000e7846. It
 *   conditionally toggles bit 0 of DAT_0000000d based on bits in DAT_0003c021 and
 *   DAT_0003f50e. It then enters a loop that calls dispatch_on_flag_bits_000e7846, writes
 *   0x91 to DAT_00000481, and waits for bit 7 of DAT_0000048c to be set before clearing it.
 *   Finally, it resets several global variables (DAT_00000041, DAT_00000001, DAT_00000501)
 *   and sets DAT_00000401 to 0x8f.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_for_status_bit_7(void)

{
  short sVar1;
  
  sVar1 = 4;
  dispatch_on_flag_bits_000e7846();
  if ((DAT_0003c021 & 0x80) != 0) {
    if ((DAT_0003f50e & 2) == 0) {
      DAT_0000000d = DAT_0000000d | 1;
    }
    else {
      DAT_0000000d = DAT_0000000d & 0xfe;
    }
  }
  bRam00000000 = bRam00000000 & 0xfe;
  DAT_0000048c = DAT_0000048c | 0x40;
  do {
    dispatch_on_flag_bits_000e7846();
    sVar1 = sVar1 + -1;
    DAT_00000481 = 0x91;
    do {
    } while ((DAT_0000048c & 0x80) == 0);
    DAT_0000048c = DAT_0000048c & 0x3f;
  } while (sVar1 != 0);
  DAT_00000041 = 0;
  DAT_00000001 = 0;
  DAT_00000401 = 0x8f;
  DAT_00000501 = 0;
  return 0;
}
