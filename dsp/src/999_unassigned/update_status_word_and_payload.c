/* @k10d update_status_word_and_payload @ 0x000d37ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets bit 5 of a status byte and copies a 10-byte payload to a destination buffer based
 *   on bit 2 of the original status.
 * summary:
 *   The function reads DAT_0003cbd4, sets bit 5 (0x20), and writes the result back. It
 *   checks bit 2 (0x04) of the original value to select between two 3-byte sources
 *   (DAT_0003ccb0 or DAT_0003ccb6) for the destination at DAT_0003cd34. It also updates
 *   DAT_0003cbd3 (clearing or setting bit 6) and copies several other global variables to
 *   the DAT_0003cd30 block. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_word_and_payload(void)

{
  byte bVar1;
  
  bVar1 = DAT_0003cbd4;
  DAT_0003cbd4 = DAT_0003cbd4 | 0x20;
  if ((bVar1 & 4) == 0) {
    _DAT_0003cd34 = _DAT_0003ccb0;
    _DAT_0003cd36 = _DAT_0003ccb2;
    _DAT_0003cd38 = _DAT_0003ccb4;
    DAT_0003cbd3 = DAT_0003cbd3 & 0xbf;
  }
  else {
    _DAT_0003cd34 = _DAT_0003ccb6;
    _DAT_0003cd36 = _DAT_0003ccb8;
    _DAT_0003cd38 = _DAT_0003ccba;
    DAT_0003cbd3 = DAT_0003cbd3 | 0x40;
  }
  DAT_0003cd30 = DAT_0003cc95;
  DAT_0003cd31 = DAT_0003cb80;
  DAT_0003cd32 = DAT_0003cbd4;
  _DAT_0003cd3a = _DAT_0003ccd0;
  _DAT_0003cd3c = _DAT_0003ccd2;
  _DAT_0003cd3e = _DAT_0003ccd4;
  return;
}
