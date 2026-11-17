/* @k10d update_flag_byte_from_state @ 0x000f6822
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Reads a state word and conditionally sets bits 4 and 7 in a flag byte.
 * summary:
 *   The function checks bits 2, 3, and 0 of the global word at DAT_0003c474. If bit 2 or
 *   bit 3 is set, it sets bit 4 (0x10) in the byte at DAT_0003c4b8. If bit 0 is also set,
 *   it additionally sets bit 7 (0x80). The result is written back to DAT_0003c4b8. No other
 *   side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_byte_from_state(void)

{
  byte bVar1;
  
  if ((((DAT_0003c474 & 4) != 0) || (bVar1 = DAT_0003c4b8, (DAT_0003c474 & 8) != 0)) &&
     (bVar1 = DAT_0003c4b8 | 0x10, (DAT_0003c474 & 1) != 0)) {
    bVar1 = DAT_0003c4b8 | 0x90;
  }
  DAT_0003c4b8 = bVar1;
  return;
}
