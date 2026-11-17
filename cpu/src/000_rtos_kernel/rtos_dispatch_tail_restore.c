/* @k10d rtos_dispatch_tail_restore @ 0x1000d032
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed restore_task_context_and_dispatch)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Restores a task's saved context from a TCB, updates scheduler state, and triggers a
 *   context switch.
 * summary:
 *   The function reads a task control block (TCB) pointer from r13 and restores register
 *   values (likely PC/SP) into the context structure. It checks a global flag at 0x6a001c0a
 *   and a value at 0x6a001c24 to conditionally update a function pointer at offset 0x2c in
 *   the TCB. It then manipulates a queue or list structure at 0x6a003778, clearing entries
 *   with specific negative values (-0x31, -0x32, -0x33), and finally calls
 *   lens_fw_update_stub_1053708a, which likely performs the actual context switch or task
 *   activation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtos_dispatch_tail_restore(void)

{
  int caller_r10;
  int iVar1;
  uint32_t r13_in;
  int *piVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  uint32_t *puVar5;
  uint32_t uVar6;
  
  puVar4 = *(uint32_t **)r13_in;
  puVar4[1] = puVar4[1];
  *puVar4 = *puVar4;
  uVar6 = *puVar4;
  puVar5 = puVar4 + 0xc;
  if ((*(char *)(caller_r10 * 0x44 + 0x6a001c0a) == '\0') &&
     (*(int *)(caller_r10 * 0x44 + 0x6a001c24) != 0)) {
    puVar4[0xb] = puVar4[0xd] & 0xffffffef;
    puVar5 = puVar4 + 10;
    puVar4[10] = (uint32_t)rtos_context_switch;
  }
  *DAT_10011c5c/*ROM*/ = 0;
  uVar3 = puVar5[5];
  puVar5[5] = puVar5[4];
  puVar5[4] = puVar5[3];
  puVar5[3] = puVar5[2];
  puVar5[2] = puVar5[1];
  piVar2 = (int *)((uint)_DAT_6a003758 * 4 + 0x6a003778);
  iVar1 = *piVar2;
  if (((iVar1 == -0x33) || (iVar1 == -0x31)) || (iVar1 == -0x32)) {
    *piVar2 = 0;
  }
  puVar5[5] = uVar6;
  puVar5[4] = uVar3;
  lens_fw_update_stub_1053708a();
  return;
}
