/* @k10d cls_105bfd6c_new @ 0x104e32f6
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105bfd6c; returns param_1)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bfd6c (vtable 0x105bfd6c, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105bfd6c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105bfd6c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    cls_105bde1c_new(param_1);
    param_1[2] = 0x105bfd6c/*ROM*/;
  }
  return param_1;
}
