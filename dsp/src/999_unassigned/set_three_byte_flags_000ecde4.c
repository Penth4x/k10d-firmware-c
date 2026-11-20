/* @k10d set_three_byte_flags_000ecde4 @ 0x000ecde4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes fixed values to two global bytes and sets the low bit of a third global byte.
 * summary:
 *   The function performs three simple memory writes: it stores 0xd0 into DAT_00000048,
 *   stores 0x12 into DAT_0000004e, and ORs the value 1 into DAT_0000004f. There are no
 *   callees, no MMIO operations, and no conditional logic. The role of these specific
 *   global variables is not determinable from the provided pseudocode and brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_three_byte_flags_000ecde4(void)

{
  DAT_00000048 = 0xd0;
  DAT_0000004e = 0x12;
  DAT_0000004f = DAT_0000004f | 1;
  return;
}
