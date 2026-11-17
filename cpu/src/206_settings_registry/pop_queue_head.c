/* @k10d pop_queue_head @ 0x104a877e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Removes and returns the first element from a linked list or queue structure.
 * summary:
 *   The function treats param_1 as a pointer to a structure containing two pointers at
 *   offsets 0x1c and 0x8. It compares these pointers; if they differ, it advances the
 *   pointer at 0x1c by 4 bytes (one word) and returns the value at the new location. If the
 *   pointers become equal after the advance, it returns 0. This is a standard dequeue
 *   operation for a singly-linked list or circular buffer where 0x1c is the head/tail
 *   pointer and 0x8 is the other boundary.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t pop_queue_head(int param_1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 8)) {
    puVar2 = (uint32_t *)(*(int *)(param_1 + 0x1c) + 4);
    *(uint32_t **)(param_1 + 0x1c) = puVar2;
    if (puVar2 == *(uint32_t **)(param_1 + 8)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *puVar2;
    }
  }
  return uVar1;
}
