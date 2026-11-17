/* @k10d reset_status_flags @ 0x000c8b92
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears a block of status bytes and recomputes specific flag bits from other global
 *   variables.
 * summary:
 *   The function zeroes out a sequence of bytes starting at DAT_0003c370, preserving only
 *   bits 3 and 4 of DAT_0003c37d. It calls a series of unknown helper functions
 *   (compute_state_from_mode_index through update_two_flag_bits). It then updates
 *   DAT_0003c373 and DAT_0003c37d based on the values of DAT_0003c037, DAT_0003c464,
 *   DAT_0003c467, DAT_0003c07e, DAT_0003c4d7, and DAT_0003c4a3. The specific meaning of
 *   these flags and the helper functions is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_status_flags(void)

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
  if ((DAT_0003c037 & 0x3f) >> 4 == 1) {
    DAT_0003c373 = 0;
  }
  else if ((DAT_0003c037 & 0x10) == 0) {
    DAT_0003c373 = 1;
  }
  else {
    DAT_0003c373 = 2;
  }
  if (DAT_0003c464 != '\0') {
    if (DAT_0003c464 == '\x01') {
      DAT_0003c373 = DAT_0003c373 | 0x20;
    }
    else {
      DAT_0003c373 = DAT_0003c373 | 0x10;
    }
  }
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
