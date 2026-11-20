/* @k10d set_flags_and_call_helpers @ 0x000d07f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bits in two global variables and calls three helper functions with specific
 *   arguments.
 * summary:
 *   The function ORs 8 into DAT_00000002 and 0x60 into DAT_00000422. It then calls
 *   write_masked_field_and_call_two_routines with 0x1c and a modified DAT_0003c00d,
 *   followed by dispatch_param_to_callees with 0. If bit 0 of DAT_0003f284 is clear, it
 *   sets DAT_000000ac to 10 and calls write_masked_field_and_call_two_routines again with
 *   0xd and a modified DAT_0003c00e. Finally, it calls clear_bit3_and_halt with 0xffb8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flags_and_call_helpers(void)

{
  DAT_00000002 = DAT_00000002 | 8;
  DAT_00000422 = DAT_00000422 | 0x60;
  write_masked_field_and_call_two_routines(0x1c,DAT_0003c00d | 0x40);
  dispatch_param_to_callees(0);
  if ((DAT_0003f284 & 1) == 0) {
    DAT_000000ac = 10;
    write_masked_field_and_call_two_routines(0xd,_DAT_0003c00e | 0x10);
  }
  clear_bit3_and_halt(0xffb8);
  return;
}
