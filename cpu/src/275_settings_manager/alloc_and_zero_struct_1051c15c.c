/* @k10d alloc_and_zero_struct_1051c15c @ 0x1051c15c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte struct and a nested 16-byte sub-object, zero-initializing both, or
 *   returns an existing pointer.
 * summary:
 *   If param_1 is non-NULL, it is used directly; otherwise a 16-byte block is obtained from
 *   heap_alloc. The first two words are zeroed, and a second 16-byte block is allocated via
 *   heap_alloc_2 and stored at offset 8. The nested block's first four words are zeroed.
 *   Returns the pointer to the outer structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t * alloc_and_zero_struct_1051c15c(uint16_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x10), param_1 != (uint16_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    uVar1 = heap_alloc_2(0x10);
    *(uint32_t *)(param_1 + 2) = uVar1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    **(uint32_t **)(param_1 + 2) = 0;
    *(uint32_t *)(*(int *)(param_1 + 2) + 4) = 0;
    *(uint32_t *)(*(int *)(param_1 + 2) + 8) = 0;
    *(uint32_t *)(*(int *)(param_1 + 2) + 0xc) = 0;
  }
  return param_1;
}
