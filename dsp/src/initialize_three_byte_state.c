/* @k10d initialize_three_byte_state @ 0x000d81f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets three adjacent global variables to fixed constants 0, 0x1e, and 0x11.
 * summary:
 *   The function writes the value 0 to DAT_0000013e, 0x1e to DAT_0000013a, and 0x11 to
 *   DAT_0000013c. It has no callees and performs no other operations. The specific roles of
 *   these globals are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_three_byte_state(void)

{
  DAT_0000013e = 0;
  DAT_0000013a = 0x1e;
  DAT_0000013c = 0x11;
  return;
}
