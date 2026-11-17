/* @k10d cls_105b7588_new @ 0x104ad778
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105b7588; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7588 (vtable 0x105b7588, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105b7588; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b7588_new(uint32_t *param_1)

{
  int iVar1;
  uint32_t *puVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    cls_105b7748_new(param_1);
    param_1[6] = 0x105b7588/*ROM*/;
    puVar2 = (uint32_t *)heap_alloc_2(0x24);
    param_1[8] = (uint32_t)puVar2;
    iVar1 = 2;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (-1 < iVar1);
  }
  return param_1;
}
