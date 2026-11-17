/* @k10d cls_105b5814_new @ 0x1049b38c
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b5814; returns param_1)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5814 (vtable 0x105b5814, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b5814; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b5814_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_105b57f4_new(param_1);
    *param_1 = 0x105b5814/*ROM*/;
    alloc_and_zero_byte((void *)(param_1 + 1));
    param_1[2] = 0;
    *(uint8_t *)(param_1 + 3) = 1;
  }
  return param_1;
}
