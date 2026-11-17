/* @k10d cls_105fa760_new @ 0x1052e200
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105fa760; returns param_1)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105fa760 (vtable 0x105fa760, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105fa760; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105fa760_new(uint32_t *param_1)

{
  uint32_t *puVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    puVar1 = param_1;
    if ((param_1 != (uint32_t *)0x0) ||
       (puVar1 = (uint32_t *)heap_alloc((void *)4), puVar1 != (uint32_t *)0x0)) {
      *puVar1 = 0x105d9168/*ROM*/;
    }
    *param_1 = 0x105fa760/*ROM*/;
  }
  return param_1;
}
