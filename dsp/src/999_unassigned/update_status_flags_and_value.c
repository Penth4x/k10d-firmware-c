/* @k10d update_status_flags_and_value @ 0x000d94f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Updates status flags and computes a derived value based on a reading from
 *   update_mode_indexed_state.
 * summary:
 *   The function clears DAT_0003c6f4 and sets bit 7 of DAT_0003c589 based on bit 3 of
 *   DAT_0003c127. It calls update_mode_indexed_state to obtain a value and checks if it is
 *   within the range 0-0x2f. If the value is out of range or specific status bits in
 *   DAT_0003c4de, DAT_0003c192, or DAT_0003ce06 are set, it sets bit 0 of DAT_0003c6f7.
 *   Otherwise, it clears bit 0 of DAT_0003c6f7 and calculates a remaining value by
 *   subtracting the reading from 0xac or 0xa4 (depending on DAT_0003c493), clamping the
 *   result to non-negative and storing it in DAT_0003c6f4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_and_value(void)

{
  uint32_t uVar1;
  short sVar2;
  short extraout_r4;
  
  DAT_0003c6f4 = 0;
  if ((DAT_0003c127 & 8) == 0) {
    DAT_0003c589 = DAT_0003c589 & 0x7f;
  }
  else {
    DAT_0003c589 = DAT_0003c589 | 0x80;
  }
  uVar1 = update_mode_indexed_state();
  extraout_r4 = (short)uVar1;
  if (((((DAT_0003c589 & 0x80) == 0) || (extraout_r4 < 0)) || (0x2f < extraout_r4)) ||
     ((((DAT_0003c4de & 8) != 0 || ((DAT_0003c4de & 0x10) != 0)) ||
      (((DAT_0003c192 & 0x20) != 0 || ((DAT_0003ce06 & 0x20) == 0)))))) {
    DAT_0003c6f7 = DAT_0003c6f7 | 1;
  }
  else {
    DAT_0003c6f7 = DAT_0003c6f7 & 0xfe;
    if (DAT_0003c493 == '\x15') {
      sVar2 = 0xac - extraout_r4;
    }
    else {
      sVar2 = 0xa4 - extraout_r4;
    }
    if (sVar2 < 0) {
      sVar2 = 0;
    }
    DAT_0003c6f4 = (uint8_t)sVar2;
  }
  return;
}
