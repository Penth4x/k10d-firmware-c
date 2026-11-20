/* @k10d copy_bytes_and_update_flag @ 0x000ca712
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies four bytes from DAT_0003c284 to DAT_0003c3e4 and sets bit 0 of DAT_0003c410
 *   based on bit 4 of DAT_0003c287.
 * summary:
 *   The function performs a 4-byte copy from the source location at 0x0003c284 to the
 *   destination at 0x0003c3e4. It then checks bit 4 (0x10) of the last copied byte
 *   (DAT_0003c287); if clear, it clears bit 0 of DAT_0003c410, otherwise it sets it.
 *   Finally, it copies two more bytes from 0x0003c28a to 0x0003c398 and clears bit 7 of
 *   DAT_0003c410. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_and_update_flag(void)

{
  DAT_0003c3e4 = DAT_0003c284;
  DAT_0003c3e5 = DAT_0003c285;
  DAT_0003c3e6 = DAT_0003c286;
  DAT_0003c3e7 = DAT_0003c287;
  if ((DAT_0003c287 & 0x10) == 0) {
    DAT_0003c410 = DAT_0003c410 & 0xfe;
  }
  else {
    DAT_0003c410 = DAT_0003c410 | 1;
  }
  DAT_0003c398 = DAT_0003c28a;
  DAT_0003c399 = DAT_0003c28b;
  DAT_0003c410 = DAT_0003c410 & 0x7f;
  return;
}
