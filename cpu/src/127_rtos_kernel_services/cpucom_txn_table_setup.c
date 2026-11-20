/* @k10d cpucom_txn_table_setup @ 0x10459c74
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_seven_entry_table)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Copies a 7-entry template from ROM into param_1 and populates each 0x14-byte entry
 *   based on a service call result.
 * summary:
 *   The function iterates 7 times, copying 0x10 bytes from ROM address 0x105a2b6c into a
 *   local stack buffer. For each entry, it calls allocate_kernel_task_slot_1000d89c with a
 *   pointer to the stack buffer. If the call returns a non-negative value, it writes a
 *   0x14-byte structure to param_1 (marking it valid, storing the return value, and
 *   calculating a size field); otherwise, it writes a zeroed entry. It increments a counter
 *   at param_1+0x8c for each successful entry. The callee
 *   allocate_kernel_task_slot_1000d89c is unidentified, and the specific subsystem (e.g.,
 *   CPUCOM, heap, or RTOS) is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cpucom_txn_table_setup(void *param_1)

{
  bool bVar1;
  uint8_t *puVar2;
  uint8_t *puVar3;
  int iVar4;
  uint8_t *puVar5;
  int iVar6;
  uintptr_t sp;
  int iStack_7c;
  int aiStack_78 [29];
  
  puVar5 = &stack0xfffffffc;
  iVar4 = 0x70;
  do {
    iVar6 = iVar4 + -4;
    *(uint32_t *)((int)aiStack_78 + iVar4) = *(uint32_t *)(iVar4 + 0x105a2b6c/*ROM*/);
    iVar4 = iVar6;
  } while (iVar6 != 0);
  *(uint32_t *)((int)param_1 + 0x8c) = 0;
  iStack_7c = 7;
  iVar4 = 0;
  aiStack_78[0] = -0x70;
  do {
    puVar3 = puVar5 + aiStack_78[0];
    iVar6 = allocate_kernel_task_slot_1000d89c(puVar3);
    puVar2 = (uint8_t *)((int)param_1 + iVar4);
    if (iVar6 < 0) {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(uint32_t *)(puVar2 + 4) = *(uint32_t *)(puVar3 + 8);
      *(int *)(puVar2 + 8) = *(int *)(puVar3 + 8) + *(int *)(puVar3 + 4) + -1;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(int *)(puVar2 + 0xc) = iVar6;
      *(uint32_t *)(puVar2 + 0x10) = *(uint32_t *)(puVar3 + 4);
      *(int *)((int)param_1 + 0x8c) = *(int *)((int)param_1 + 0x8c) + 1;
    }
    iVar4 = iVar4 + 0x14;
    puVar5 = puVar5 + 0x10;
    iVar6 = iStack_7c + -1;
    bVar1 = 0 < iStack_7c;
    iStack_7c = iVar6;
  } while (bVar1 && iVar6 != 0);
  return;
}
