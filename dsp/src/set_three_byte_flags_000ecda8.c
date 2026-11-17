/* @k10d set_three_byte_flags_000ecda8 @ 0x000ecda8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes 0x90 to DAT_00000048, 0x12 to DAT_0000004e, and sets bit 0 of DAT_0000004f.
 * summary:
 *   The function performs three simple memory writes to low-address globals (0x48, 0x4e,
 *   0x4f). It sets specific byte values and ORs bit 0 into the third location. No callees
 *   are invoked, and the roles of these globals are not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_three_byte_flags_000ecda8(void)

{
  DAT_00000048 = 0x90;
  DAT_0000004e = 0x12;
  DAT_0000004f = DAT_0000004f | 1;
  return;
}
