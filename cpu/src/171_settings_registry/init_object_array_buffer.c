/* @k10d init_object_array_buffer @ 0x1047fa70
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Stores a configuration pointer and allocates/initializes an array of 8-byte slots based
 *   on a count field.
 * summary:
 *   The function copies three integers from param_2 into global RAM locations
 *   (0x80010030-0x80010038). It then reads a count from offset 0x14 of the first stored
 *   pointer and allocates a buffer of size count*8 bytes using heap_alloc_2. The buffer
 *   pointer is stored at offset 8 of param_1. Finally, it initializes each 8-byte slot in
 *   the buffer with an incrementing index and a zero value. This appears to be a virtual
 *   method (slot 2) for initializing a dynamic array structure within an object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_object_array_buffer(void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  
  iRam80010034 = param_2[1];
  _DAT_80010030/*SDRAM*/ = *param_2;
  iRam80010038 = param_2[2];
  uVar4 = heap_alloc_2(*(int *)(_DAT_80010030/*SDRAM*/ + 0x14) << 3);
  *(uint32_t *)((int)param_1 + 8) = uVar4;
  iVar1 = _DAT_80010030/*SDRAM*/;
  iVar3 = 0;
  if (0 < *(int *)(_DAT_80010030/*SDRAM*/ + 0x14)) {
    iVar2 = 0;
    do {
      *(int *)(*(int *)((int)param_1 + 8) + iVar2) = iVar3;
      *(uint32_t *)(*(int *)((int)param_1 + 8) + iVar2 + 4) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < *(int *)(iVar1 + 0x14));
  }
  return 1;
}
