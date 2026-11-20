/* @k10d cls_10564e90_new @ 0x103a568a
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x10564e90; returns param_1)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10564e90 (vtable 0x10564e90, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x10564e90; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105643d0 * cls_10564e90_new(cls_10564e90 *param_1)

{
  if ((param_1 != (cls_10564e90 *)0x0) ||
     (param_1 = (cls_10564e90 *)heap_alloc((void *)0x40), (cls_105643d0 *)param_1 != (cls_105643d0 *)0x0)) {
    cls_105643d0_new((cls_105643d0 *)param_1);
    ((cls_105643d0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x10564e90/*ROM*/);
  }
  return (cls_105643d0 *)param_1;
}
