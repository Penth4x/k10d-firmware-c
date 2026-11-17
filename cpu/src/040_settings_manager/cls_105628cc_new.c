/* @k10d cls_105628cc_new @ 0x10392e04
 * name: verified (structural evidence: heap_alloc(0xf8) when NULL; stores vtable 0x105628cc; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105628cc (vtable 0x105628cc, 0xf8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xf8) when NULL; stores vtable 0x105628cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105628cc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xf8), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_105628cc/*ROM*/;
    param_1[1] = 0;
    cls_10563404_new(param_1 + 2);
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
  }
  return param_1;
}
