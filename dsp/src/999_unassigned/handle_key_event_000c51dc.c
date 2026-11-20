/* @k10d handle_key_event_000c51dc @ 0x000c51dc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Processes a key event code by clearing status flags and dispatching to a handler based
 *   on a mode variable.
 * summary:
 *   The function checks the value of DAT_0003c493 against several key codes (tab,
 *   backspace, newline, null, 0x15). For each match, it sets DAT_0003c492 to 1 or 4, clears
 *   specific bits in DAT_0003c4de, DAT_0003c588, and DAT_0003c181, and calls
 *   dispatch_on_state_value_000c3740. It then branches to update_clamped_value_and_flags or
 *   compute_clamped_offset_and_update_registers depending on whether DAT_0003c440 is 7. The
 *   structure suggests a state machine or event dispatcher for user input.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_key_event_000c51dc(void)

{
  if (DAT_0003c493 == '\t') {
    DAT_0003c492 = 4;
    DAT_0003c4de = DAT_0003c4de & 0xf7;
    DAT_0003c588 = DAT_0003c588 & 0x9f;
    DAT_0003c181 = DAT_0003c181 & 0x3f;
    dispatch_on_state_value_000c3740();
    if (DAT_0003c440 == '\a') {
      update_clamped_value_and_flags();
    }
    else {
      compute_clamped_offset_and_update_registers();
    }
  }
  else if (DAT_0003c493 == '\b') {
    DAT_0003c492 = 4;
    DAT_0003c4de = DAT_0003c4de & 0xf7;
    DAT_0003c588 = DAT_0003c588 & 0x9f;
    DAT_0003c181 = DAT_0003c181 & 0x3f;
    dispatch_on_state_value_000c3740();
    if (DAT_0003c440 == '\a') {
      update_clamped_value_and_flags();
    }
    else {
      compute_clamped_offset_and_update_registers();
    }
  }
  else if (DAT_0003c493 == '\n') {
    DAT_0003c492 = 4;
    DAT_0003c493 = '\b';
    DAT_0003c4de = DAT_0003c4de & 0xf7;
    DAT_0003c588 = DAT_0003c588 & 0x9f;
    DAT_0003c181 = DAT_0003c181 & 0x3f;
    dispatch_on_state_value_000c3740();
    if (DAT_0003c440 == '\a') {
      update_clamped_value_and_flags();
    }
    else {
      compute_clamped_offset_and_update_registers();
    }
  }
  else if (DAT_0003c493 == '\0') {
    DAT_0003c492 = 1;
    DAT_0003c4de = DAT_0003c4de & 0xf7;
    DAT_0003c588 = DAT_0003c588 & 0x9f;
    DAT_0003c181 = DAT_0003c181 & 0x3f;
    dispatch_on_state_value_000c3740();
    if (DAT_0003c440 == '\a') {
      update_clamped_value_and_flags();
    }
    else {
      compute_clamped_offset_and_update_registers();
    }
  }
  else if (DAT_0003c493 == '\x15') {
    DAT_0003c492 = 4;
    DAT_0003c4de = DAT_0003c4de & 0xf7;
    DAT_0003c588 = DAT_0003c588 & 0x9f;
    DAT_0003c181 = DAT_0003c181 & 0x3f;
    dispatch_on_state_value_000c3740();
    if (DAT_0003c440 == '\a') {
      update_clamped_value_and_flags();
    }
    else {
      compute_clamped_offset_and_update_registers();
    }
  }
  return;
}
