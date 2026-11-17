/* @k10d update_state_flags_on_condition @ 0x000e1154
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates flag bits in DAT_0003c126 and DAT_0003c129 based on the value of DAT_0003c100.
 * summary:
 *   Checks if bits 3-5 of DAT_0003c100 equal 0x30. If so, it merges bits 4-6 of
 *   DAT_0003c109 into DAT_0003c129. If the result is 0x77, it sets bit 0 of DAT_0003c126;
 *   otherwise, it calls set_flag_based_on_byte. It then sets bit 9 of DAT_0003c126 and
 *   conditionally sets bit 10 if bit 5 of DAT_0003c107 is set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_flags_on_condition(void)

{
  uint8_t uVar1;
  
  if ((DAT_0003c100 & 0xf8) == 0x30) {
    DAT_0003c129 = DAT_0003c109 & 0x70 | DAT_0003c129 & 7;
    if (DAT_0003c129 == 0x77) {
      _DAT_0003c126 = 1;
    }
    else {
      set_flag_based_on_byte();
    }
    uVar1 = DAT_0003c127;
    _DAT_0003c126 = _DAT_0003c126 | 0x200;
    if ((DAT_0003c107 & 0x20) != 0) {
      _DAT_0003c126 = CONCAT11(DAT_0003c126,uVar1) | 0x400;
    }
  }
  return;
}
