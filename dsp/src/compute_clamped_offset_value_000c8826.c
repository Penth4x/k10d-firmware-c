/* @k10d compute_clamped_offset_value_000c8826 @ 0x000c8826
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a clamped byte value from param_1 and DAT_0003c566, storing the result in
 *   DAT_0003c484.
 * summary:
 *   The function branches on the sign of param_1. For positive values it adds a small
 *   offset (1-4) to DAT_0003c566 based on its low 3 bits, then adds a lookup value from a
 *   table near 0x000fa1e8, and clamps the result to a maximum defined by DAT_0003f324 (0x40
 *   or 0x48). For negative values it performs a similar subtraction and lookup, clamping
 *   the result to a minimum of 0x20. The final value is stored as a signed char in
 *   DAT_0003c484. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_clamped_offset_value_000c8826(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((DAT_0003f324 & 0x80) == 0) {
    uVar3 = 0x40;
  }
  else {
    uVar3 = 0x48;
  }
  uVar1 = (uint)DAT_0003c566;
  if (param_1 < 1) {
    if (param_1 < 0) {
      uVar3 = uVar1 & 7;
      if ((DAT_0003c566 & 7) == 0) {
        uVar1 = uVar1 - 3;
      }
      else if (uVar3 == 1) {
        uVar1 = uVar1 - 4;
      }
      else if (uVar3 == 2) {
        uVar1 = uVar1 - 2;
      }
      else if (uVar3 == 3) {
        uVar1 = uVar1 - 3;
      }
      else if (uVar3 == 4) {
        uVar1 = uVar1 - 1;
      }
      else if (uVar3 == 5) {
        uVar1 = uVar1 - 2;
      }
      else if (uVar3 == 6) {
        uVar1 = uVar1 - 3;
      }
      else if (uVar3 == 7) {
        uVar1 = uVar1 - 2;
      }
      param_1 = -param_1;
      uVar3 = uVar1 & 7;
      if (uVar3 == 3) {
        uVar3 = (uint)*(byte *)((int)&DAT_000fa1e8 + param_1 + 3);
      }
      else if (uVar3 == 0) {
        uVar3 = (uint)(byte)(&DAT_000fa1f1)[param_1];
      }
      else if (uVar3 == 5) {
        uVar3 = (uint)(byte)(&DAT_000fa1f7)[param_1];
      }
      else {
        uVar3 = 0;
      }
      uVar1 = uVar1 - uVar3;
      if (uVar1 < 0x20) {
        uVar1 = 0x20;
      }
    }
  }
  else {
    uVar2 = uVar1 & 7;
    if ((DAT_0003c566 & 7) == 0) {
      uVar1 = uVar1 + 3;
    }
    else if (uVar2 == 1) {
      uVar1 = uVar1 + 2;
    }
    else if (uVar2 == 2) {
      uVar1 = uVar1 + 3;
    }
    else if (uVar2 == 3) {
      uVar1 = uVar1 + 2;
    }
    else if (uVar2 == 4) {
      uVar1 = uVar1 + 4;
    }
    else if (uVar2 == 5) {
      uVar1 = uVar1 + 3;
    }
    else if (uVar2 == 6) {
      uVar1 = uVar1 + 2;
    }
    else if (uVar2 == 7) {
      uVar1 = uVar1 + 4;
    }
    if ((uVar1 & 7) == 3) {
      uVar2 = (uint)(byte)(&DAT_000fa1f7)[param_1];
    }
    else if ((uVar1 & 7) == 0) {
      uVar2 = (uint)(byte)(&DAT_000fa1f1)[param_1];
    }
    else if ((uVar1 & 5) == 5) {
      uVar2 = (uint)*(byte *)((int)&DAT_000fa1e8 + param_1 + 3);
    }
    else {
      uVar2 = 0;
    }
    uVar1 = uVar1 + uVar2;
    if (uVar3 < uVar1) {
      uVar1 = uVar3;
    }
  }
  DAT_0003c484 = (char)uVar1;
  return;
}
