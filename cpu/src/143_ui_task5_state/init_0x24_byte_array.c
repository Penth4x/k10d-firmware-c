/* @k10d init_0x24_byte_array @ 0x104672d8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * purpose:
 *   Allocates or reuses a 0x24-byte buffer and zero-initializes its first 0x18 bytes in
 *   3-byte chunks.
 * summary:
 *   If param_1 is NULL, it calls heap_alloc(0x24) to obtain a buffer. It then zeroes
 *   offsets 0x14-0x20 and loops to clear the first 0x18 bytes (0x12 iterations of 3 bytes
 *   each). The caller cls_105a8040_new uses this to initialize a portion of a 0x294-byte
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_0x24_byte_array(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x24), param_1 != (void *)0x0)) {
    *(uint32_t *)((int)param_1 + 0x14) = 0;
    *(uint32_t *)((int)param_1 + 0x18) = 0;
    *(uint32_t *)((int)param_1 + 0x1c) = 0;
    *(uint8_t *)((int)param_1 + 0x20) = 0;
    iVar1 = 0;
    do {
      iVar2 = 2;
      iVar3 = iVar1;
      do {
        *(uint8_t *)(iVar3 + (int)param_1) = 0;
        *(uint8_t *)(iVar3 + 1 + (int)param_1) = 0;
        *(uint8_t *)(iVar3 + 2 + (int)param_1) = 0;
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + 3;
      } while (-1 < iVar2);
      iVar1 = iVar1 + 9;
    } while (iVar1 < 0x12);
  }
  return;
}
