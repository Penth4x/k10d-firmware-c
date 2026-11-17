/* @k10d cls_105b6d94_new @ 0x104a9cc6
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x105b6d94; returns param_1)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b6d94 (vtable 0x105b6d94, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x105b6d94; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b6d94_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x4c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e458_new(param_1 + 1);
    cls_1059e478_new(param_1 + 2);
    cls_105a2a8c_new(param_1 + 3);
    *param_1 = 0x105b6d94/*ROM*/;
    param_1[1] = 0x105b6ddc/*ROM*/;
    param_1[2] = 0x105b6dfc/*ROM*/;
    param_1[4] = 0x105b6e14/*ROM*/;
    param_1[5] = 0;
    *(uint8_t *)(param_1 + 6) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0xf] = 0;
    param_1[0x12] = 0;
    iVar1 = 0;
    iVar2 = 1;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0x34) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x35) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x36) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x37) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  return param_1;
}
