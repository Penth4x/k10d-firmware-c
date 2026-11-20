/* @k10d clear_low_nibble_and_write @ 0x000ed864
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears the low nibble of DAT_0003c00d and writes the result with bit 3 set via
 *   write_masked_field_and_call_two_routines.
 * summary:
 *   The function masks DAT_0003c00d with 0xf0 to zero the lower four bits, then ORs in 0x8.
 *   It passes 0xc and the modified value to write_masked_field_and_call_two_routines. The
 *   role of DAT_0003c00d and write_masked_field_and_call_two_routines is not established by
 *   the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_low_nibble_and_write(void)

{
  DAT_0003c00d = DAT_0003c00d & 0xf0;
  write_masked_field_and_call_two_routines(0xc,DAT_0003c00d | 8);
  return;
}
