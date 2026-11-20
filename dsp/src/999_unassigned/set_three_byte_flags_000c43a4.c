/* @k10d set_three_byte_flags_000c43a4 @ 0x000c43a4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes 0xff to DAT_0003c493, 0xd to DAT_0003c492, and sets bit 3 of DAT_0003c4de.
 * summary:
 *   The function performs three simple memory writes to consecutive or nearby global
 *   variables. It clears DAT_0003c493 to 0xff, sets DAT_0003c492 to 0xd, and modifies
 *   DAT_0003c4de by clearing bit 1 and setting bit 3 (mask 0xef, OR 8). No other side
 *   effects or function calls are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_three_byte_flags_000c43a4(void)

{
  DAT_0003c493 = 0xff;
  DAT_0003c492 = 0xd;
  DAT_0003c4de = DAT_0003c4de & 0xef | 8;
  return;
}
