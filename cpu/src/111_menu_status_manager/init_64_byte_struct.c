/* @k10d init_64_byte_struct @ 0x1042f108
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 111_menu_status_manager (unit names are model-proposed)
 * purpose:
 *   Zero-initializes a 64-byte heap-allocated structure, allocating it first if the pointer
 *   is NULL.
 * summary:
 *   If param_1 is NULL, it calls heap_alloc to obtain 0x40 bytes. It then loops four times,
 *   writing 16 bytes of zeros at a time to the buffer, clearing the entire 64-byte region.
 *   The function returns the pointer in r4 (implicit), which the caller cls_1059eec4_new
 *   uses as the newly allocated object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_64_byte_struct(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) || (param_1 = (void *)heap_alloc((void *)0x40), param_1 != 0)) {
    iVar2 = 3;
    iVar1 = 0;
    do {
      *(uint32_t *)(iVar1 + (int)param_1) = 0;
      *(uint32_t *)(iVar1 + 4 + (int)param_1) = 0;
      *(uint32_t *)(iVar1 + 8 + (int)param_1) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0xc) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return;
}
