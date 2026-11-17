/* @k10d compute_scaled_values @ 0x000dcf0c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Selects a pair of coefficients based on flag bits and computes two scaled products into
 *   global variables.
 * summary:
 *   The function initializes two global variables (_DAT_0003f544, _DAT_0003f546) to 0x1498,
 *   then conditionally overwrites them with 0xa4c, 0x1ee4, or 0x10d/0x100 based on bits in
 *   DAT_0003c127, DAT_0003c80f, DAT_0003f362, and DAT_0003c805. It then calculates two
 *   8-bit scaled products using DAT_0003c808, DAT_0003f364, and DAT_0003f366, storing the
 *   results in _DAT_0003c860 and _DAT_0003c864. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_scaled_values(void)

{
  _DAT_0003f544 = 0x1498;
  _DAT_0003f546 = 0x1498;
  if ((DAT_0003c127 & 8) == 0) {
    if ((DAT_0003c80f & 3) == 0) {
      _DAT_0003f544 = 0xa4c;
      _DAT_0003f546 = 0xa4c;
    }
    if ((DAT_0003c80f & 3) == 2) {
      _DAT_0003f544 = 0x1ee4;
      _DAT_0003f546 = 0x1ee4;
    }
  }
  if (((DAT_0003f362 & 0x10) != 0) && ((DAT_0003c805 & 0x40) != 0)) {
    _DAT_0003f544 = 0x10d;
    _DAT_0003f546 = 0x100;
  }
  _DAT_0003c860 = ((uint)_DAT_0003c808 * (uint)_DAT_0003f544 >> 8) * (uint)_DAT_0003f364 >> 8;
  _DAT_0003c864 = ((uint)_DAT_0003c808 * (uint)_DAT_0003f546 >> 8) * (uint)_DAT_0003f366 >> 8;
  return;
}
