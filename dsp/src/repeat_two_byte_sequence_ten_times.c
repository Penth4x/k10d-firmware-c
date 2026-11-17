/* @k10d repeat_two_byte_sequence_ten_times @ 0x000db81a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Loops ten times calling two helper functions with fixed arguments in a specific order.
 * summary:
 *   The function executes a do-while loop that iterates 10 times (bVar1 from 1 to 0xb). In
 *   each iteration it calls write_masked_field_and_call_two_routines with arguments 0x1b
 *   and 0x40, then busy_wait_on_mode_flag with argument 4, then
 *   write_masked_field_and_call_two_routines with arguments 0x1b and 0, and finally
 *   FUN_000d5642 with argument 2. The callees are not named, so the specific hardware or
 *   protocol operation is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void repeat_two_byte_sequence_ten_times(void)

{
  byte bVar1;
  
  bVar1 = 1;
  do {
    write_masked_field_and_call_two_routines(0x1b,0x40);
    busy_wait_on_mode_flag(4);
    write_masked_field_and_call_two_routines(0x1b,0);
    FUN_000d5642(2);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0xb);
  return;
}
