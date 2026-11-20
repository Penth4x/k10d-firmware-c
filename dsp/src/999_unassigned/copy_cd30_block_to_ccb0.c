/* @k10d copy_cd30_block_to_ccb0 @ 0x000d3858
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies a 10-byte block from DAT_0003cd30 to either DAT_0003ccb0 or DAT_0003ccb6 based
 *   on bit 6 of DAT_0003cbd3.
 * summary:
 *   The function reads a 10-byte source block starting at DAT_0003cd30. It checks bit 6
 *   (0x40) of the flag word DAT_0003cbd3 to select one of two destination offsets
 *   (DAT_0003ccb0 or DAT_0003ccb6) for the first three bytes. The remaining seven bytes are
 *   always copied to fixed locations starting at DAT_0003cc95. No external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_cd30_block_to_ccb0(void)

{
  if ((DAT_0003cbd3 & 0x40) == 0) {
    _DAT_0003ccb0 = _DAT_0003cd34;
    _DAT_0003ccb2 = _DAT_0003cd36;
    _DAT_0003ccb4 = _DAT_0003cd38;
  }
  else {
    _DAT_0003ccb6 = _DAT_0003cd34;
    _DAT_0003ccb8 = _DAT_0003cd36;
    _DAT_0003ccba = _DAT_0003cd38;
  }
  DAT_0003cc95 = DAT_0003cd30;
  DAT_0003cb80 = DAT_0003cd31;
  DAT_0003cbd4 = DAT_0003cd32;
  _DAT_0003ccd0 = _DAT_0003cd3a;
  _DAT_0003ccd2 = _DAT_0003cd3c;
  _DAT_0003ccd4 = _DAT_0003cd3e;
  return;
}
