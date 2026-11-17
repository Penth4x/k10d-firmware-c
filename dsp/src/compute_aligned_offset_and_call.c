/* @k10d compute_aligned_offset_and_call @ 0x000c8796
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes a 4-byte-aligned offset from a base value and a signed index, then passes it
 *   to clamp_value_to_range_000d9ac0.
 * summary:
 *   The function reads a base value from DAT_0003c566 and adjusts it by a multiple of 4
 *   based on the sign and value of param_1, ensuring the result is aligned to a 4-byte
 *   boundary. It selects a second argument (0x40 or 0x48) based on bit 7 of DAT_0003f324.
 *   The final computed offset is passed as the first argument to
 *   clamp_value_to_range_000d9ac0, along with a constant 0x20 and the selected value. The
 *   return value of clamp_value_to_range_000d9ac0 is stored in DAT_0003c484.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_aligned_offset_and_call(int param_1)

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
      uVar3 = uVar1 & 3;
      if ((DAT_0003c566 & 3) == 0) {
        uVar2 = uVar1 - 4;
      }
      else if (uVar3 == 1) {
        uVar2 = uVar1 - 5;
      }
      else if (uVar3 == 2) {
        uVar2 = uVar1 - 6;
      }
      else if (uVar3 == 3) {
        uVar2 = uVar1 - 3;
      }
      uVar3 = uVar2 + ((short)param_1 + 1) * 4;
    }
  }
  else {
    uVar3 = uVar1 & 3;
    if ((DAT_0003c566 & 3) == 0) {
      uVar2 = uVar1 + 4;
    }
    else if (uVar3 == 1) {
      uVar2 = uVar1 + 3;
    }
    else if (uVar3 == 2) {
      uVar2 = uVar1 + 2;
    }
    else if (uVar3 == 3) {
      uVar2 = uVar1 + 5;
    }
    uVar3 = uVar2 + ((short)param_1 + -1) * 4;
  }
  DAT_0003c484 = clamp_value_to_range_000d9ac0((int)(short)uVar3,0x20,uVar4);
  return;
}
