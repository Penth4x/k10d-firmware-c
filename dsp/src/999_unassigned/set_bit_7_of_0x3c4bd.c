/* @k10d set_bit_7_of_0x3c4bd @ 0x000f616e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 7 of the global variable at 0x3c4bd, conditionally based on bits in 0x3c4d0
 *   and 0x3c4d1.
 * summary:
 *   The function checks bit 3 of DAT_0003c4d1. If clear, it checks bit 6 of DAT_0003c4d0;
 *   if that is set, it sets bit 7 of DAT_0003c4bd. If bit 3 of DAT_0003c4d1 is set, it
 *   unconditionally sets bit 7 of DAT_0003c4bd. No other side effects or callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit_7_of_0x3c4bd(void)

{
  if ((DAT_0003c4d1 & 8) == 0) {
    if ((DAT_0003c4d0 & 0x40) != 0) {
      DAT_0003c4bd = DAT_0003c4bd | 0x80;
    }
  }
  else {
    DAT_0003c4bd = DAT_0003c4bd | 0x80;
  }
  return;
}
