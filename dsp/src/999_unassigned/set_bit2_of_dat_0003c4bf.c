/* @k10d set_bit2_of_dat_0003c4bf @ 0x000f60ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Conditionally sets bit 2 (value 4) of the global flag word at DAT_0003c4bf based on
 *   several other flag bits.
 * summary:
 *   The function evaluates a nested decision tree over multiple single-byte global flags
 *   (DAT_0003c022, DAT_0003c193, DAT_0003c18e, DAT_0003c58b, DAT_0003c198, DAT_0003c58c,
 *   DAT_0003c4de, DAT_0003c028). Depending on the combination of set/clear bits, it may OR
 *   the value 4 into DAT_0003c4bf. No other side effects or memory writes occur. The role
 *   of the individual flag bytes is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit2_of_dat_0003c4bf(void)

{
  if ((((DAT_0003c022 & 0x20) == 0) || ((DAT_0003c193 & 1) == 0)) ||
     (((DAT_0003c18e & 0x20) == 0 && ((DAT_0003c18e & 0x10) == 0)))) {
    if ((((DAT_0003c58b & 0x10) == 0) || ((DAT_0003c198 & 1) == 0)) &&
       (((DAT_0003c58b & 4) == 0 || ((DAT_0003c58b & 2) == 0)))) {
      if (((DAT_0003c198 & 1) == 0) && ((DAT_0003c58b & 2) == 0)) {
        if ((((DAT_0003c58c & 1) != 0) && ((DAT_0003c4de & 1) == 0)) && ((DAT_0003c028 & 4) != 0)) {
          DAT_0003c4bf = DAT_0003c4bf | 4;
        }
      }
      else {
        DAT_0003c4bf = DAT_0003c4bf | 4;
      }
    }
    else if ((DAT_0003c028 & 1) != 0) {
      DAT_0003c4bf = DAT_0003c4bf | 4;
    }
  }
  else if ((DAT_0003c18e & 1) == 0) {
    if (((DAT_0003c198 & 1) != 0) || ((DAT_0003c58b & 2) != 0)) {
      DAT_0003c4bf = DAT_0003c4bf | 4;
    }
  }
  else if ((DAT_0003c028 & 1) != 0) {
    DAT_0003c4bf = DAT_0003c4bf | 4;
  }
  return;
}
