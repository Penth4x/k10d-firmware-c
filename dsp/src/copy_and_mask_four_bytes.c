/* @k10d copy_and_mask_four_bytes @ 0x000ed732
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Copies four byte values to a destination block and then masks/sets bits in the source
 *   bytes.
 * summary:
 *   The function reads four bytes from DAT_00000401, DAT_00000501, DAT_00000403, and
 *   DAT_00000503, storing them into DAT_0003c208, DAT_0003c20a, DAT_0003c209, and
 *   DAT_0003c20b respectively. It then modifies the original source bytes by applying
 *   bitwise AND and OR operations with constants 0x50, 0xaf, 0x9f, and 0x60. No callees are
 *   invoked, and the role of the specific data registers is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_and_mask_four_bytes(void)

{
  DAT_0003c208 = DAT_00000401;
  DAT_0003c20a = DAT_00000501;
  DAT_0003c209 = DAT_00000403;
  DAT_0003c20b = DAT_00000503;
  DAT_00000401 = DAT_00000401 & 0x50;
  DAT_00000501 = DAT_00000501 | 0xaf;
  DAT_00000403 = DAT_00000403 & 0x9f;
  DAT_00000503 = DAT_00000503 | 0x60;
  return;
}
