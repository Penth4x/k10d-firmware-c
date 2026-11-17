/* @k10d advance_state_machine_on_code @ 0x000c510e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Transitions a two-byte state machine by clearing or setting bits in a flags byte based
 *   on current state values.
 * summary:
 *   Checks DAT_0003c492 and DAT_0003c493 against specific byte values (0x06, 0x0d, 0x16,
 *   0x0a). Depending on the match, it calls clear_state_on_control_char or
 *   clear_four_status_flags_000c51bc, updates the state bytes to new values, and modifies
 *   bits 3 and 4 of DAT_0003c4de. The function acts as a step in a sequential state
 *   machine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void advance_state_machine_on_code(void)

{
  if (DAT_0003c492 == '\x06') {
    clear_state_on_control_char();
    DAT_0003c4de = DAT_0003c4de & 0xf7;
  }
  else if (DAT_0003c492 == '\r') {
    DAT_0003c492 = '\f';
    DAT_0003c4de = DAT_0003c4de | 8;
    clear_four_status_flags_000c51bc();
  }
  else if (DAT_0003c492 == '\x16') {
    DAT_0003c492 = '\x0f';
    DAT_0003c4de = DAT_0003c4de | 8;
    clear_four_status_flags_000c51bc();
  }
  else if (DAT_0003c493 == '\n') {
    DAT_0003c493 = '\b';
    DAT_0003c4de = DAT_0003c4de | 0x10;
  }
  return;
}
