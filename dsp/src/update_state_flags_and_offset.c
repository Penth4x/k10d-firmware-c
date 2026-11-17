/* @k10d update_state_flags_and_offset @ 0x000cc2a0
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Updates a set of global state flags and a computed offset value based on bit tests of
 *   control registers.
 * summary:
 *   The function checks bit 6 of DAT_0003c128. If clear, it sets DAT_0000005e to 0x92, sets
 *   bits 2 and 3 of DAT_000000d2, and sets bit 0 of DAT_0000005f. It also clears bit 3 of
 *   DAT_000000d0 and sets bit 2 of DAT_0003ce08. Under specific conditions involving
 *   DAT_0003ce06, DAT_0003ce04, and DAT_0003f280, it calculates a value using
 *   unsigned_divide and updates DAT_0003ce20. Finally, it sets _DAT_00000058 to 0xffff.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_flags_and_offset(uint16_t param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  if ((DAT_0003c128 & 0x40) == 0) {
    DAT_0000005e = 0x92;
    DAT_000000d2 = DAT_000000d2 | 0xc;
    if ((DAT_0003ce06 & 4) == 0) {
      if ((DAT_0003ce04 & 4) == 0) {
        _DAT_0003ce22 = 0;
        DAT_0003ce20 = DAT_0003f2cd;
        if ((((DAT_0003f280 & 4) != 0) &&
            (uVar1 = (DAT_0003f2ca & 0xf0) * 2, _DAT_0003cc6a <= uVar1 && uVar1 - _DAT_0003cc6a != 0
            )) && (iVar2 = uVar1 - ((uint)_DAT_0003cc6a + (uint)_DAT_0003ce2c), -1 < iVar2)) {
          _DAT_00000058 = param_1;
          cVar3 = unsigned_divide(iVar2,DAT_0003f2ca & 0xf);
          DAT_0003ce20 = DAT_0003f2cd - cVar3;
        }
      }
      DAT_000000d0 = DAT_000000d0 & 0xdf;
      DAT_0003ce08 = DAT_0003ce08 | 4;
    }
    DAT_0000005f = DAT_0000005f | 1;
    _DAT_00000058 = 0xffff;
  }
  return;
}
