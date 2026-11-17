/* @k10d compute_and_store_offset @ 0x000c86c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calculates an 8-byte aligned offset from a base value and stores the result of a callee
 *   call.
 * summary:
 *   The function reads a base value from DAT_0003c566 and adjusts it by param_1 * 8,
 *   ensuring alignment to an 8-byte boundary. It selects a second argument (0x40 or 0x48)
 *   based on bit 7 of DAT_0003f324. The final computed offset is passed to
 *   clamp_value_to_range_000d9ac0 along with a constant 0x20, and the return value is
 *   stored in DAT_0003c484.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_store_offset(int param_1)

{
  ushort uVar1;
  ushort uVar3;
  uint32_t uVar4;
  ushort uVar2;
  
  if ((DAT_0003f324 & 0x80) == 0) {
    uVar4 = 0x40;
  }
  else {
    uVar4 = 0x48;
  }
  uVar1 = (ushort)DAT_0003c566;
  uVar2 = (ushort)DAT_0003c566;
  uVar3 = (ushort)DAT_0003c566;
  if (param_1 < 1) {
    if (param_1 < 0) {
      uVar3 = uVar1 & 7;
      if ((DAT_0003c566 & 7) == 0) {
        uVar2 = uVar1 - 8;
      }
      else if (uVar3 == 1) {
        uVar2 = uVar1 - 9;
      }
      else if (uVar3 == 2) {
        uVar2 = uVar1 - 10;
      }
      else if (uVar3 == 3) {
        uVar2 = uVar1 - 0xb;
      }
      else if (uVar3 == 4) {
        uVar2 = uVar1 - 0xc;
      }
      else if (uVar3 == 5) {
        uVar2 = uVar1 - 5;
      }
      else if (uVar3 == 6) {
        uVar2 = uVar1 - 6;
      }
      else if (uVar3 == 7) {
        uVar2 = uVar1 - 7;
      }
      uVar3 = uVar2 + ((short)param_1 + 1) * 8;
    }
  }
  else {
    uVar3 = uVar1 & 7;
    if ((DAT_0003c566 & 7) == 0) {
      uVar2 = uVar1 + 8;
    }
    else if (uVar3 == 1) {
      uVar2 = uVar1 + 7;
    }
    else if (uVar3 == 2) {
      uVar2 = uVar1 + 6;
    }
    else if (uVar3 == 3) {
      uVar2 = uVar1 + 5;
    }
    else if (uVar3 == 4) {
      uVar2 = uVar1 + 4;
    }
    else if (uVar3 == 5) {
      uVar2 = uVar1 + 0xb;
    }
    else if (uVar3 == 6) {
      uVar2 = uVar1 + 10;
    }
    else if (uVar3 == 7) {
      uVar2 = uVar1 + 9;
    }
    uVar3 = uVar2 + ((short)param_1 + -1) * 8;
  }
  DAT_0003c484 = clamp_value_to_range_000d9ac0((int)(short)uVar3,0x20,uVar4);
  return;
}
