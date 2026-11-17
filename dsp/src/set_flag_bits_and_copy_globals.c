/* @k10d set_flag_bits_and_copy_globals @ 0x000ecb0e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets bit 3 in two global variables and copies values from three other globals into four
 *   destination globals.
 * summary:
 *   The function performs a series of global variable updates: it ORs 8 into DAT_0000000f
 *   and DAT_00000425, copies DAT_0003f3df into DAT_0003c1ff and DAT_00000144, copies
 *   DAT_0003f3de into DAT_00000142, and zeros DAT_00000146. No callees are invoked. The
 *   specific roles of these globals are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bits_and_copy_globals(void)

{
  DAT_0000000f = DAT_0000000f | 8;
  DAT_0003c1ff = DAT_0003f3df;
  DAT_00000142 = DAT_0003f3de;
  DAT_00000144 = DAT_0003f3df;
  DAT_00000146 = 0;
  DAT_00000425 = DAT_00000425 | 8;
  return;
}
