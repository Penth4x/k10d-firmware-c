/* @k10d peek_queue_head @ 0x104a8764
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns the value at the head of a circular buffer without removing it.
 * summary:
 *   Reads the head pointer from offset 0x1c of the structure pointed to by param_1. If the
 *   head pointer equals the tail pointer at offset 8, the buffer is empty and 0 is
 *   returned. Otherwise, the value stored at the head pointer is returned. No pointers are
 *   advanced, so this is a non-destructive peek operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t peek_queue_head(int param_1)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  
  puVar1 = *(uint32_t **)(param_1 + 4);
  *(uint32_t **)(param_1 + 0x1c) = puVar1;
  if (puVar1 == *(uint32_t **)(param_1 + 8)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}
