/* @k10d compute_position_delta @ 0x000ccec2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Calculates a clamped difference between a new position value and a stored previous
 *   position.
 * summary:
 *   The function compares param_1 against a stored value in _DAT_0003ce5e. If a state flag
 *   in DAT_0003ce01 indicates a specific mode, it calls clamp_shifted_value_to_16_bits with
 *   the difference and the current value from _DAT_0003ce0e, then right-shifts the result
 *   by a variable amount stored in DAT_0003cd56. It updates an accumulator in _DAT_0003ce5c
 *   based on the sign of the difference and a flag in DAT_0003ce02. Finally, it stores the
 *   new position in _DAT_0003ce5e and returns the clamped result (max 0x7fff).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_position_delta(uint param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (((DAT_0003ce01 & 1) == 0) || ((DAT_0003ce01 & 0x10) != 0)) {
    _DAT_0003ce0e = _DAT_0003c134;
    if (param_1 == _DAT_0003cc6a) {
      DAT_0003ce0b = 0;
      _DAT_0003ce0c = _DAT_0003c134;
      _DAT_0003ce1e = (short)param_1;
    }
  }
  else {
    uVar3 = (uint)_DAT_0003ce5e;
    uVar2 = clamp_shifted_value_to_16_bits(uVar3 - param_1);
    uVar2 = uVar2 >> (DAT_0003cd56 & 0x1f);
    sVar1 = (short)(uVar3 - param_1);
    if ((DAT_0003ce02 & 0x10) == 0) {
      _DAT_0003ce5c = _DAT_0003ce5c - sVar1;
      if (_DAT_0003ce5c < 0) {
        if (0 < _DAT_0003ce5a) {
          _DAT_0003ce5a = _DAT_0003ce5a - _DAT_0003ce5c;
        }
        _DAT_0003ce5c = 0;
      }
    }
    else {
      _DAT_0003ce5c = _DAT_0003ce5c + sVar1;
    }
  }
  _DAT_0003ce5e = (short)param_1;
  if ((int)uVar2 < 0) {
    uVar2 = 0x7fff;
  }
  return uVar2;
}
