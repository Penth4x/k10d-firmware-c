/* @k10d check_key_enabled_and_dispatch @ 0x000e1e08
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks if a key code is enabled based on global flags and calls a dispatch sequence if
 *   so.
 * summary:
 *   The function validates the input parameter against a range (0xd3-0xdc) and specific bit
 *   flags in DAT_0003c127 and DAT_0003c128. If the key is considered active, it calls
 *   empty_stub_000e2100, FUN_000e2102 with the masked key code, and FUN_000e16d8. It
 *   returns the value of DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_key_enabled_and_dispatch(uint param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_0003c127 & 0x80) != 0) {
    if ((param_1 < 0xd3) || (0xdc < param_1)) {
      bVar1 = true;
    }
    else if (param_1 < 0xd5) {
      bVar1 = (DAT_0003c128 & 0x10) != 0;
    }
    else if (param_1 < 0xda) {
      bVar1 = (DAT_0003c128 & 0x40) != 0;
    }
    else if ((DAT_0003c128 & 0x80) != 0) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    empty_stub_000e2100();
    FUN_000e2102(param_1 & 0xff);
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
