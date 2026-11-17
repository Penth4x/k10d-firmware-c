/* @k10d poll_status_bit_sequence @ 0x000e9d20
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls DAT_0003c218 bits 1 and 0 in a specific sequence, calling helper functions
 *   between checks.
 * summary:
 *   The function executes a fixed sequence of polling loops on the global variable
 *   DAT_0003c218. It first waits for bit 1 to clear, then bit 0 to clear, calls
 *   toggle_ram_flag_and_call_sequence and set_flag_and_call_helper_000e9e18, and finally
 *   waits for bit 1 to set before calling set_flag_and_call_helper_000e9e08. The helper
 *   set_global_to_eight_and_call_helper is called repeatedly during each wait loop, likely
 *   to perform a delay or status refresh. The specific hardware or protocol context is not
 *   identifiable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_status_bit_sequence(void)

{
  do {
    set_global_to_eight_and_call_helper();
  } while ((DAT_0003c218 & 2) != 0);
  do {
    set_global_to_eight_and_call_helper();
  } while ((DAT_0003c218 & 1) != 0);
  toggle_ram_flag_and_call_sequence();
  set_flag_and_call_helper_000e9e18();
  do {
    set_global_to_eight_and_call_helper();
  } while ((DAT_0003c218 & 2) == 0);
  set_flag_and_call_helper_000e9e08();
  return;
}
