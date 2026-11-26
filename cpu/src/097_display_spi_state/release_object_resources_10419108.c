/* @k10d release_object_resources_10419108 @ 0x10419108
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Waits for a pending flag, releases two heap blocks, clears a 6-entry table, and resets
 *   object state.
 * summary:
 *   The function polls check_mode_flag_or_byte on a field at offset 0x50 until it returns
 *   zero, calling check_kernel_call_success_10459fea(10) in the loop. It then calls
 *   release_mode_entry_objects and conditionally releases two memory blocks from the system
 *   heap (offsets 0x1568 and 0x156c) using mempool_release_block, bracketed by
 *   call_kernel_with_short_id and check_kernel_call_success_10459d88. It iterates over a
 *   6-entry table at offset 0x1588, calling remove_node_from_list for valid entries, then
 *   zeroes the table. Finally, it polls the flag again, clears a byte at offset 0x80, calls
 *   init_object_state_once, and sets offset 0x15d0 to 100.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_resources_10419108(int param_1)

{
  int *piVar1;
  uint32_t *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
  while (iVar3 != 0) {
    check_kernel_call_success_10459fea(0xa);
    iVar3 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
  }
  release_mode_entry_objects(param_1,0xffffffff,0);
  if (*(int *)(param_1 + 0x1568) != 0) {
    call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
    pvVar4 = (void *)get_system_heap();
    mempool_release_block(pvVar4,*(void **)(param_1 + 0x1568));
    check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
  }
  if (*(int *)(param_1 + 0x156c) != 0) {
    call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
    pvVar4 = (void *)get_system_heap();
    mempool_release_block(pvVar4,*(void **)(param_1 + 0x156c));
    check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
  }
  *(uint32_t *)(param_1 + 0x1568) = 0;
  *(uint32_t *)(param_1 + 0x156c) = 0;
  iVar6 = 2;
  iVar3 = 0;
  do {
    iVar5 = param_1 + 0x1588;
    piVar1 = (int *)(iVar5 + iVar3);
    if ((*(char *)(piVar1 + 1) != '\0') && (*piVar1 != 0)) {
      remove_node_from_list(*(int *)(param_1 + 0x54),(uint32_t *)*piVar1);
    }
    piVar1 = (int *)(iVar5 + iVar3 + 8);
    if ((*(char *)(piVar1 + 1) != '\0') && (*piVar1 != 0)) {
      remove_node_from_list(*(int *)(param_1 + 0x54),(uint32_t *)*piVar1);
    }
    piVar1 = (int *)(iVar5 + iVar3 + 0x10);
    if ((*(char *)(piVar1 + 1) != '\0') && (*piVar1 != 0)) {
      remove_node_from_list(*(int *)(param_1 + 0x54),(uint32_t *)*piVar1);
    }
    iVar6 = iVar6 + -1;
    iVar3 = iVar3 + 0x18;
  } while (-1 < iVar6);
  iVar6 = 2;
  iVar3 = 0;
  do {
    iVar5 = param_1 + 0x1588;
    puVar2 = (uint32_t *)(iVar5 + iVar3);
    *puVar2 = 0;
    *(uint8_t *)(puVar2 + 1) = 0;
    *(uint8_t *)((int)puVar2 + 5) = 0;
    puVar2 = (uint32_t *)(iVar5 + iVar3 + 8);
    *puVar2 = 0;
    *(uint8_t *)(puVar2 + 1) = 0;
    *(uint8_t *)((int)puVar2 + 5) = 0;
    puVar2 = (uint32_t *)(iVar5 + iVar3 + 0x10);
    *puVar2 = 0;
    *(uint8_t *)(puVar2 + 1) = 0;
    *(uint8_t *)((int)puVar2 + 5) = 0;
    iVar6 = iVar6 + -1;
    iVar3 = iVar3 + 0x18;
  } while (-1 < iVar6);
  iVar3 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
  while (iVar3 != 0) {
    check_kernel_call_success_10459fea(0xa);
    iVar3 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
  }
  *(uint8_t *)(param_1 + 0x80) = 0;
  init_object_state_once(param_1);
  *(uint32_t *)(param_1 + 0x15d0) = 100;
  return;
}
