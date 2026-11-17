/* @k10d insert_into_timeout_queue_1000e780 @ 0x1000e780
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Inserts a task control block into a kernel timeout queue using a doubly-linked list
 *   with priority flags.
 * summary:
 *   The function manipulates a linked list structure pointed to by param_1, using bit 30
 *   (0x40000000) and bit 31 (0x80000000) of the list header to determine insertion logic.
 *   It calls link_node_into_list to adjust list pointers and
 *   insert_into_timeout_queue_1000fc34 to finalize the insertion, consistent with
 *   µITRON/REALOS timeout queue management in the RTOS kernel module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void insert_into_timeout_queue_1000e780(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar1 = (uint *)(param_1 + -4);
  uVar2 = *puVar1;
  puVar3 = (uint *)(param_1 + uVar2 * 4);
  if ((uVar2 & 0x40000000) == 0) {
    param_1 = *(uint32_t *)(param_1 + -8);
    puVar1 = (uint *)(param_1 + -4);
    *puVar1 = *puVar1 + (uVar2 * 4 + 4 >> 2);
    link_node_into_list((int *)param_1);
    uVar2 = *puVar3;
  }
  else {
    *puVar1 = uVar2 & 0x7fffffff;
    uVar2 = *puVar3;
  }
  if ((uVar2 & 0x80000000/*SDRAM*/) == 0) {
    *puVar1 = *puVar1 + (uVar2 * 4 + 4 >> 2);
    link_node_into_list((int *)(puVar3 + 1));
    uVar2 = *puVar1;
  }
  else {
    *puVar3 = uVar2 & 0xbfffffff;
    uVar2 = *puVar1;
  }
  insert_into_timeout_queue_1000fc34((int *)param_1,uVar2 << 2);
  *(int *)(param_1 + (*puVar1 - 1) * 4) = param_1;
  return;
}
