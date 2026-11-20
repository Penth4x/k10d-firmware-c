/* @k10d call_e31d6_with_masked_dat @ 0x000daf10
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls write_masked_field_and_call_two_routines with argument 0xb and a value derived
 *   from DAT_0003c00c.
 * summary:
 *   The function computes a value by masking DAT_0003c00c with 0xfc and ORing with 3, then
 *   passes it as the second argument to write_masked_field_and_call_two_routines along with
 *   the constant 0xb. No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_e31d6_with_masked_dat(void)

{
  write_masked_field_and_call_two_routines(0xb,DAT_0003c00c & 0xfc | 3);
  return;
}
