/* @k10d cls_105b3870_new @ 0x104896ba
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b3870; returns param_1)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3870 (vtable 0x105b3870, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b3870; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b3830 * cls_105b3870_new(cls_105b3870 *param_1)

{
  if ((param_1 != (cls_105b3870 *)0x0) ||
     (param_1 = (cls_105b3870 *)heap_alloc((void *)4), param_1 != (cls_105b3870 *)0x0)) {
    cls_105b3830_new((cls_105b3830 *)param_1);
    ((cls_105b3830 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105b3870/*ROM*/);
  }
  return (cls_105b3830 *)param_1;
}
