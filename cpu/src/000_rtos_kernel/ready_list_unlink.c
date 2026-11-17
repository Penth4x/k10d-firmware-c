/* @k10d ready_list_unlink @ 0x1000f5b4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed unlink_task_from_ready_list)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Removes a task from its priority ready-list, clears the priority's ready bit if the
 *   list becomes empty, and triggers a reschedule.
 * summary:
 *   The function takes a task index (param_1), computes its TCB address (index * 0x44), and
 *   reads the task's priority (offset 0x18) and its current next/prev pointers (offsets
 *   0x1e/0x20). It patches the doubly-linked list by updating the head/tail pointers at
 *   0x6a0036d0/0x6a0036d2 or the neighboring task's pointers. If the priority list becomes
 *   empty, it clears the corresponding bit in the ready bitmap at 0x6a003750. Finally, it
 *   calls reschedule_raise_dicr, which likely performs the scheduler's reschedule or
 *   context switch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ready_list_unlink(short param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = param_1 * 0x44;
  iVar3 = (int)*(short *)(iVar6 + 0x6a001c00);
  sVar1 = *(short *)(iVar6 + 0x6a001be8);
  sVar2 = *(short *)(iVar6 + 0x6a001bea);
  if (sVar1 == -1) {
    *(short *)((iVar3 + -1) * 4 + 0x6a0036d2) = sVar2;
  }
  else {
    *(short *)(sVar1 * 0x44 + 0x6a001bea) = sVar2;
  }
  if (sVar2 == -1) {
    *(short *)((iVar3 + -1) * 4 + 0x6a0036d0) = sVar1;
  }
  else {
    *(short *)(sVar2 * 0x44 + 0x6a001be8) = sVar1;
  }
  uVar4 = iVar3 - 1;
  if (*(short *)(uVar4 * 4 + 0x6a0036d2) == -1) {
    iVar6 = ((int)uVar4 >> 5) * 4;
    uVar5 = *(uint *)(iVar6 + 0x6a003750) & (0x80000000U >> (uVar4 & 0x1f) ^ 0xffffffff);
    *(uint *)(iVar6 + 0x6a003750) = uVar5;
    if (uVar5 == 0) {
      _DAT_6a003754 = _DAT_6a003754 & (0x80000000U >> ((int)uVar4 >> 5 & 0x1fU) ^ 0xffffffff);
    }
  }
  reschedule_raise_dicr();
  return;
}
