/* @k10d cls_10565468_new @ 0x103a8ad8
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x10565468; returns param_1)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10565468 (vtable 0x10565468, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x10565468; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105643d0 * cls_10565468_new(cls_10565468 *param_1)

{
  if ((param_1 != (cls_10565468 *)0x0) ||
     (param_1 = (cls_10565468 *)heap_alloc((void *)0x44), (cls_105643d0 *)param_1 != (cls_105643d0 *)0x0)) {
    cls_105643d0_new((cls_105643d0 *)param_1);
    ((cls_105643d0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x10565468/*ROM*/);
    ((cls_105643d0 *)param_1)->field40_0x40 = 0;
  }
  return (cls_105643d0 *)param_1;
}
