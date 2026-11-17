/* @k10d adjust_byte_field_with_wrap @ 0x1051e69e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Adds byte at offset 3 to byte at offset 5, storing result if less than limit at offset
 *   4.
 * summary:
 *   The function reads three bytes from a structure pointed to by param_1: a value at
 *   offset 5, an increment at offset 3, and a limit at offset 4. It sums the value and
 *   increment, and if the sum is less than the limit, it writes the sum back to offset 5.
 *   This appears to be a simple bounded increment operation on a small integer field within
 *   a data structure. No callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_byte_field_with_wrap(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 3);
  if (uVar1 < *(byte *)(param_1 + 4)) {
    *(char *)(param_1 + 5) = (char)uVar1;
  }
  return;
}
