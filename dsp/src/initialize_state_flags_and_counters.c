/* @k10d initialize_state_flags_and_counters @ 0x000ef7ca
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Resets multiple state flags, counters, and status variables based on conditional checks
 *   of global status bits.
 * summary:
 *   The function performs a series of conditional updates to global variables in the
 *   0x0003c000-0x0003c220 range. It clears specific bits in DAT_00000002 and DAT_0003c1e7,
 *   sets DAT_0003c1f4 to 0 or 0xff, and initializes counters like _DAT_0003c1f8 to 5000. It
 *   calls several unknown functions (FUN_000d5642, FUN_000ed7b6, etc.) depending on the
 *   state of bits in DAT_0003c214, DAT_0003c1ed, and DAT_0003c003. The specific hardware or
 *   subsystem context is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_state_flags_and_counters(void)

{
  if (((DAT_0003c214 & 1) != 0) && ((DAT_0003c1ea & 2) == 0)) {
    DAT_00000002 = DAT_00000002 & 0xfd;
    FUN_000d5642(0x14);
  }
  if ((DAT_0003c1ed & 0x80) == 0) {
    FUN_000ed7b6();
    call_subroutine_with_100();
  }
  if ((DAT_0003c214 & 1) == 0) {
    call_subroutine_with_arg_9();
  }
  write_masked_field_and_call_two_routines(0xf,7);
  _DAT_0003c1f8 = 5000;
  _DAT_0003c1fa = 0;
  DAT_0003c200 = 0;
  set_three_byte_flags_000ecda8();
  if ((DAT_0003c003 & 0x80) == 0) {
    DAT_0003c1f4 = 0xff;
    DAT_0003c1e7 = DAT_0003c1e7 & 0xf9;
  }
  else {
    DAT_0003c1f4 = 0;
    DAT_0003c1e7 = DAT_0003c1e7 & 0xfb | 2;
  }
  DAT_0003c1f5 = 4;
  DAT_0003c1fe = 0;
  _DAT_0003c1e8 = 0;
  return;
}
