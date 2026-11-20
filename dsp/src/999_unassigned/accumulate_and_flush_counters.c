/* @k10d accumulate_and_flush_counters @ 0x000cdec0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Accumulates a 16-bit input into several byte/short counters, conditionally flushes one
 *   via a callee, and returns the high byte.
 * summary:
 *   Adds the low byte of param_1 to _DAT_0003ce7a; if two flag bits are clear, calls
 *   update_state_flags_and_status_byte with the accumulated value shifted left by 2 and
 *   resets it. Adds the high byte (param_1 >> 8) to _DAT_0003ce7c (gated by DAT_0003f55e
 *   bit 5) and unconditionally to _DAT_0003ce18. Depending on bits in DAT_0003ce01, either
 *   decrements DAT_0003ce21 (clamped to 0, possibly calling FUN_000cc6d6) or increments
 *   _DAT_0003ce22. Also decrements DAT_0003ce17 if DAT_0003ce08 bit 1 is set. Returns the
 *   high byte of param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint accumulate_and_flush_counters(uint param_1)

{
  short sVar1;
  int iVar2;
  
  _DAT_0003ce7a = _DAT_0003ce7a + (short)param_1;
  if (((DAT_0003ce7e & 1) == 0) && ((DAT_0003ce09 & 0x40) == 0)) {
    update_state_flags_and_status_byte((uint)_DAT_0003ce7a << 2);
    _DAT_0003ce7a = 0;
  }
  sVar1 = (short)(param_1 >> 8);
  if ((DAT_0003f55e & 0x20) == 0) {
    _DAT_0003ce7c = 0;
  }
  else {
    _DAT_0003ce7c = _DAT_0003ce7c + sVar1;
  }
  param_1 = param_1 >> 8;
  _DAT_0003ce18 = _DAT_0003ce18 + sVar1;
  if ((DAT_0003ce01 & 1) == 0) {
    if ((DAT_0003ce01 & 2) != 0) {
      iVar2 = DAT_0003ce21 - param_1;
      if ((((iVar2 < 1) && (iVar2 = 0, (DAT_0003ce06 & 1) == 0)) && ((DAT_0003ce05 & 1) == 0)) &&
         ((DAT_0003ce07 & 8) == 0)) {
        FUN_000cc6d6();
      }
      DAT_0003ce21 = (byte)iVar2;
    }
  }
  else {
    _DAT_0003ce22 = _DAT_0003ce22 + sVar1;
  }
  if ((DAT_0003ce08 & 2) != 0) {
    iVar2 = DAT_0003ce17 - param_1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    DAT_0003ce17 = (byte)iVar2;
  }
  return param_1;
}
