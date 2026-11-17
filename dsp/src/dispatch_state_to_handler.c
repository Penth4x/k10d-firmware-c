/* @k10d dispatch_state_to_handler @ 0x000d753e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Reads a state byte and calls a handler with 0, 1, or 2 based on its value.
 * summary:
 *   Checks the global DAT_0003c3ed. If it is 1, calls
 *   write_two_bit_field_to_dat_0003c008(1); if 2, calls
 *   write_two_bit_field_to_dat_0003c008(2); otherwise calls
 *   write_two_bit_field_to_dat_0003c008(0). The specific meaning of the state values and
 *   the handler's role are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_to_handler(void)

{
  if (DAT_0003c3ed == '\x01') {
    write_two_bit_field_to_dat_0003c008(1);
  }
  else if (DAT_0003c3ed == '\x02') {
    write_two_bit_field_to_dat_0003c008(2);
  }
  else {
    write_two_bit_field_to_dat_0003c008(0);
  }
  return;
}
