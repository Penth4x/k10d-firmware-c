/* @k10d restore_interrupt_stack_frame @ 0x1000d04a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Restores the saved interrupt stack frame and clears a pending flag before returning to
 *   the interrupted context.
 * summary:
 *   The function manipulates a stack frame pointer (in_r15) by shifting saved values down
 *   and restoring the return address, consistent with interrupt or exception return
 *   handling. It clears a global flag at DAT_10011c5c and conditionally sets up a
 *   trampoline to rtos_context_switch based on state in unaff_r10. It also checks a value
 *   at 0x6a003778 for specific negative codes (-0x31, -0x32, -0x33) and clears it if
 *   matched. Finally, it calls lens_fw_update_stub_1053708a, likely a kernel service or
 *   context switch routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void restore_interrupt_stack_frame(void)

{
  int caller_r10;
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t caller_retaddr;
  uint in_stack_00000004;
  code *pcStack_8;
  uint uStack_4;
  
  if ((*(char *)(caller_r10 * 0x44 + 0x6a001c0a) == '\0') &&
     (*(int *)(caller_r10 * 0x44 + 0x6a001c24) != 0)) {
    uStack_4 = in_stack_00000004 & 0xffffffef;
    sp = (uintptr_t)&pcStack_8;
    pcStack_8 = (code *)rtos_context_switch;
  }
  *DAT_10011c5c/*ROM*/ = 0;
  uVar3 = *(uint32_t *)((int)sp + 0x14);
  *(uint32_t *)((int)sp + 0x14) = *(uint32_t *)((int)sp + 0x10);
  *(uint32_t *)((int)sp + 0x10) = *(uint32_t *)((int)sp + 0xc);
  *(uint32_t *)((int)sp + 0xc) = *(uint32_t *)((int)sp + 8);
  *(uint32_t *)((int)sp + 8) = *(uint32_t *)((int)sp + 4);
  piVar2 = (int *)((uint)_DAT_6a003758 * 4 + 0x6a003778);
  iVar1 = *piVar2;
  if (((iVar1 == -0x33) || (iVar1 == -0x31)) || (iVar1 == -0x32)) {
    *piVar2 = 0;
  }
  *(uint32_t *)((int)sp + 0x14) = caller_retaddr;
  *(uint32_t *)((int)sp + 0x10) = uVar3;
  lens_fw_update_stub_1053708a();
  return;
}
