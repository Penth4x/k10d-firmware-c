/* @k10d cls_105a0a54_new @ 0x1043fa18
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x105a0a54; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0a54 (vtable 0x105a0a54, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x105a0a54; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a0a54_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x50), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = 0x105a0a54/*ROM*/;
    cls_105a2be0_new(param_1 + 0xe);
    cls_105a2be0_new(param_1 + 0x10);
    cls_105a2be0_new(param_1 + 0x12);
    iVar3 = 3;
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      *(uint32_t *)((int)param_1 + iVar2 + 4) = 0;
      *(uint32_t *)((int)param_1 + iVar2 + 8) = 0;
      *(uint32_t *)((int)param_1 + iVar2 + 0xc) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar2 + 0xc;
    } while (-1 < iVar3);
    *(uint32_t *)((int)param_1 + iVar2 + 0x10) = 0;
  }
  return param_1;
}
