/* @k10d update_low_nibble_if_flags_set @ 0x000e063c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Updates the lower 3 bits of a global byte if two specific flag bits are set in other
 *   globals.
 * summary:
 *   Checks if bit 5 of DAT_0003c126 and bit 6 of DAT_0003c143 are set. If both are true, it
 *   replaces the lower 3 bits of DAT_0003c130 with the lower 3 bits of param_1 and calls
 *   update_status_byte_and_send_000e1af0. The role of the globals and the callee is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_low_nibble_if_flags_set(byte param_1)

{
  if (((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
    DAT_0003c130 = DAT_0003c130 & 0xf8 | param_1 & 7;
    update_status_byte_and_send_000e1af0();
  }
  return;
}
