/* @k10d cls_105627d4_new @ 0x103925c8
 * name: verified (structural evidence: heap_alloc(0x3c) when NULL; stores vtable 0x105627d4; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105627d4 (vtable 0x105627d4, 0x3c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3c) when NULL; stores vtable 0x105627d4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105627d4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x3c), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_105627d4/*ROM*/;
    param_1[1] = 0;
    cls_1056328c_new(param_1 + 2);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  return param_1;
}
