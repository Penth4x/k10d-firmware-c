/* @k10d copy_twelve_byte_struct @ 0x1051f012
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 12-byte structure from param_2 into a newly heap-allocated buffer when param_1
 *   is null.
 * summary:
 *   If param_1 is NULL, allocates 0xc (12) bytes via heap_alloc and uses that as the
 *   destination. Copies the first 2 bytes (a word) and then loops to copy the remaining 10
 *   bytes byte-by-byte from param_2 to the destination. The function returns void, so the
 *   allocated pointer is not returned to the caller when param_1 was NULL.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_twelve_byte_struct(uint16_t *param_1,uint16_t *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0xc), param_1 != (uint16_t *)0x0)) {
    *param_1 = *param_2;
    iVar2 = 1;
    iVar1 = 0;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 2) = *(uint8_t *)((int)param_2 + iVar1 + 2);
      *(uint8_t *)((int)param_1 + iVar1 + 3) = *(uint8_t *)((int)param_2 + iVar1 + 3);
      *(uint8_t *)((int)param_1 + iVar1 + 4) = *(uint8_t *)((int)param_2 + iVar1 + 4);
      iVar2 = iVar2 + -1;
      *(uint8_t *)((int)param_1 + iVar1 + 5) = *(uint8_t *)((int)param_2 + iVar1 + 5);
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
  }
  return;
}
