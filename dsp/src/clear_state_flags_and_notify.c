/* @k10d clear_state_flags_and_notify @ 0x000e39f2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears three global state variables and conditionally calls a notification function
 *   based on a flag bit.
 * summary:
 *   The function sets DAT_0003c050 and DAT_00000146 to 0, and clears bit 1 (0x02) of
 *   DAT_0003c023. It then checks if bit 4 (0x10) of DAT_0003c038 is clear; if so, it calls
 *   write_byte_to_ram_and_call_two_routines with arguments 9 and the value of bit 1 of
 *   DAT_0003c00a. The specific roles of these global variables and the callee are not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_state_flags_and_notify(void)

{
  DAT_0003c050 = 0;
  DAT_0003c023 = DAT_0003c023 & 0xfb;
  DAT_00000146 = 0;
  if ((DAT_0003c038 & 0x10) == 0) {
    write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a & 2);
  }
  return;
}
