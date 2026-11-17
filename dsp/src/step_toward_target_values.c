/* @k10d step_toward_target_values @ 0x000dc9bc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Increments or decrements three state variables by one to approach target values, then
 *   shifts them left by 8 bits into output globals.
 * summary:
 *   If param_1 is zero, the function initializes three state variables (_DAT_0003f596,
 *   _DAT_0003f598, _DAT_0003f59a) from source globals (_DAT_0003c814, _DAT_0003c816,
 *   _DAT_0003c818). Otherwise, it adjusts each state variable by +1 or -1 to move it toward
 *   the corresponding target parameter (param_2, param_3, param_4). Finally, it writes the
 *   shifted values (<< 8) to output globals _DAT_0003c830, _DAT_0003c834, and
 *   _DAT_0003c880. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void step_toward_target_values(int param_1,int param_2,int param_3,int param_4)

{
  if (param_1 == 0) {
    _DAT_0003f596 = _DAT_0003c814;
    _DAT_0003f598 = _DAT_0003c816;
    _DAT_0003f59a = _DAT_0003c818;
  }
  else {
    if (_DAT_0003f596 != param_2) {
      if (_DAT_0003f596 < param_2) {
        _DAT_0003f596 = _DAT_0003f596 + 1;
      }
      else {
        _DAT_0003f596 = _DAT_0003f596 + -1;
      }
    }
    if (_DAT_0003f598 != param_3) {
      if (_DAT_0003f598 < param_3) {
        _DAT_0003f598 = _DAT_0003f598 + 1;
      }
      else {
        _DAT_0003f598 = _DAT_0003f598 + -1;
      }
    }
    if (_DAT_0003f59a != param_4) {
      if (_DAT_0003f59a < param_4) {
        _DAT_0003f59a = _DAT_0003f59a + 1;
      }
      else {
        _DAT_0003f59a = _DAT_0003f59a + -1;
      }
    }
  }
  _DAT_0003c830 = (int)_DAT_0003f596 << 8;
  _DAT_0003c834 = (int)_DAT_0003f598 << 8;
  _DAT_0003c880 = (int)_DAT_0003f59a << 8;
  return;
}
