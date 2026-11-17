/* @k10d map_byte_to_three_level_code @ 0x000db852
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Selects a byte from two globals and writes a 0-2 level code to DAT_0003c19e.
 * summary:
 *   Checks bit 4 of DAT_0003c003; if clear, sets DAT_0003c19e to 0. Otherwise selects a
 *   byte from DAT_0003c062 or DAT_0003c063 (based on DAT_0003c060 == 3) and maps it to 2
 *   (<0x89), 1 (<0x9f), or 0. No callees; pure state update of DAT_0003c19e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_byte_to_three_level_code(void)

{
  byte bVar1;
  
  if ((DAT_0003c003 & 0x10) == 0) {
    DAT_0003c19e = 0;
  }
  else {
    bVar1 = DAT_0003c062;
    if (DAT_0003c060 == '\x03') {
      bVar1 = DAT_0003c063;
    }
    if (bVar1 < 0x89) {
      DAT_0003c19e = 2;
    }
    else if (bVar1 < 0x9f) {
      DAT_0003c19e = 1;
    }
    else {
      DAT_0003c19e = 0;
    }
  }
  return;
}
