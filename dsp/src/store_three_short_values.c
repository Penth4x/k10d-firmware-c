/* @k10d store_three_short_values @ 0x000df02e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Saves three 16-bit values from a parameter-derived buffer into global variables.
 * summary:
 *   The function takes a parameter, doubles it, and uses it as a base address to read three
 *   16-bit values at offsets 0x3d000, 0x3d400, and 0x3d800. Each value is left-shifted by 8
 *   bits and stored into the global variables _DAT_0003c830, _DAT_0003c834, and
 *   _DAT_0003c880 respectively. The original 16-bit values are also written back to the
 *   same buffer locations from the constants _DAT_0003c814, _DAT_0003c816, and
 *   _DAT_0003c818.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_three_short_values(int param_1)

{
  param_1 = param_1 * 2;
  _DAT_0003c830 = (int)*(short *)(param_1 + 0x3d000) << 8;
  *(short *)(param_1 + 0x3d000) = _DAT_0003c814;
  _DAT_0003c834 = (int)*(short *)(param_1 + 0x3d400) << 8;
  *(short *)(param_1 + 0x3d400) = _DAT_0003c816;
  _DAT_0003c880 = (int)*(short *)(param_1 + 0x3d800) << 8;
  *(short *)(param_1 + 0x3d800) = _DAT_0003c818;
  return;
}
