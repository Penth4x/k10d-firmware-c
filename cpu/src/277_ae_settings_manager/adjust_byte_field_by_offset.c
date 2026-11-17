/* @k10d adjust_byte_field_by_offset @ 0x1051ea86
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Adds the byte at offset 3 to the byte at offset 5 of a structure and stores the result
 *   if it is less than the byte at offset 4.
 * summary:
 *   The function reads three bytes from a memory structure pointed to by param_1. It sums
 *   the bytes at offsets 3 and 5. If the sum is less than the byte at offset 4, it writes
 *   the sum back to offset 5. No callees are present, and the specific role of the
 *   structure fields is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_byte_field_by_offset(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 3);
  if (uVar1 < *(byte *)(param_1 + 4)) {
    *(char *)(param_1 + 5) = (char)uVar1;
  }
  return;
}
