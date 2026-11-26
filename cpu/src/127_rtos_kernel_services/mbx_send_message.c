/* @k10d mbx_send_message @ 0x10459864
 * name: verified (structural evidence: decomp + emulator trace: the message is delivered to the CPUCOM task blocked in mbx_receive_message)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x18-byte message, packs a 32-bit payload at +8 and a 16-bit code at +4,
 *   sends it to the mailbox whose id is *param_1 via the kernel service at TBR+0x2fc; frees
 *   it if the send fails.
 * summary:
 *   VERIFIED: decomp + emulator trace: the message is delivered to the CPUCOM task blocked
 *   in mbx_receive_message
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

int mbx_send_message(uint32_t *param_1,void *param_2,uint32_t param_3)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (uint32_t *)heap_alloc((void *)0x18);
  iVar3 = 0;
  if (puVar1 != (uint32_t *)0x0) {
    *(char *)(puVar1 + 2) = (char)param_2;
    *(char *)((int)puVar1 + 9) = (char)((uint)param_2 >> 8);
    *(char *)((int)puVar1 + 10) = (char)((uint)param_2 >> 0x10);
    *(char *)((int)puVar1 + 0xb) = (char)((uint)param_2 >> 0x18);
    /* B-10 FIX (d327): the original stores (uint16_t)param_3 directly at msg+4 as the message
     * PRIORITY (disasm 0x104598b0: `sth r11,@(r8+4)`, r11=param_3, NO shift). The decompiler
     * emitted a spurious `(uint64_t)param_3 >> 16`, so the recompiled build wrote priority 0
     * (param_3 is a small code like 2). For a priority-ordered mailbox (e.g. mbx 2, attr TA_MPRI)
     * the kernel rejects priority 0 with E_PAR (-17): snd_mbx FAILS, the message never reaches
     * its pump, and the whole event-dispatch cascade stalls -> black screen. Store param_3 as-is. */
    *(uint16_t *)(puVar1 + 1) = (uint16_t)param_3;
    *puVar1 = 0;
    iVar2 = __trap_insert_into_timeout_queue_10010c18((int)(short)*param_1,puVar1);
    iVar3 = 1;
    if (iVar2 != 0) {
      iVar3 = 0;
    }
  }
  if (iVar3 == 0) {
    heap_free((int)puVar1);
  }
  return iVar3;
}
