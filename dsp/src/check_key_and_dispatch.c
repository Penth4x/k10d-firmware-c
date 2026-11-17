/* @k10d check_key_and_dispatch @ 0x000e1f48
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Validates a key code against enabled key masks and dispatches it if valid.
 * summary:
 *   Checks if the key code (param_1) is within valid ranges (0xb3-0xba or 0xb9-0xb8) and if
 *   specific bits in DAT_0003c127/DAT_0003c128 are set. If valid, it calls
 *   empty_stub_000e2100, FUN_000e2102 with the key code, and conditionally FUN_000e2196
 *   with param_2, then calls FUN_000e16d8. Returns DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_key_and_dispatch(uint param_1,uint32_t param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((DAT_0003c127 & 0x80) != 0) {
    if ((param_1 < 0xb3) || (0xba < param_1)) {
      bVar2 = true;
    }
    else if (param_1 < 0xb9) {
      bVar2 = (DAT_0003c128 & 0x40) != 0;
    }
    else if ((DAT_0003c128 & 0x80) != 0) {
      bVar2 = true;
    }
  }
  if (bVar2) {
    empty_stub_000e2100();
    iVar1 = FUN_000e2102(param_1 & 0xff);
    if (iVar1 == 0) {
      FUN_000e2196(param_2);
    }
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
