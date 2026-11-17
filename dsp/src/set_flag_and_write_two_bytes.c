/* @k10d set_flag_and_write_two_bytes @ 0x000e9488
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 3 of a global byte and writes 0xff and 1 to two adjacent global bytes.
 * summary:
 *   The function performs three simple global memory writes. It modifies DAT_0000000f by
 *   clearing bit 2 and setting bit 3 (mask 0xef, OR 8). It then stores 0xff into
 *   DAT_00000096 and 1 into DAT_00000092. No callees are invoked, and the roles of these
 *   specific global variables are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_write_two_bytes(void)

{
  DAT_0000000f = DAT_0000000f & 0xef | 8;
  DAT_00000096 = 0xff;
  DAT_00000092 = 1;
  return;
}
