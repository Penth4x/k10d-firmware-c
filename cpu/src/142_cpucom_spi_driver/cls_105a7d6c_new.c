/* @k10d cls_105a7d6c_new @ 0x10466250
 * name: verified (structural evidence: heap_alloc(0x140) when NULL; stores vtable 0x105a7d6c; returns param_1)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7d6c (vtable 0x105a7d6c, 0x140 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x140) when NULL; stores vtable 0x105a7d6c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a7d6c_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x140), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_105a2c1c_new(param_1 + 1);
    *param_1 = 0x105a7d6c/*ROM*/;
    param_1[5] = 0x105a7d9c/*ROM*/;
    cls_105a2b30_new(param_1 + 6);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    iVar1 = 0;
    iVar2 = 0x3f;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0x2c) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x2d) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x2e) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x2f) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
  }
  return param_1;
}
