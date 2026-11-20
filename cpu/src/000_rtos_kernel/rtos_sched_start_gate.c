/* @k10d rtos_sched_start_gate @ 0x1000d208
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed rtos_ext_tsk_entry)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Kernel extension task entry that gates on a dispatch condition and either reschedules
 *   or loops calling a registered callback.
 * summary:
 *   Calls rtos_can_dispatch as a gate; if it returns 1, saves registers to the stack and
 *   iterates over a table of function pointers (PTR_DAT_10011cb8) calling each with a fixed
 *   argument, then enters an infinite loop. If the gate fails, it calls mask_26bit, sets a
 *   flag in bRam6a003aa6, writes 0x8000 to _DAT_6a003aa4, and calls reschedule_raise_dicr
 *   to reschedule. The prior notes identify this as the ext_tsk routine in the RTOS kernel
 *   module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtos_sched_start_gate(void)

{
  int iVar1;
  uint32_t caller_r8;
  int iVar2;
  uint32_t caller_r9;
  uint32_t caller_r10;
  uint32_t caller_r11;
  uintptr_t sp;
  uint8_t *puVar3;
  uint32_t uVar4;
  short sStack00000024;
  
  puVar3 = &stack0xfffffff8;
  uVar4 = 0x1000d214/*ROM*/;
  iVar1 = rtos_can_dispatch();
  if (iVar1 != 1) {
    mask_26bit((uint)_DAT_6a003758);
    if (sStack00000024 != 0) {
      bRam6a003aa6 = bRam6a003aa6 | 0x80;
    }
    _DAT_6a003aa4 = 0x8000;
    reschedule_raise_dicr();
    return;
  }
  *(uint32_t *)(puVar3 + -4) = uVar4;
  *(uint32_t *)(puVar3 + -8) = caller_r11;
  *(uint32_t *)(puVar3 + -0xc) = caller_r10;
  *(uint32_t *)(puVar3 + -0x10) = caller_r9;
  *(uint32_t *)(puVar3 + -0x14) = caller_r8;
  iVar1 = 0;
  if (0 < DAT_10011d18/*ROM*/) {
    iVar2 = 0;
    do {
      (((vtbl_entry*)((char*)PTR_DAT_10011cb8 + iVar2))[1].fn)(1,0,0,*(uint32_t *)((char*)PTR_DAT_10011cb8 + 4));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < DAT_10011d18/*ROM*/);
  }
  __halt();
}
