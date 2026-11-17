/* @k10d cls_10562cbc_new @ 0x103952c2
 * name: verified (structural evidence: heap_alloc(0x7c) when NULL; stores vtable 0x10562cbc; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562cbc (vtable 0x10562cbc, 0x7c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x7c) when NULL; stores vtable 0x10562cbc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10562cbc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x7c), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_10562cbc/*ROM*/;
    param_1[1] = 0;
    cls_10563824_new(param_1 + 2);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  return param_1;
}
