/* @k10d count_valid_entries_in_array @ 0x000d98ea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Iterates over a 16-element short array, counting entries within a range and setting a
 *   bitmask for out-of-range values.
 * summary:
 *   The function checks a global flag (DAT_0003c6f7) and, if clear, processes 16 short
 *   values from param_1. It counts how many values fall between (DAT_0003c6f4 - 0x30) and
 *   param_2 (adjusted by param_3). Values outside this range set bits in the return value.
 *   If fewer than 3 values are valid, it sets the global flag and returns 0. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint count_valid_entries_in_array(int param_1,short param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  uVar1 = 0;
  if ((DAT_0003c6f7 & 1) == 0) {
    if (param_3 == 1) {
      param_2 = (ushort)DAT_0003c6f4 + param_2;
    }
    else {
      param_2 = DAT_0003c6f4 + 0x18;
    }
    sVar4 = 0;
    iVar2 = 0;
    do {
      iVar3 = iVar2 * 2;
      if (*(short *)(iVar3 + param_1) != 0xff) {
        if (((short)(DAT_0003c6f4 - 0x30) < *(short *)(iVar3 + param_1)) &&
           (*(short *)(iVar3 + param_1) <= param_2)) {
          sVar4 = sVar4 + 1;
        }
        else {
          uVar1 = uVar1 | 1 << ((byte)iVar2 & 0xf) & 0xffffU;
        }
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 0x10);
    if ((sVar4 < 3) || (sVar4 == 0)) {
      DAT_0003c6f7 = DAT_0003c6f7 | 1;
      uVar1 = 0;
    }
  }
  return uVar1;
}
