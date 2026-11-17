/* @k10d cls_105b4cbc_new @ 0x10494ba4
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b4cbc; returns param_1)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4cbc (vtable 0x105b4cbc, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b4cbc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b4cbc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_105b49ec_new(param_1);
    param_1[3] = (uint32_t)&DAT_105b4cbc/*ROM*/;
  }
  return param_1;
}
