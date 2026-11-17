/* @k10d wait_and_write_byte_000e0fec @ 0x000e0fec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Waits for a status bit to clear, writes a byte to a data register, then waits for
 *   another status bit to clear.
 * summary:
 *   The function first sets DAT_0003c215 to the value of DAT_00000061. It then polls
 *   DAT_00000060 until bit 3 (0x8) is clear. Next, it writes param_1 to DAT_00000061 and
 *   polls DAT_00000060 until bit 4 (0x10) is clear. Finally, it returns param_1. The
 *   pattern suggests a simple register write with busy-wait synchronization, but the
 *   specific hardware or protocol is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t wait_and_write_byte_000e0fec(uint8_t param_1)

{
  DAT_0003c215 = DAT_00000061;
  do {
  } while ((DAT_00000060 & 8) == 0);
  DAT_00000061 = param_1;
  do {
  } while ((DAT_00000060 & 0x10) == 0);
  return param_1;
}
