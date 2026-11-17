/* @k10d adjust_byte_counter_by_mode @ 0x000d3bfa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Adjusts a signed byte counter based on the low nibble of a mode byte and a signed half-
 *   value.
 * summary:
 *   Reads the low nibble of DAT_0003cb9b; if it is 9 or 6, subtracts 5 from DAT_0003cc93
 *   and sets DAT_0003cc94 to 5 or 0xfb respectively. If bit 2 of DAT_0003ce06 is set and
 *   bit 6 of DAT_0003cbef is clear, it halves the signed value in DAT_0003cc95 (rounding
 *   toward zero) and subtracts the absolute result from the original DAT_0003cc93. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_byte_counter_by_mode(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = DAT_0003cc93;
  if ((DAT_0003cb9b & 0xf) == 9) {
    DAT_0003cc94 = 5;
    DAT_0003cc93 = DAT_0003cc93 + -5;
  }
  else {
    DAT_0003cc94 = 0;
  }
  if ((DAT_0003cb9b & 0xf) == 6) {
    DAT_0003cc94 = 0xfb;
    DAT_0003cc93 = DAT_0003cc93 + -5;
  }
  if (((DAT_0003ce06 & 4) != 0) && ((DAT_0003cbef & 0x40) == 0)) {
    iVar2 = (int)DAT_0003cc95;
    if (DAT_0003cc95 < '\0') {
      iVar2 = iVar2 + -1;
    }
    iVar2 = iVar2 >> 1;
    DAT_0003cc94 = (uint8_t)iVar2;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    DAT_0003cc93 = cVar1 - (char)iVar2;
  }
  return;
}
