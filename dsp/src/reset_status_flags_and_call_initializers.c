/* @k10d reset_status_flags_and_call_initializers @ 0x000c8a7c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears a block of status bytes at 0x3c370, calls ten unknown initializers, and updates
 *   bitfields in 0x3c37d based on other globals.
 * summary:
 *   The function zeroes 14 bytes starting at DAT_0003c370, preserving bits 3 and 4 of
 *   DAT_0003c37d. It then calls a sequence of ten functions (compute_state_from_mode_index
 *   through update_two_flag_bits) with no arguments. It sets a bit in _DAT_0003c374 based
 *   on DAT_0003c467, and modifies bits in DAT_0003c37d based on DAT_0003c07e, DAT_0003c4d7,
 *   DAT_0003c3a2, and DAT_0003c4a3. The specific roles of the callees and the meaning of
 *   the status bits are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_status_flags_and_call_initializers(void)

{
  DAT_0003c370 = 0;
  DAT_0003c371 = 0;
  DAT_0003c372 = 0;
  DAT_0003c373 = 0;
  _DAT_0003c374 = 0;
  DAT_0003c376 = 0;
  DAT_0003c377 = 0;
  DAT_0003c378 = 0;
  DAT_0003c379 = 0;
  DAT_0003c37a = 0;
  DAT_0003c37b = 0;
  DAT_0003c37c = 0;
  DAT_0003c37d = DAT_0003c37d & 0x18;
  DAT_0003c37e = 0;
  compute_state_from_mode_index();
  set_status_flags_from_conditions();
  pack_status_byte_fields();
  accumulate_status_flags();
  map_mode_index_to_flags();
  update_status_flags_000c9204();
  compute_shifted_value();
  compute_status_flag_bits();
  if (DAT_0003c467 == '\0') {
    _DAT_0003c374 = 0;
  }
  else {
    _DAT_0003c374 = (uint16_t)(1 << (DAT_0003c467 - 1U & 0xf));
  }
  pack_two_byte_fields();
  if ((DAT_0003c07e & 4) == 0) {
    DAT_0003c37d = DAT_0003c37d & 0x7f;
  }
  else {
    DAT_0003c37d = DAT_0003c37d | 0x80;
  }
  update_two_flag_bits();
  if (((DAT_0003c4d7 & 0x10) != 0) || ((DAT_0003c4d7 & 0x20) != 0)) {
    DAT_0003c37d = DAT_0003c37d & 0xe7 | (DAT_0003c3a2 & 3) << 3;
  }
  DAT_0003c37d = DAT_0003c37d & 0x9f | (DAT_0003c4a3 & 3) << 5;
  return;
}
