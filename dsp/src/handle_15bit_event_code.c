/* @k10d handle_15bit_event_code @ 0x000e3950
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Processes a 15-bit event code by initializing state and dispatching to a handler or
 *   fallback routine.
 * summary:
 *   Checks if a global flag is clear and either a high bit is set in a status word or the
 *   input exceeds 0x7fff. If so, it calls an initialization routine, sets several global
 *   variables, and calls a handler with the lower 15 bits of the input. Otherwise, if a
 *   specific bit in a state word is clear, it calls a different routine. The function acts
 *   as a dispatcher for event codes based on global state flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void handle_15bit_event_code(uint param_1)

{
  if ((DAT_0003c3b8 == '\0') && (((DAT_0003c4de & 0x80) != 0 || (0x7fff < (int)param_1)))) {
    update_value_if_flags_set();
    DAT_00000142 = 0;
    DAT_00000144 = 0;
    _DAT_00000146 = 0xcc24;
    DAT_0003c050 = DAT_0003f51a;
    DAT_0003c023 = DAT_0003c023 | 4;
    forward_byte_with_flag(param_1 & 0x7fff);
  }
  if ((DAT_0003c023 & 4) == 0) {
    clear_state_flags_and_notify();
  }
  return;
}
