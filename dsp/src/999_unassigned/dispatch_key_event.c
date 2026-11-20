/* @k10d dispatch_key_event @ 0x000e1e6c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Validates a key code against feature flags and routes it to a handler if enabled.
 * summary:
 *   Checks if key code param_1 is in the valid range (0x74-0x7a) and respects feature flags
 *   in DAT_0003c127/128. If valid, calls empty_stub_000e2100, looks up a handler via
 *   FUN_000e2102, and executes it with param_2 if found. Returns the value of DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t dispatch_key_event(uint param_1,uint32_t param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((DAT_0003c127 & 0x80) != 0) {
    if ((param_1 < 0x74) || (0x7a < param_1)) {
      bVar2 = true;
    }
    else if (param_1 < 0x78) {
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
      increment_counter_and_flag((void*)param_2);
    }
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
