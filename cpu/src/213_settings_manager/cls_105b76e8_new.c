/* @k10d cls_105b76e8_new @ 0x104ae0d2
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105b76e8; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b76e8 (vtable 0x105b76e8, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105b76e8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b76e8_new(uint32_t *param_1)

{
  uint32_t *puVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    cls_105b7748_new(param_1);
    cls_105b7730_new(param_1 + 8);
    param_1[6] = 0x105b76e8/*ROM*/;
    param_1[8] = 0x105b7718/*ROM*/;
    puVar1 = (uint32_t *)heap_alloc_2(0x14);
    param_1[9] = (uint32_t)puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  return param_1;
}
