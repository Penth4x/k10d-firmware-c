/* @k10d write_three_bytes_to_low_memory @ 0x000ece20
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes the constants 0xd0 and 0x12 to addresses 0x50 and 0x56, and sets bit 0 of the
 *   byte at 0x57.
 * summary:
 *   The function performs three simple memory operations: stores 0xd0 at DAT_00000050,
 *   stores 0x12 at DAT_00000056, and ORs 1 into DAT_00000057. It has no callees and no
 *   arguments. The role of these specific low-memory locations is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_bytes_to_low_memory(void)

{
  DAT_00000050 = 0xd0;
  DAT_00000056 = 0x12;
  DAT_00000057 = DAT_00000057 | 1;
  return;
}
