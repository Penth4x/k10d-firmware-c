/* @k10d alloc_and_zero_2d_array @ 0x104b41a4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and zero-initializes a 2D array of 32-bit words and 16-bit elements based on
 *   dimensions in param_1.
 * summary:
 *   Reads two 8-bit dimensions from param_1[0] and param_1[1]. If their product is non-
 *   zero, it allocates a 32-bit array (size = product * 4) and a 16-bit array (size =
 *   product * 2) using heap_alloc_2. It stores the pointers in param_1+8 and param_1+4
 *   respectively, then zero-initializes both arrays. Returns 1 on success, 0 on failure or
 *   if dimensions are zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t alloc_and_zero_2d_array(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint16_t *puVar4;
  uint32_t uVar5;
  
  uVar5 = 0;
  uVar1 = (uint)*param_1 * (uint)param_1[1];
  if (uVar1 != 0) {
    iVar3 = heap_alloc_2(uVar1 * 4);
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 != 0) {
      puVar4 = (uint16_t *)heap_alloc_2(uVar1 * 2);
      *(uint16_t **)(param_1 + 4) = puVar4;
      uVar2 = 0;
      if (uVar1 != 0) {
        do {
          *(uint32_t *)(*(int *)(param_1 + 8) + uVar2 * 4) = 0;
          *puVar4 = 0;
          uVar2 = uVar2 + 1 & 0xff;
          puVar4 = puVar4 + 1;
        } while (uVar2 < uVar1);
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}
