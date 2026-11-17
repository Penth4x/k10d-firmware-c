/* @k10d update_status_flags_from_code @ 0x000e8290
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets bits in a status word based on the value of a code byte, with special handling for
 *   code 4.
 * summary:
 *   The function checks a flag at DAT_0003f3f2; if set, it initializes DAT_0003c06b and
 *   related bytes to 4. It then branches on the value of DAT_0003c06b (1-4) to set
 *   corresponding bits (1, 2, 4, 8) in DAT_0003c02f. For code 1, it also clears three
 *   adjacent bytes. For other values, it clears bit 1 of DAT_0003c066. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_from_code(void)

{
  if ((DAT_0003f3f2 & 1) != 0) {
    DAT_0003c06b = '\x04';
    DAT_0003c064 = 4;
    DAT_0003c065 = 4;
  }
  if (DAT_0003c06b == '\x01') {
    DAT_0003c02f = DAT_0003c02f | 1;
    DAT_0003c067 = DAT_0003c067 | 2;
    DAT_0003c072 = 0;
    DAT_0003c073 = 0;
    DAT_0003c074 = 0;
  }
  else if (DAT_0003c06b == '\x02') {
    DAT_0003c02f = DAT_0003c02f | 2;
  }
  else if (DAT_0003c06b == '\x03') {
    DAT_0003c02f = DAT_0003c02f | 4;
  }
  else if (DAT_0003c06b == '\x04') {
    DAT_0003c02f = DAT_0003c02f | 8;
  }
  else {
    DAT_0003c066 = DAT_0003c066 & 0xef;
  }
  return;
}
