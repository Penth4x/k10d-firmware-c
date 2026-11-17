/* @k10d cls_105b573c_new @ 0x1049a7fa
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105b573c; returns param_1)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b573c (vtable 0x105b573c, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105b573c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b573c_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x58), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_105a2b50_new(param_1 + 2);
    *param_1 = 0x105b573c/*ROM*/;
    param_1[1] = 0x105b5774/*ROM*/;
    param_1[6] = 0x105b578c/*ROM*/;
    param_1[0xf] = 0;
    alloc_and_zero_20_bytes(param_1 + 0x10);
    param_1[0x15] = 0;
    iVar2 = 1;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x24) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x28) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x2c) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0xc;
    } while (-1 < iVar2);
  }
  return param_1;
}
