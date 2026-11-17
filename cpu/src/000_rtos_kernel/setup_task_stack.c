/* @k10d setup_task_stack @ 0x1000e66c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed initialize_task_stack_frame)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes a task's initial stack pointer from its stack base and size, stores it in a
 *   per-task array, and initializes the stack frame via a callee.
 * summary:
 *   The function takes a task index (param_1) and a size/offset (param_2). It calculates an
 *   offset (index * 0x44) into a task control block array at 0x6a001bf8, reads the stack
 *   base and size, and computes the initial stack pointer (base + size - 0x50). This
 *   pointer is stored in an array at 0x6a0018c0. Finally, it calls task_frame_init with the
 *   stack base, the computed initial pointer, and param_2, likely to set up the initial
 *   register context (PSW, etc.) on the stack. This is consistent with a task creation or
 *   activation routine in a µITRON-like RTOS.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void setup_task_stack(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t *puVar2;
  
  iVar1 = (short)param_1 * 0x44;
  puVar2 = (uint32_t *)(*(int *)(iVar1 + 0x6a001bf8) + *(int *)(iVar1 + 0x6a001bfc) + -0x50);
  *(uint32_t **)(&DAT_6a0018c0 + param_1 * 4) = puVar2;
  task_frame_init(*(uint32_t *)(iVar1 + 0x6a001bf4),puVar2,param_2);
  return;
}
