/* @k10d dispatch_first_pending_callback @ 0x000cead4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies a function pointer table to the stack and invokes the first non-null entry if a
 *   global flag is set.
 * summary:
 *   The function copies 16 bytes from a global pointer array (PTR_FUN_000faebc) to a local
 *   stack buffer. It checks two global flags (DAT_0003c022 and DAT_0003ce00) to
 *   conditionally set bit 0 of DAT_0003ce80. It then calculates the index of the least
 *   significant set bit in _DAT_0003c334 (using a loop to count trailing zeros) and, if the
 *   index is less than 16, calls the function pointer at that index in the local buffer.
 *   Finally, it clears bit 0 of DAT_0003ce80.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_first_pending_callback(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_50 [17];
  int iVar5;
  
  iVar5 = 0x40;
  do {
    iVar4 = iVar5 + -4;
    bVar1 = 3 < iVar5;
    *(uint32_t *)((int)auStack_50 + iVar5) = *(uint32_t *)((int)&PTR_FUN_000faebc + iVar5);
    iVar5 = iVar4;
  } while (bVar1 && iVar4 != 0);
  if (((DAT_0003c022 & 1) != 0) && ((DAT_0003ce00 & 0xe0) == 0)) {
    DAT_0003ce80 = DAT_0003ce80 | 1;
  }
  uVar3 = 0xffffffff;
  uVar2 = (uint)_DAT_0003c334;
  if (_DAT_0003c334 != 0) {
    do {
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
  }
  if (uVar3 < 0x10) {
    (*(code *)auStack_50[uVar3 + 1])();
  }
  DAT_0003ce80 = DAT_0003ce80 & 0xfe;
  return;
}
