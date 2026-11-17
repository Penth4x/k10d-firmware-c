/* @k10d insert_into_timeout_queue_10011644 @ 0x10011644
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Inserts a task control block into a kernel timeout queue by updating the head pointer
 *   and linking the node.
 * summary:
 *   The function takes a pointer to a task control block (param_1) and a queue head pointer
 *   (*param_1). It updates a counter at offset 8 of the queue head (unless it is a sentinel
 *   value) and performs a standard singly-linked list insertion by setting the new node's
 *   next pointer and updating the head. This is consistent with the rtos_kernel module's
 *   timeout-queue management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void insert_into_timeout_queue_10011644(int *param_1)

{
  uint8_t *puVar1;
  
  puVar1 = (uint8_t *)*param_1;
  if (puVar1 != &DAT_6a0036bc) {
    *(int *)(puVar1 + 8) = *(int *)(puVar1 + 8) + param_1[2];
  }
  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)param_1[1] = *param_1;
  return;
}
