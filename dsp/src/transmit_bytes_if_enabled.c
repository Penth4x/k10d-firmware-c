/* @k10d transmit_bytes_if_enabled @ 0x000e1fac
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Checks a global enable flag and parameter range, then sends a byte array via a helper
 *   function if conditions are met.
 * summary:
 *   The function first validates param_1 against specific ranges (0xb3-0xba, 0xb9, etc.)
 *   and checks bits in DAT_0003c127 and DAT_0003c128. If the validation passes, it calls
 *   empty_stub_000e2100 and FUN_000e2102, then iterates through param_2 (a byte array)
 *   calling FUN_000e2196 for each byte until param_3 is exhausted or DAT_0003c122 becomes
 *   non-zero. Finally, it calls FUN_000e16d8 and returns the value of DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char transmit_bytes_if_enabled(uint param_1,uint8_t *param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_0003c127 & 0x80) != 0) {
    if ((param_1 < 0xb3) || (0xba < param_1)) {
      bVar1 = true;
    }
    else if (param_1 < 0xb9) {
      bVar1 = (DAT_0003c128 & 0x40) != 0;
    }
    else if ((DAT_0003c128 & 0x80) != 0) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    empty_stub_000e2100();
    FUN_000e2102(param_1 & 0xff);
    while ((param_3 != 0 && (DAT_0003c122 == '\0'))) {
      FUN_000e2196(*param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 - 1 & 0xffff;
    }
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
