/* @k10d zero_init_eight_byte_buffer @ 0x104676ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Allocates 8 bytes from the heap if param_1 is NULL, then zeroes the first 8 bytes of
 *   the buffer.
 * summary:
 *   The function checks if param_1 is NULL; if so, it calls heap_alloc(8) to obtain a new
 *   buffer. It then executes a loop that writes four zero bytes twice, clearing the first 8
 *   bytes of the buffer pointed to by param_1. It is called by the constructor of
 *   cls_105a8040, likely to initialize a small embedded structure or array within the
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_init_eight_byte_buffer(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)8), param_1 != (void *)0x0)) {
    iVar1 = 0;
    iVar2 = 1;
    do {
      *(uint8_t *)(iVar1 + (int)param_1) = 0;
      *(uint8_t *)(iVar1 + 1 + (int)param_1) = 0;
      *(uint8_t *)(iVar1 + 2 + (int)param_1) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 3) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
  }
  return;
}
