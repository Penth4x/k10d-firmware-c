/* @k10d cls_1059e288_new @ 0x104271f0
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x1059e288; returns param_1)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e288 (vtable 0x1059e288, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x1059e288; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059e288_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    param_1[5] = (uint32_t)&DAT_1059e288/*ROM*/;
    *param_1 = 0;
    cls_105a2bf8_new(param_1 + 1);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return param_1;
}
