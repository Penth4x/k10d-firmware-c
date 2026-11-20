/* @k10d init_70_byte_struct @ 0x10463880
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Zero-initializes a 0x46-byte structure, allocating it from the heap if the input
 *   pointer is NULL.
 * summary:
 *   The function accepts a pointer to a 0x46-byte structure. If the pointer is NULL, it
 *   allocates 0x46 bytes using heap_alloc. It then zero-fills the first 0x2e bytes (23
 *   words) and the last 0x18 bytes (6 words), leaving the bytes at offsets 0x2e through
 *   0x3d uninitialized. The caller is dispatch_command_by_type_id.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_70_byte_struct(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) || (param_1 = (void *)heap_alloc((void *)0x46), param_1 != 0)) {
    iVar1 = 0;
    iVar2 = 0x16;
    do {
      *(uint8_t *)(iVar1 + (int)param_1) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 2;
    } while (-1 < iVar2);
    iVar1 = 0;
    iVar2 = 5;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0x2e) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x2f) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x30) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x31) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
  }
  return;
}
