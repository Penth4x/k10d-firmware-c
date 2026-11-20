/* @k10d compute_and_store_offset_delta @ 0x000cde6e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a clamped 16-bit difference between two globals and passes it to a helper.
 * summary:
 *   Reads _DAT_000000d8 and _DAT_000000e8, extracts the high byte of the former, subtracts
 *   the latter, and adds 32000 if the result is negative. It then sets DAT_000000ec to
 *   0x61, masks _DAT_000000e8 to 24 bits, sets bit 1 of DAT_000000ed, and calls
 *   accumulate_and_flush_counters with the computed value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t compute_and_store_offset_delta(void)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = (_DAT_000000d8 + 0x180U & 0xff00) - _DAT_000000e8;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 32000;
  }
  DAT_000000ec = 0x61;
  _DAT_000000e8 = _DAT_000000e8 & 0xffffff;
  DAT_000000ed = DAT_000000ed | 2;
  uVar1 = accumulate_and_flush_counters(iVar2);
  return uVar1;
}
