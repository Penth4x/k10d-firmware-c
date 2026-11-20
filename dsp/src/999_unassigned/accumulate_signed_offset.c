/* @k10d accumulate_signed_offset @ 0x000d4098
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Adds a signed offset derived from DAT_0003cd42 and clamp_signed_value to the
 *   accumulator DAT_0003cbf0.
 * summary:
 *   Reads a 16-bit value from DAT_0003cd42, calls clamp_signed_value on DAT_0003cc2e, then
 *   computes (uVar1*2 - 0x100) - result and stores it back to DAT_0003cc2e. The computed
 *   value is added to the accumulator DAT_0003cbf0. The role of the DAT globals and
 *   clamp_signed_value is not determinable from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_signed_offset(void)

{
  ushort uVar1;
  
  uVar1 = (ushort)DAT_0003cd42;
  _DAT_0003cc2e = clamp_signed_value((int)_DAT_0003cc2e);
  _DAT_0003cc2e = (uVar1 * 2 + -0x100) - _DAT_0003cc2e;
  _DAT_0003cbf0 = _DAT_0003cbf0 + _DAT_0003cc2e;
  return;
}
