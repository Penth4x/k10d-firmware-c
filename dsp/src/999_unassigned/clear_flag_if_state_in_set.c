/* @k10d clear_flag_if_state_in_set @ 0x000c54f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears two specific bits in two byte globals if a state byte holds one of four values.
 * summary:
 *   Checks if DAT_0003c492 equals 0x0e, 0x14, 0x07, or 0x13. If true, sets DAT_0003c493 to
 *   0xff, clears bit 1 (0x02) of DAT_0003c4de, and clears bit 1 (0x02) of DAT_0003c588. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_state_in_set(void)

{
  if ((((DAT_0003c492 == '\x0e') || (DAT_0003c492 == '\x14')) || (DAT_0003c492 == '\a')) ||
     (DAT_0003c492 == '\x13')) {
    DAT_0003c493 = 0xff;
    DAT_0003c4de = DAT_0003c4de & 0xef;
    DAT_0003c588 = DAT_0003c588 & 0xdf;
  }
  return;
}
