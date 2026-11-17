/* @k10d task_exit_stub @ 0x1000d4be
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed task_termination_handler)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Invokes a cleanup callback for each registered item and then enters an infinite loop to
 *   terminate the task.
 * summary:
 *   Calls rtos_sched_start_gate, then iterates through a table at PTR_DAT_10011cb8 up to
 *   the count in DAT_10011d18, calling a virtual-like function pointer for each entry.
 *   Finally, it enters an infinite loop, consistent with a task termination handler in a
 *   µITRON/REALOS kernel context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void task_exit_stub(void)

{
  uint32_t caller_r8;
  int iVar1;
  uint32_t caller_r9;
  int iVar2;
  uint32_t caller_r10;
  uint32_t caller_r11;
  uintptr_t sp;
  uint32_t caller_retaddr;
  
  rtos_sched_start_gate();
  *(uint32_t *)((int)sp + -4) = caller_retaddr;
  *(uint32_t *)((int)sp + -8) = caller_r11;
  *(uint32_t *)((int)sp + -0xc) = caller_r10;
  *(uint32_t *)((int)sp + -0x10) = caller_r9;
  *(uint32_t *)((int)sp + -0x14) = caller_r8;
  iVar2 = 0;
  if (0 < DAT_10011d18/*ROM*/) {
    iVar1 = 0;
    do {
      (**(code **)(PTR_DAT_10011cb8 + iVar1 + 8))(1,0,0,*(uint32_t *)(PTR_DAT_10011cb8 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < DAT_10011d18/*ROM*/);
  }
  __halt();
}
