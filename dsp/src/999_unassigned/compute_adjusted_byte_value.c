/* @k10d compute_adjusted_byte_value @ 0x000c69a0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns a byte value derived from DAT_000f9ddd, conditionally adjusted by a call to
 *   compute_and_write_scaled_value.
 * summary:
 *   The function initializes a return value to 0x70. If bit 3 of DAT_0003c127 is set, it
 *   extracts the lower 3 bits of DAT_000f9ddd, negates the value if bit 7 of DAT_000f9ddd
 *   is set, calls compute_and_write_scaled_value with argument 0x70, and combines the
 *   result with the extracted value using a bitwise AND with 0xfc. The final byte is
 *   returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_adjusted_byte_value(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x70;
  if ((DAT_0003c127 & 8) != 0) {
    uVar1 = DAT_000f9ddd & 7;
    if ((DAT_000f9ddd & 0x80) != 0) {
      uVar1 = -uVar1;
    }
    iVar2 = compute_and_write_scaled_value();
    uVar1 = iVar2 + uVar1 & 0xfc;
  }
  return uVar1;
}
