/* @k10d rtos_dispatch_entry @ 0x1000d268
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed kernel_context_switch)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Saves the current task context, dispatches to the next ready task via the kernel
 *   dispatcher, and restores the new task's context.
 * summary:
 *   The function performs a full context save of the FR60Lite registers (r0-r15, usp, mdh,
 *   mdl) onto the stack. It updates the task control block (TCB) at DAT_6a003774 with the
 *   saved stack pointer and status flags, then calls the dispatcher (in_r12) to select the
 *   next task. Finally, it restores the new task's registers and returns, effectively
 *   switching execution to the new task.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtos_dispatch_entry(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t r0_in;
  uint32_t r1_in;
  uint32_t r2_in;
  uint32_t r3_in;
  uint32_t uVar1;
  uint32_t extraout_r5;
  uint32_t caller_r8;
  uint32_t caller_r9;
  uint32_t caller_r10;
  uint32_t caller_r11;
  code *r12_in;
  uint32_t r13_in;
  uint uVar2;
  byte *pbVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint32_t *puVar5;
  uint32_t *puVar6;
  uint in_ps;
  uint32_t uVar7;
  uint32_t *in_usp;
  uint32_t in_mdl;
  uint32_t in_mdh;
  byte bVar8;
  byte bVar9;
  
  bVar9 = 0;
  bVar8 = 0;
  puVar5 = (uint32_t *)&stack0xfffffff8;
  uVar1 = return_r4_passthrough_1053706c();
  uVar7 = puVar5[1];
  puVar5[1] = *puVar5;
  pbVar3 = (byte *)((int)puVar5 + 0xd);
  *pbVar3 = *pbVar3 ^ 0xf;
  if ((*pbVar3 & 0xf) == 0) {
    in_ps = in_ps & 0xffe0ffff | 0x1e0000;
  }
  *pbVar3 = *pbVar3 ^ 0xf;
  if ((*(byte *)((int)puVar5 + 0xf) & 0x10) != 0) {
    bVar9 = (bVar9 & 1) != 0;
    bVar8 = 1;
  }
  uVar4 = puVar5[1];
  puVar5[1] = in_mdh;
  *puVar5 = in_mdl;
  puVar5[-1] = uVar7;
  puVar5[-2] = uVar4;
  puVar5[-3] = r13_in;
  puVar5[-4] = (uintptr_t)(r12_in);
  puVar5[-5] = caller_r11;
  puVar5[-6] = caller_r10;
  puVar5[-7] = caller_r9;
  puVar5[-8] = caller_r8;
  puVar5[-9] = param_4;
  puVar5[-10] = param_3;
  puVar5[-0xb] = extraout_r5;
  puVar5[-0xc] = uVar1;
  puVar5[-0xd] = r3_in;
  puVar5[-0xe] = r2_in;
  puVar5[-0xf] = r1_in;
  puVar5[-0x10] = r0_in;
  *(uint8_t *)(DAT_10011c60/*ROM*/ + 0x2f) = 0x1e;
  if ((puVar5[3] & 0x20) == 0) {
    uVar1 = puVar5[4];
  }
  else {
    uVar1 = *in_usp;
  }
  puVar5[-0x11] = _DAT_6a003774;
  puVar5[-0x12] = (uintptr_t)(&DAT_6a003774);
  puVar6 = puVar5 + -0x13;
  puVar5[-0x13] = uVar1;
  _DAT_6a003774 = (uintptr_t)(puVar5 + -0x10);
  (*r12_in)();
  **(uint32_t **)((int)puVar6 + 4) = *(uint32_t *)((int)puVar6 + 8);
  uVar2 = *(uint *)((int)puVar6 + 0x58) & 0x1f0030;
  if (uVar2 == 0x1f0030) {
    bVar9 = (bVar9 & 1) != 0;
    bVar8 = 0;
    *(uint8_t *)(DAT_10011c60/*ROM*/ + 0x2f) = 0x10;
  }
  *(uint32_t *)((int)puVar6 + 0x50) = *(uint32_t *)((int)puVar6 + 0x48);
  *(uint32_t *)((int)puVar6 + 0x4c) = *(uint32_t *)((int)puVar6 + 0x44);
  *(uint *)((int)puVar6 + 0x48) =
       in_ps & 0xffffffc0 | (uint)(bVar9 & 1) * 0x20 | (uint)(bVar8 & 1) * 0x10 |
       (uint)((int)(uVar2 - 0x1f0030) < 0) * 8 | (uint)(uVar2 == 0x1f0030) * 4 |
       (uint)SBORROW4(uVar2,0x1f0030) * 2 | (uint)(uVar2 < 0x1f0030);
  empty_lens_update_stub_10537076();
  return;
}
