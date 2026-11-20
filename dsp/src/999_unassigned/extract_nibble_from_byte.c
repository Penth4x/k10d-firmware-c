/* @k10d extract_nibble_from_byte @ 0x000cdafa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Extracts the lower or upper 4-bit nibble from a byte based on a flag bit.
 * summary:
 *   Checks bit 3 of DAT_0003ce08. If clear, stores the lower nibble (masked with 0xf) of
 *   DAT_0003f4a5 into DAT_0003ce11. If set, stores the upper nibble (shifted right by 4) of
 *   DAT_0003f4a5 into DAT_0003ce11. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void extract_nibble_from_byte(void)

{
  if ((DAT_0003ce08 & 8) == 0) {
    DAT_0003ce11 = DAT_0003f4a5 & 0xf;
  }
  else {
    DAT_0003ce11 = DAT_0003f4a5 >> 4;
  }
  return;
}
