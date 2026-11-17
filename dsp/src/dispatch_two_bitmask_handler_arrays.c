/* @k10d dispatch_two_bitmask_handler_arrays @ 0x000f0fa4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Selects and invokes one function from each of two 16-entry and 8-entry pointer arrays
 *   based on the lowest set bit of two global counters.
 * summary:
 *   The function copies two arrays of function pointers (16 and 8 entries) onto the stack.
 *   It then computes the index of the lowest set bit for _DAT_0003c338 and _DAT_0003c33c
 *   using a right-shift loop. If the resulting index is within the array bounds, it calls
 *   the corresponding function pointer. No other side effects or MMIO operations are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_two_bitmask_handler_arrays(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t auStack_70 [25];
  
  iVar5 = 0x40;
  do {
    iVar4 = iVar5 + -4;
    bVar1 = 3 < iVar5;
    *(uint32_t *)((int)auStack_70 + iVar5) = *(uint32_t *)((int)&PTR_caseD_5_000fc7b8 + iVar5);
    iVar5 = iVar4;
  } while (bVar1 && iVar4 != 0);
  iVar5 = 0x20;
  do {
    iVar4 = iVar5 + -4;
    bVar1 = 3 < iVar5;
    *(uint32_t *)((int)auStack_70 + iVar5 + 0x40) =
         *(uint32_t *)((int)&PTR_FUN_000fc7f8 + iVar5);
    iVar5 = iVar4;
  } while (bVar1 && iVar4 != 0);
  uVar3 = 0xffffffff;
  uVar2 = (uint)_DAT_0003c338;
  if (_DAT_0003c338 != 0) {
    do {
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
  }
  if (uVar3 < 0x10) {
    (*(code *)auStack_70[uVar3 + 1])();
  }
  uVar3 = 0xffffffff;
  uVar2 = (uint)_DAT_0003c33c;
  if (_DAT_0003c33c != 0) {
    do {
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
  }
  if (uVar3 < 8) {
    (*(code *)auStack_70[uVar3 + 0x11])();
  }
  return;
}
