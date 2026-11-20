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

cls_105bde1c * cls_105bfd6c_new(cls_105bfd6c *param_1)

{
  if ((param_1 != (cls_105bfd6c *)0x0) ||
     (param_1 = (cls_105bfd6c *)heap_alloc((void *)0x24), param_1 != (cls_105bfd6c *)0x0)) {
    cls_105bde1c_new((cls_105bde1c *)param_1);
    ((cls_105bde1c *)param_1)->field_0x8 = (uintptr_t)((void *)0x105bfd6c/*ROM*/);
  }
  return (cls_105bde1c *)param_1;
}
