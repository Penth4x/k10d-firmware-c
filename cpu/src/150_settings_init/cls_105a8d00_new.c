/* @k10d cls_105a8d00_new @ 0x1046bfea
 * name: verified (structural evidence: heap_alloc(0xc8) when NULL; stores vtable 0x105a8d00; returns param_1)
 * unit: 150_settings_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a8d00 (vtable 0x105a8d00, 0xc8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc8) when NULL; stores vtable 0x105a8d00; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a8d00_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)200), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_105a2b50_new(param_1 + 1);
    cls_1059e478_new(param_1 + 8);
    cls_1059e4b0_new(param_1 + 9);
    *param_1 = 0x105a8d00/*ROM*/;
    param_1[5] = 0x105a8d48/*ROM*/;
    param_1[8] = 0x105a8d68/*ROM*/;
    param_1[9] = 0x105a8d80/*ROM*/;
    cls_105a2bf8_new(param_1 + 0x2e);
    cls_105a2af8_new(param_1 + 0x30);
    iVar2 = 8;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x28) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x2c) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x30) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x34) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return param_1;
}
