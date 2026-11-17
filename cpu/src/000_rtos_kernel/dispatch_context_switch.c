/* @k10d dispatch_context_switch @ 0x1000d0e6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Updates task control block state and invokes the kernel context switch routine.
 * summary:
 *   The function writes a value to a pointer in r9, manipulates a structure at an address
 *   derived from r13 and DAT_6a0018c0, and conditionally sets a function pointer to
 *   rtos_context_switch. It clears a global at DAT_10011c5c, shifts values within the
 *   structure, and checks a value at an address derived from _DAT_6a003758 against specific
 *   negative constants (-0x31, -0x32, -0x33) before calling lens_fw_update_stub_1053708a.
 *   The module context indicates this is part of the RTOS kernel scheduler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_context_switch(void)

{
  uint16_t *caller_r9;
  int iVar1;
  int caller_r10;
  int *piVar2;
  int r13_in;
  uint32_t uVar3;
  uint32_t *puVar4;
  uint32_t *puVar5;
  uint32_t uVar6;
  
  *caller_r9 = (short)r13_in;
  puVar4 = *(uint32_t **)(&DAT_6a0018c0 + r13_in * 4);
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
