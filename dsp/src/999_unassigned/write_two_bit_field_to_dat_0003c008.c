/* @k10d write_two_bit_field_to_dat_0003c008 @ 0x000e32d0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Masks the low two bits of DAT_0003c008 and ORs in param_1 before passing to
 *   write_masked_field_and_call_two_routines with a constant 7.
 * summary:
 *   The function takes a ushort, combines it with the lower two bits of the global
 *   DAT_0003c008 (via `& 0xc | param_1`), and calls
 *   write_masked_field_and_call_two_routines with the first argument fixed at 7. The role
 *   of DAT_0003c008 and write_masked_field_and_call_two_routines is not established from
 *   the given information, so the operation is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bit_field_to_dat_0003c008(ushort param_1)

{
  write_masked_field_and_call_two_routines(7,DAT_0003c008 & 0xc | param_1);
  return;
}
