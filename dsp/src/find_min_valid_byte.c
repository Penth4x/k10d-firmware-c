/* @k10d find_min_valid_byte @ 0x000d9a42
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies 16 bytes from a fixed table into a local buffer and returns the minimum value
 *   among entries 1-15 that are less than entry 0 and not 0xff.
 * summary:
 *   The function first initializes a 16-byte local buffer from DAT_000fc10b. It then
 *   overwrites the buffer with 16 bytes from either 0x3c6c0 or 0x3c6d0 depending on whether
 *   param_1 is 2. Finally, it scans indices 1 through 15 to find the smallest value that is
 *   not 0xff and is less than the value at index 0, updating index 0 with this minimum and
 *   returning it. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ushort find_min_valid_byte(int param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t uStack_25;
  ushort local_24 [16];
  
  iVar3 = 0x20;
  do {
    iVar4 = iVar3 + -1;
    bVar2 = 0 < iVar3;
    *(uint8_t *)((int)local_24 + iVar3 + -1) = (&DAT_000fc10b)[iVar3];
    iVar3 = iVar4;
  } while (bVar2 && iVar4 != 0);
  iVar3 = 0;
  do {
    if (param_1 == 2) {
      local_24[iVar3] = (ushort)*(byte *)(iVar3 + 0x3c6d0);
    }
    else {
      local_24[iVar3] = (ushort)*(byte *)(iVar3 + 0x3c6c0);
    }
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x10);
  iVar3 = 1;
  do {
    uVar1 = local_24[iVar3];
    if ((uVar1 != 0xff) && (uVar1 < local_24[0])) {
      local_24[0] = uVar1;
    }
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x10);
  return local_24[0];
}
