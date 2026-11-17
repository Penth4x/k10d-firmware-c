/* @k10d status_item_location @ 0x1046b2c0
 * name: verified (structural evidence: decomp; tables decoded (e.g. item 0x15 = byte 3 mask 0x10 = OK))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Returns the (byte offset, mask) descriptor of a status item: items < 0x2b from table
 *   0x105a686c, others from 0x105a89dc.
 * summary:
 *   VERIFIED: decomp; tables decoded (e.g. item 0x15 = byte 3 mask 0x10 = OK)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int status_item_location(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x2b) {
    iVar1 = 0x105a686c/*ROM*/;
    param_1 = param_1 << 3;
  }
  else {
    iVar1 = 0x105a89dc/*ROM*/;
    param_1 = (param_1 + -0x2b) * 8;
  }
  return iVar1 + param_1;
}
