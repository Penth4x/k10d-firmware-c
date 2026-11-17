/* @k10d decode_packed_nibble_value @ 0x1053b70a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Decodes a value from a packed nibble stream and validates it against a range.
 * summary:
 *   The function iterates up to param_3 times, reading packed 4-bit values from a buffer
 *   pointed to by *(param_2 + 0xc). It accumulates these nibbles into a 16-bit value
 *   (uVar5) using a specific bit-shifting pattern. It then checks if this decoded value
 *   falls within a range defined by fields at param_1+0x4c and param_1+0x50. If valid, it
 *   stores the iteration count and the decoded value into param_4 and returns 0; otherwise,
 *   it returns an error code (0xfffffc70).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t decode_packed_nibble_value(int param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  uint uStack_10;
  
  iVar6 = *(int *)((int)param_2 + 0xc);
  uStack_10 = 0;
  uVar2 = *param_4;
  do {
    uStack_10 = uStack_10 + 1;
    iVar3 = uVar2 + (uVar2 >> 1);
    if ((uVar2 & 1) == 0) {
      uVar5 = (uint)*(byte *)(iVar3 + iVar6);
      uVar1 = (*(byte *)(iVar3 + 1 + iVar6) & 0xf) << 8;
    }
    else {
      uVar1 = (int)(*(byte *)(iVar3 + iVar6) & 0xf0) >> 4;
      uVar5 = (uint)*(byte *)(iVar3 + 1 + iVar6) << 4;
    }
    uVar5 = uVar5 | uVar1;
  } while ((uVar2 + 1 == uVar5) && (uVar2 = uVar5, uStack_10 < param_3));
  if ((uVar5 < 2) || ((*(uint *)(param_1 + 0x4c) < uVar5 && (uVar5 <= *(uint *)(param_1 + 0x50)))))
  {
    uVar4 = 0xfffffc70;
  }
  else {
    param_4[1] = uStack_10;
    param_4[2] = uVar5;
    uVar4 = 0;
  }
  return uVar4;
}
