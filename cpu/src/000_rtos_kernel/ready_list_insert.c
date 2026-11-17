/* @k10d ready_list_insert @ 0x1000f534
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed insert_task_into_ready_list)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Inserts a task into the kernel ready list and sets its ready bit in the bitmap.
 * summary:
 *   Takes a task index (param_1), computes its slot in the ready-list array at 0x6a0036d0,
 *   and links it into the list (handling the empty-list case by initializing head/tail
 *   pointers). Sets the corresponding bit in the 64-bit ready bitmap at 0x6a003750. Updates
 *   the task's state fields at 0x6a001be8/0x6a001bea and calls reschedule_raise_dicr
 *   (likely a scheduler notification or context-switch trigger).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ready_list_insert(short param_1)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1 * 0x44;
  uVar3 = (int)*(short *)(iVar1 + 0x6a001c00) - 1;
  iVar4 = uVar3 * 4;
  sVar2 = *(short *)(iVar4 + 0x6a0036d2);
  if (sVar2 == -1) {
    *(short *)(iVar4 + 0x6a0036d0) = param_1;
    *(short *)(iVar4 + 0x6a0036d2) = param_1;
    iVar4 = ((int)uVar3 >> 5) * 4;
    *(uint *)(iVar4 + 0x6a003750) = *(uint *)(iVar4 + 0x6a003750) | 0x80000000U >> (uVar3 & 0x1f);
    _DAT_6a003754 = _DAT_6a003754 | 0x80000000U >> ((int)uVar3 >> 5 & 0x1fU);
  }
  else {
    *(short *)(sVar2 * 0x44 + 0x6a001be8) = param_1;
    *(short *)(iVar4 + 0x6a0036d2) = param_1;
  }
  *(uint16_t *)(iVar1 + 0x6a001be8) = 0xffff;
  *(short *)(iVar1 + 0x6a001bea) = sVar2;
  reschedule_raise_dicr();
  return;
}
