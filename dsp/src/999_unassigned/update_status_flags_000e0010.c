/* @k10d update_status_flags_000e0010 @ 0x000e0010
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates several global flag bytes based on bit tests of other globals and returns a
 *   boolean status.
 * summary:
 *   The function clears bit 3 of DAT_0003c023 and then branches on bits of DAT_0003c127,
 *   DAT_0003c126, and DAT_0003c143. It modifies DAT_00000403 and DAT_00000503, calls
 *   call_d5678_with_0x14 and clear_and_set_flag_bits_000e00cc, and conditionally sets bit 5
 *   of DAT_0003c023 while returning 1. The specific roles of the DAT globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_status_flags_000e0010(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  DAT_0003c023 = DAT_0003c023 & 0xdf;
  if ((DAT_0003c127 & 0x80) == 0) {
    if (((DAT_0003c126 & 0x20) == 0) || ((DAT_0003c143 & 0x40) == 0)) {
      DAT_00000403 = DAT_00000403 & 0x6f;
      DAT_00000503 = DAT_00000503 | 0x90;
      call_d5678_with_0x14();
      if ((-((int)((uint)DAT_00000003 << 0x1b) >> 0x1f) !=
           -((int)((uint)DAT_0003c129 << 0x1e) >> 0x1f)) ||
         ((uint)(DAT_00000003 >> 7) != -((int)((uint)DAT_0003c129 << 0x1d) >> 0x1f))) {
        DAT_0003c023 = DAT_0003c023 | 0x20;
        uVar1 = 1;
      }
      clear_and_set_flag_bits_000e00cc();
    }
    else {
      DAT_00000403 = DAT_00000403 & 0x6f;
      DAT_00000503 = DAT_00000503 | 0x90;
      call_d5678_with_0x14();
      if (((DAT_00000003 & 0x10) == 0) ||
         ((uint)(DAT_00000003 >> 7) != -((int)((uint)DAT_0003c129 << 0x1d) >> 0x1f))) {
        DAT_0003c023 = DAT_0003c023 | 0x20;
        uVar1 = 1;
      }
      DAT_00000003 = DAT_00000003 & 0x7f;
      DAT_00000403 = DAT_00000403 | 0x80;
      DAT_00000503 = DAT_00000503 & 0x7f;
    }
  }
  else if (((DAT_00000003 & 0x10) == 0) || ((DAT_00000003 & 0x80) == 0)) {
    DAT_0003c023 = DAT_0003c023 | 0x20;
    uVar1 = 1;
  }
  return uVar1;
}
