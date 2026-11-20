/* @k10d clear_state_flags_and_set_bit @ 0x000f5d3e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Zeroes a 16-byte state block, preserves bit 3 of a flag byte, and sets bit 7 of another
 *   flag byte.
 * summary:
 *   The function writes zero to DAT_0003c4b0 through DAT_0003c4be, clearing a 16-byte
 *   region. It then masks DAT_0003c4bf to keep only bit 3 (value 8) and sets bit 7 (0x80)
 *   in DAT_0003c4da. No callees are invoked, and the specific meaning of these globals is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_state_flags_and_set_bit(void)

{
  DAT_0003c4b0 = 0;
  DAT_0003c4b1 = 0;
  DAT_0003c4b2 = 0;
  DAT_0003c4b3 = 0;
  DAT_0003c4b4 = 0;
  DAT_0003c4b5 = 0;
  DAT_0003c4b6 = 0;
  DAT_0003c4b7 = 0;
  DAT_0003c4b8 = 0;
  DAT_0003c4b9 = 0;
  DAT_0003c4ba = 0;
  DAT_0003c4bb = 0;
  DAT_0003c4bc = 0;
  DAT_0003c4bd = 0;
  DAT_0003c4be = 0;
  DAT_0003c4bf = DAT_0003c4bf & 8;
  DAT_0003c4da = DAT_0003c4da | 0x80;
  return;
}
