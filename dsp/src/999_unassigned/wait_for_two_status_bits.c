/* @k10d wait_for_two_status_bits @ 0x000dfc42
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Polls a status register until two specific bits are set, saving and restoring a related
 *   value.
 * summary:
 *   The function saves the value of DAT_0003c215 into DAT_00000061. It then enters a busy-
 *   wait loop checking if bit 3 (0x8) of DAT_00000060 is set. After that bit is set, it
 *   updates DAT_00000061 with the value of DAT_0003c217 and busy-waits for bit 4 (0x10) of
 *   DAT_00000060 to be set. No other functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_two_status_bits(void)

{
  DAT_0003c215 = DAT_00000061;
  do {
  } while ((DAT_00000060 & 8) == 0);
  DAT_00000061 = DAT_0003c217;
  do {
  } while ((DAT_00000060 & 0x10) == 0);
  return;
}
