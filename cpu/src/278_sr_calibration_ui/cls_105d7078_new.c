/* @k10d cls_105d7078_new @ 0x1051ff84
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105d7078; returns param_1)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d7078 (vtable 0x105d7078, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105d7078; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d7078_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_105b7ee0_new(param_1);
    *param_1 = 0x105d7078/*ROM*/;
    uVar3 = (uint32_t)(uintptr_t)alloc_and_zero_small_object((uint32_t *)0x0);
    param_1[1] = uVar3;
    uVar3 = (uint32_t)(uintptr_t)heap_alloc_2(0x1c);
    param_1[2] = uVar3;
    param_1[3] = 0;
    iVar2 = 1;
    iVar1 = 0;
    do {
      *(uint32_t *)(param_1[2] + iVar1) = 0;
      *(uint32_t *)(param_1[2] + iVar1 + 4) = 0;
      *(uint32_t *)(param_1[2] + iVar1 + 8) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0xc;
    } while (-1 < iVar2);
    *(uint32_t *)(param_1[2] + iVar1) = 0;
  }
  return param_1;
}
