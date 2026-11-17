/* @k10d branch_on_flag_and_call_two_routines @ 0x000d74f4
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Checks a global flag and calls two helper functions with different argument pairs
 *   depending on its value.
 * summary:
 *   Reads DAT_0003c3ec; if zero it calls write_masked_field_and_call_two_routines three
 *   times with (0x1d,0x280), (0x1d,0), and (0xd,0). Otherwise it calls
 *   write_byte_to_ram_and_call_two_routines(0xd,0x289) then
 *   write_masked_field_and_call_two_routines(0x1d,0x2c0). No other side effects are visible
 *   in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void branch_on_flag_and_call_two_routines(void)

{
  if (DAT_0003c3ec == '\0') {
    write_masked_field_and_call_two_routines(0x1d,0x280);
    write_masked_field_and_call_two_routines(0x1d,0);
    write_masked_field_and_call_two_routines(0xd,0);
  }
  else {
    write_byte_to_ram_and_call_two_routines(0xd,0x289);
    write_masked_field_and_call_two_routines(0x1d,0x2c0);
  }
  return;
}
