/* @k10d compute_clamped_index_000c4a06 @ 0x000c4a06
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Reads a value, clamps it to a maximum, and returns a scaled offset.
 * summary:
 *   Calls map_global_value_to_char to get a value. It adds 1, shifts right by 1 (integer
 *   divide by 2), and masks to 16 bits. If the result is greater than 0x3d (61), it is
 *   clamped to 0x3e (62). Finally, it multiplies by 0x20 (32) and adds 0x7bc, returning the
 *   result masked to 16 bits. The specific meaning of the input value and the resulting
 *   offset is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_clamped_index_000c4a06(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = map_global_value_to_char();
  uVar2 = iVar1 + 1U >> 1 & 0xffff;
  if (0x3d < uVar2) {
    uVar2 = 0x3e;
  }
  return uVar2 * 0x20 + 0x7bc & 0xffff;
}
