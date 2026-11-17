/* @k10d handle_key_event_000c53f2 @ 0x000c53f2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Processes a key code stored in DAT_0003c492 by updating state flags and dispatching to
 *   a handler.
 * summary:
 *   The function branches on the value of DAT_0003c492 (likely a key code or event ID). For
 *   specific values (0x0b, 0x0c, 0x0f, 0x0d, 0x16, 0x00, 0x01, 0x10, 0x02, 0x03), it
 *   modifies several state bytes (DAT_0003c493, DAT_0003c4de, DAT_0003c588, DAT_0003c181)
 *   and calls dispatch_on_state_value_000c3740. It then calls either
 *   update_clamped_value_and_flags or compute_clamped_offset_and_update_registers based on
 *   DAT_0003c440. The specific key mappings and the roles of the callees are not verified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_key_event_000c53f2(void)

{
  if (((DAT_0003c492 == '\v') || (DAT_0003c492 == '\f')) || (DAT_0003c492 == '\x0f')) {
    DAT_0003c493 = 0xff;
    DAT_0003c4de = DAT_0003c4de & 0xef;
    DAT_0003c588 = DAT_0003c588 & 0xdf;
    dispatch_on_state_value_000c3740();
    if (DAT_0003c440 == '\a') {
      update_clamped_value_and_flags();
    }
    else {
      compute_clamped_offset_and_update_registers();
    }
  }
  else if ((DAT_0003c492 == '\r') || (DAT_0003c492 == '\x16')) {
    DAT_0003c493 = 0xff;
    DAT_0003c4de = DAT_0003c4de & 0xef;
    DAT_0003c588 = DAT_0003c588 & 0xdf;
  }
  else if (DAT_0003c492 == '\0') {
    DAT_0003c493 = 8;
    DAT_0003c588 = DAT_0003c588 & 0x9f;
    DAT_0003c181 = DAT_0003c181 & 0x7f;
    DAT_0003c4de = DAT_0003c4de | 0x10;
    dispatch_on_state_value_000c3740();
    if (DAT_0003c440 == '\a') {
      update_clamped_value_and_flags();
    }
    else {
      compute_clamped_offset_and_update_registers();
    }
  }
  else if (((DAT_0003c492 == '\x01') || (DAT_0003c492 == '\x10')) ||
          ((DAT_0003c492 == '\x02' || (DAT_0003c492 == '\x03')))) {
    DAT_0003c492 = '\x01';
    DAT_0003c493 = 8;
    DAT_0003c588 = DAT_0003c588 & 0xdf | 0x40;
    DAT_0003c181 = DAT_0003c181 & 0x7f;
    DAT_0003c4de = DAT_0003c4de | 0x10;
    dispatch_on_state_value_000c3740();
    if (DAT_0003c440 == '\a') {
      update_clamped_value_and_flags();
    }
    else {
      compute_clamped_offset_and_update_registers();
    }
  }
  else {
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
