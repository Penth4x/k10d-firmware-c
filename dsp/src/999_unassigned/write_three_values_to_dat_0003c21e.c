/* @k10d write_three_values_to_dat_0003c21e @ 0x000e9a36
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets DAT_0003c21e to three distinct constants in sequence, calling FUN_000e9d46 after
 *   each assignment.
 * summary:
 *   The function performs three iterations of a pattern: assign a constant (DAT_000ffbfc,
 *   DAT_000ffbf8, DAT_000ffbfa) to the global DAT_0003c21e, then invoke FUN_000e9d46. The
 *   role of DAT_0003c21e and FUN_000e9d46 is not determinable from the provided pseudocode
 *   and callees, so no subsystem or device-specific name is assigned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_three_values_to_dat_0003c21e(void)

{
  _DAT_0003c21e = DAT_000ffbfc;
  FUN_000e9d46();
  _DAT_0003c21e = DAT_000ffbf8;
  FUN_000e9d46();
  _DAT_0003c21e = DAT_000ffbfa;
  FUN_000e9d46();
  return;
}
