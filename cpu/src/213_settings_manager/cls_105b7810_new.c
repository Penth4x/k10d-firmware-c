/* @k10d cls_105b7810_new @ 0x104aef62
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105b7810; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7810 (vtable 0x105b7810, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105b7810; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b7810_new(uint32_t *param_1)

{
  byte bVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    param_1[6] = 0x105b7810/*ROM*/;
    *param_1 = 0;
    uVar3 = heap_alloc_2(0x20);
    param_1[1] = uVar3;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    bVar1 = 0;
    *(uint8_t *)(param_1 + 5) = 0;
    puVar2 = (uint32_t *)param_1[1];
    do {
      *puVar2 = 0;
      bVar1 = bVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (bVar1 < 8);
  }
  return param_1;
}
