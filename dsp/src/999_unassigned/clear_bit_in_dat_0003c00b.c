/* @k10d clear_bit_in_dat_0003c00b @ 0x000ed8d2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clears bit 4 of DAT_0003c00b and passes the result to
 *   write_masked_field_and_call_two_routines with argument 0x1a.
 * summary:
 *   The function reads the global DAT_0003c00b, masks it with 0xef to clear bit 4, and
 *   calls write_masked_field_and_call_two_routines with the constant 0x1a and the masked
 *   value. No other side effects are visible in the pseudocode. The role of DAT_0003c00b
 *   and write_masked_field_and_call_two_routines is not established by the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_in_dat_0003c00b(void)

{
  write_masked_field_and_call_two_routines(0x1a,DAT_0003c00b & 0xef);
  return;
}
