/* @k10d copy_three_values_by_index @ 0x000df134
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies three source values into a destination triple selected by the input index.
 * summary:
 *   The function checks param_1 against eight specific values (0x1e, 0x32, 0x46, 0x5a,
 *   0x6e, 0x82, 0x96, 0xaa). For each match, it copies three consecutive bytes from
 *   DAT_0003c814/16/18 into a corresponding triple of destination bytes
 *   (DAT_0003c8d0/14/18, etc.). The destination offsets increase by 2 for each successive
 *   index value. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_three_values_by_index(int param_1)

{
  if (param_1 == 0x1e) {
    _DAT_0003c8d0 = _DAT_0003c814;
    _DAT_0003c8e0 = _DAT_0003c816;
    _DAT_0003c8f0 = _DAT_0003c818;
  }
  if (param_1 == 0x32) {
    _DAT_0003c8d2 = _DAT_0003c814;
    _DAT_0003c8e2 = _DAT_0003c816;
    _DAT_0003c8f2 = _DAT_0003c818;
  }
  if (param_1 == 0x46) {
    _DAT_0003c8d4 = _DAT_0003c814;
    _DAT_0003c8e4 = _DAT_0003c816;
    _DAT_0003c8f4 = _DAT_0003c818;
  }
  if (param_1 == 0x5a) {
    _DAT_0003c8d6 = _DAT_0003c814;
    _DAT_0003c8e6 = _DAT_0003c816;
    _DAT_0003c8f6 = _DAT_0003c818;
  }
  if (param_1 == 0x6e) {
    _DAT_0003c8d8 = _DAT_0003c814;
    _DAT_0003c8e8 = _DAT_0003c816;
    _DAT_0003c8f8 = _DAT_0003c818;
  }
  if (param_1 == 0x82) {
    _DAT_0003c8da = _DAT_0003c814;
    _DAT_0003c8ea = _DAT_0003c816;
    _DAT_0003c8fa = _DAT_0003c818;
  }
  if (param_1 == 0x96) {
    _DAT_0003c8dc = _DAT_0003c814;
    _DAT_0003c8ec = _DAT_0003c816;
    _DAT_0003c8fc = _DAT_0003c818;
  }
  if (param_1 == 0xaa) {
    _DAT_0003c8de = _DAT_0003c814;
    _DAT_0003c8ee = _DAT_0003c816;
    _DAT_0003c8fe = _DAT_0003c818;
  }
  return;
}
