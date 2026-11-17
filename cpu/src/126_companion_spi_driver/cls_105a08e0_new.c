/* @k10d cls_105a08e0_new @ 0x1043e30a
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105a08e0; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a08e0 (vtable 0x105a08e0, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105a08e0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a08e0_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x58), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = 0x105a08e0/*ROM*/;
    cls_105a2be0_new(param_1 + 0xd);
    cls_105a2be0_new(param_1 + 0xf);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    iVar2 = 2;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 4) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 8) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0xc) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x10) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return param_1;
}
