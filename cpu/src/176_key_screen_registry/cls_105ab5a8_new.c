/* @k10d cls_105ab5a8_new @ 0x10481e2e
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105ab5a8; returns param_1)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab5a8 (vtable 0x105ab5a8, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105ab5a8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105ab5a8_new(uint32_t *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e408_new(param_1 + 1);
    *param_1 = 0x105ab5a8/*ROM*/;
    param_1[1] = 0x105ab5d8/*ROM*/;
    param_1[4] = 0;
    param_1[5] = param_2;
    uVar3 = heap_alloc_2(param_2 << 3);
    param_1[3] = uVar3;
    iVar2 = 0;
    if (0 < (int)param_1[5]) {
      iVar1 = 0;
      do {
        *(uint32_t *)(param_1[3] + iVar1) = 0;
        *(uint8_t *)(param_1[3] + iVar1 + 4) = 0;
        *(uint8_t *)(param_1[3] + iVar1 + 6) = 1;
        *(uint8_t *)(param_1[3] + iVar1 + 7) = 0;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < (int)param_1[5]);
    }
  }
  return param_1;
}
