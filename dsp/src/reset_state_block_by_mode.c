/* @k10d reset_state_block_by_mode @ 0x000e098a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears a block of state variables based on the value of param_1.
 * summary:
 *   The function branches on param_1 (0, 1, 2, or other) to selectively zero out or modify
 *   a series of global variables in the 0x0003c1xx range. It performs bitwise operations on
 *   _DAT_0003c122 and _DAT_0003c126 and sets _DAT_0003c12a, _DAT_0003c12c, and others to
 *   zero. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_state_block_by_mode(int param_1)

{
  ushort uVar1;
  uint8_t uVar2;
  
  uVar1 = _DAT_0003c126;
  if (param_1 == 1) {
    _DAT_0003c122 = 0;
  }
  else {
    _DAT_0003c124 = _DAT_0003c126;
    _DAT_0003c126 = 0;
    if (param_1 == 0) {
      _DAT_0003c122 = _DAT_0003c122 & 0xff01;
      if ((uVar1 & 0x11ff) != 8) {
        _DAT_0003c12a = 0;
      }
    }
    else {
      if (param_1 == 2) {
        _DAT_0003c122 = 0;
      }
      else {
        _DAT_0003c126 = 4;
        if ((uVar1 & 0x80) == 0) {
          uVar2 = 2;
        }
        else {
          uVar2 = 4;
        }
        _DAT_0003c122 = CONCAT11(DAT_0003c122,uVar2);
      }
      _DAT_0003c12a = 0;
    }
    if ((_DAT_0003c142 & 0x40) == 0) {
      DAT_0003c128 = 0;
    }
    _DAT_0003c12c = 0;
    _DAT_0003c12e = 0;
    _DAT_0003c130 = 0;
    _DAT_0003c132 = 0;
  }
  if (param_1 != 0) {
    DAT_0003c107 = 0;
    DAT_0003c110 = 0xff;
    DAT_0003c113 = 0;
    DAT_0003c114 = 0;
    if ((_DAT_0003c124 & 0x11ff) != 8) {
      DAT_0003c115 = 0;
      _DAT_0003c116 = 0;
    }
    _DAT_0003c118 = 0;
    _DAT_0003c11a = 0;
    _DAT_0003c11c = 0;
    _DAT_0003c11e = 0;
    _DAT_0003c142 = 0;
  }
  return;
}
