/* @k10d update_two_offset_values @ 0x000dc5ac
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes two deltas via divide_two_integers based on a threshold and adds them to two
 *   stored offsets.
 * summary:
 *   Selects one of three DAT_0003f3xx parameters based on whether DAT_0003c564 is below
 *   0x54, below 100, or above. Calls divide_two_integers twice with that parameter to
 *   produce values stored at DAT_0003c850 and DAT_0003c858. Computes differences against
 *   DAT_0003c828 and DAT_0003c82c, stores them at DAT_0003c830/834/880, and increments
 *   DAT_0003c854 and DAT_0003c85c by those differences.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_two_offset_values(void)

{
  if (DAT_0003c564 < 100) {
    if (DAT_0003c564 < 0x54) {
      _DAT_0003c850 = divide_two_integers(_DAT_0003c854,(int)_DAT_0003f3b4);
      _DAT_0003c858 = divide_two_integers(_DAT_0003c85c,(int)_DAT_0003f3b4);
    }
    else {
      _DAT_0003c850 = divide_two_integers(_DAT_0003c854,(int)_DAT_0003f3b2);
      _DAT_0003c858 = divide_two_integers(_DAT_0003c85c,(int)_DAT_0003f3b2);
    }
  }
  else {
    _DAT_0003c850 = divide_two_integers(_DAT_0003c854,(int)_DAT_0003f39e);
    _DAT_0003c858 = divide_two_integers(_DAT_0003c85c,(int)_DAT_0003f39e);
  }
  _DAT_0003c830 = _DAT_0003c828 - _DAT_0003c850;
  _DAT_0003c834 = _DAT_0003c82c - _DAT_0003c858;
  _DAT_0003c880 = _DAT_0003c834;
  _DAT_0003c854 = _DAT_0003c854 + (_DAT_0003c828 - _DAT_0003c850);
  _DAT_0003c85c = _DAT_0003c85c + _DAT_0003c834;
  return;
}
