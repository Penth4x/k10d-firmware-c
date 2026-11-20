/* @k10d clear_flags_when_condition_met @ 0x000f0518
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears three adjacent byte flags if a specific bit pattern is present in two control
 *   words.
 * summary:
 *   Checks if bit 0 is set and bit 1 is clear in DAT_0003c066, and bit 5 is clear in
 *   DAT_0003c395. If true, it zeroes DAT_0003c388, DAT_0003c389, and _DAT_0003c38a, then
 *   calls build_status_byte_from_flags and call_d5afc_with_0x48. The role of the flags and
 *   callees is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_flags_when_condition_met(void)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    DAT_0003c388 = 0;
    _DAT_0003c38a = 0;
    DAT_0003c389 = 0;
    build_status_byte_from_flags();
    call_d5afc_with_0x48();
  }
  return;
}
