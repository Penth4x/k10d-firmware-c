/* @k10d update_two_axis_pid_loops @ 0x000dbca6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Executes a two-axis PID control step, updating integrator states and output limits
 *   based on error inputs.
 * summary:
 *   The function manages a state machine (DAT_0003c80a) that initializes or steps through a
 *   control sequence. It processes two independent axes (DAT_0003c810 and DAT_0003c812),
 *   calculating error terms relative to targets (DAT_0003f5d8/da). It applies gain scaling
 *   (DAT_0003c838) and updates integrator accumulators (DAT_0003c844/4c) with clamping to
 *   the range [-0x200, 0x1ff]. The caller FUN_000dbc14 likely invokes this periodically for
 *   stabilization or positioning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_two_axis_pid_loops(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_0003c80a < 2) {
    _DAT_0003c80a = _DAT_0003c80a + 1;
    DAT_0003f594 = DAT_0003f594 & 0xfc;
    _DAT_0003f554 = 0;
    _DAT_0003f556 = 0;
  }
  else {
    if (_DAT_0003c80a <= _DAT_0003f394) {
      if (_DAT_0003c80a < _DAT_0003f390) {
        _DAT_0003c838 = (int)_DAT_0003f396;
        _DAT_0003c83c = (int)_DAT_0003f396;
      }
      if (_DAT_0003c80a == _DAT_0003f390) {
        _DAT_0003c838 = (int)_DAT_0003f398;
      }
      if (_DAT_0003c80a == _DAT_0003f392) {
        _DAT_0003c838 = (int)_DAT_0003f39a;
      }
      if (_DAT_0003c80a == _DAT_0003f394) {
        if (DAT_0003c564 < 0x55) {
          _DAT_0003c838 = (int)_DAT_0003f39c << 1;
        }
        else {
          _DAT_0003c838 = (int)_DAT_0003f39c;
        }
      }
      _DAT_0003c80a = _DAT_0003c80a + 1;
    }
    if ((((DAT_0003f594 & 1) == 0) && (_DAT_0003c810 < 0x200)) && (-0x201 < _DAT_0003c810)) {
      DAT_0003f594 = DAT_0003f594 | 1;
    }
    if ((((DAT_0003f594 & 2) == 0) && (_DAT_0003c812 < 0x200)) && (-0x201 < _DAT_0003c812)) {
      DAT_0003f594 = DAT_0003f594 | 2;
    }
    if ((DAT_0003c80f & 0x10) == 0) {
      if ((DAT_0003c80f & 0x20) == 0) {
        _DAT_0003f5d8 = _DAT_0003c810;
        _DAT_0003f5da = _DAT_0003c812;
      }
      else {
        _DAT_0003c810 = divide_two_integers((int)_DAT_0003c810 - (int)_DAT_0003f5d8,4);
        _DAT_0003c812 = divide_two_integers((int)_DAT_0003c812 - (int)_DAT_0003f5da,4);
        _DAT_0003f560 = 1;
        if (DAT_0003f562 < '\x01') {
          _DAT_0003f560 = 2;
        }
        _DAT_0003c810 = divide_two_integers((int)_DAT_0003c810,_DAT_0003f560);
        _DAT_0003c812 = divide_two_integers((int)_DAT_0003c812,(int)_DAT_0003f560);
        _DAT_0003c810 = _DAT_0003f5d8 + _DAT_0003c810;
        _DAT_0003c812 = _DAT_0003f5da + _DAT_0003c812;
      }
    }
    else {
      iVar2 = (int)_DAT_0003c810;
      iVar1 = (int)_DAT_0003f5d8;
      _DAT_0003c810 = divide_two_integers(iVar2 - iVar1,4);
      _DAT_0003c810 = (short)((iVar2 - iVar1) / 2) + _DAT_0003c810;
      iVar2 = (int)_DAT_0003c812;
      iVar1 = (int)_DAT_0003f5da;
      _DAT_0003c812 = divide_two_integers(iVar2 - iVar1,4);
      _DAT_0003c812 = (short)((iVar2 - iVar1) / 2) + _DAT_0003c812;
      _DAT_0003f560 = 1;
      _DAT_0003c810 = divide_two_integers((int)_DAT_0003c810,1);
      _DAT_0003c812 = divide_two_integers((int)_DAT_0003c812,(int)_DAT_0003f560);
      _DAT_0003c810 = _DAT_0003f5d8 + _DAT_0003c810;
      _DAT_0003c812 = _DAT_0003f5da + _DAT_0003c812;
    }
    if ((DAT_0003f594 & 1) != 0) {
      if (0x1ff < _DAT_0003c810) {
        _DAT_0003c810 = 0x1ff;
      }
      if (_DAT_0003c810 < -0x200) {
        _DAT_0003c810 = -0x200;
      }
      if (((DAT_0003f362 & 0x20) == 0) || ((DAT_0003c804 & 4) == 0)) {
        _DAT_0003c840 = divide_two_integers(_DAT_0003c844,_DAT_0003c838);
        _DAT_0003c820 = _DAT_0003c810 * 0x100 - _DAT_0003c840;
        _DAT_0003c844 = _DAT_0003c844 + _DAT_0003c820;
        _DAT_0003f554 = _DAT_0003c810;
      }
      else {
        _DAT_0003f554 = (short)(((int)_DAT_0003f554 + (int)_DAT_0003c810) / 2);
        _DAT_0003c840 = divide_two_integers(_DAT_0003c844,_DAT_0003c838);
        _DAT_0003c820 = _DAT_0003f554 * 0x100 - _DAT_0003c840;
        _DAT_0003c844 = _DAT_0003c844 + _DAT_0003c820;
      }
    }
    if ((DAT_0003f594 & 2) != 0) {
      if (0x1ff < _DAT_0003c812) {
        _DAT_0003c812 = 0x1ff;
      }
      if (_DAT_0003c812 < -0x200) {
        _DAT_0003c812 = -0x200;
      }
      if (((DAT_0003f362 & 0x20) == 0) || ((DAT_0003c804 & 4) == 0)) {
        _DAT_0003c848 = divide_two_integers(_DAT_0003c84c,_DAT_0003c838);
        _DAT_0003c824 = _DAT_0003c812 * 0x100 - _DAT_0003c848;
        _DAT_0003c84c = _DAT_0003c84c + _DAT_0003c824;
        _DAT_0003f556 = _DAT_0003c812;
      }
      else {
        _DAT_0003f556 = (short)(((int)_DAT_0003f556 + (int)_DAT_0003c812) / 2);
        _DAT_0003c848 = divide_two_integers(_DAT_0003c84c,_DAT_0003c838);
        _DAT_0003c824 = _DAT_0003f556 * 0x100 - _DAT_0003c848;
        _DAT_0003c84c = _DAT_0003c84c + _DAT_0003c824;
      }
    }
  }
  return;
}
