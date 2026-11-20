/* @k10d cls_105a0774_new @ 0x1043cfa0
 * name: verified (structural evidence: heap_alloc(0x10c) when NULL; stores vtable 0x105a0774; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0774 (vtable 0x105a0774, 0x10c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10c) when NULL; stores vtable 0x105a0774; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e330 * cls_105a0774_new(cls_105a0774 *param_1)

{
  if ((param_1 != (cls_105a0774 *)0x0) ||
     (param_1 = (cls_105a0774 *)heap_alloc((void *)0x10c), (cls_1059e330 *)param_1 != (cls_1059e330 *)0x0))
  {
    cls_1059e330_new((cls_1059e330 *)param_1);
    ((cls_1059e330 *)param_1)->field_0x4 = 0x105a0774/*ROM*/;
    ((uint32_t *)&((((cls_1059e330 *)param_1)->field_0x8)))[0] = 0x105a07a4/*ROM*/;
  }
  return (cls_1059e330 *)param_1;
}
