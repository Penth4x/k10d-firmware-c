/* @k10d check_heap_alloc_success @ 0x10459400
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Validates that a heap allocation request is positive and returns true if the underlying
 *   allocator succeeds.
 * summary:
 *   Checks that both the pointer to the size and the size itself are positive. If valid, it
 *   calls store_value_in_kernel_table_slot with the size (cast to short) and returns true
 *   if the callee returns 0. Given the module context (rtos_wrappers_and_heap), this is
 *   likely a wrapper around a heap allocation or memory check routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool check_heap_alloc_success(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -3;
  if ((0 < *param_1) && (0 < param_2)) {
    /* B-3c FIX (d329): arg2 (the value stored into the kernel timeout-queue slot = the companion
     * poll's timeout/delay) was param_2=0 — but r5 IS param_2. VERIFIED vs stock asm
     * (0x10459400): at the trap call (0x10459418) r5 is the unchanged incoming param_2 (measured
     * r5=0x3e8=1000 at entry; only r4 is overwritten with (short)*param_1). With the stub's 0 the
     * companion-ready timeout node armed with delay 0 and fired immediately -> premature *(ctx+0x28)
     * -> broke poll_context_flag_until_status_set -> the candidate's first companion SPI xfer ran
     * before the companion was ready -> Cmd:80 -> B-6. THE MENU BLOCKER. Forward the real param_2. */
    iVar1 = __trap_store_value_in_kernel_table_slot((int)(short)*param_1, param_2);
  }
  return iVar1 == 0;
}
