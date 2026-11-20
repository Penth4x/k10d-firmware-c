/* @k10d cls_105a0920_new @ 0x1043e3ea
 * name: verified (structural evidence: heap_alloc(0x114) when NULL; stores vtable 0x105a0920; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0920 (vtable 0x105a0920, 0x114 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x114) when NULL; stores vtable 0x105a0920; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e330 * cls_105a0920_new(cls_105a0920 *param_1)

{
  if ((param_1 != (cls_105a0920 *)0x0) ||
     (param_1 = (cls_105a0920 *)heap_alloc((void *)0x114), (cls_1059e330 *)param_1 != (cls_1059e330 *)0x0))
  {
    cls_1059e330_new((cls_1059e330 *)param_1);
    ((cls_1059e330 *)param_1)->field_0x4 = 0x105a0920/*ROM*/;
    ((uint32_t *)&((((cls_1059e330 *)param_1)->field_0x8)))[0] = 0x105a0950/*ROM*/;
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e330 *)param_1)->field255_0x10c);
  }
  return (cls_1059e330 *)param_1;
}
