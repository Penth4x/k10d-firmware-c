/* @k10d cls_1056482c_new @ 0x103a071e
 * name: verified (structural evidence: heap_alloc(0x48) when NULL; stores vtable 0x1056482c; returns param_1)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1056482c (vtable 0x1056482c, 0x48 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x48) when NULL; stores vtable 0x1056482c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105643d0 * cls_1056482c_new(cls_1056482c *param_1)

{
  if ((param_1 != (cls_1056482c *)0x0) ||
     (param_1 = (cls_1056482c *)heap_alloc((void *)0x48), (cls_105643d0 *)param_1 != (cls_105643d0 *)0x0)) {
    cls_105643d0_new((cls_105643d0 *)param_1);
    ((cls_105643d0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x1056482c/*ROM*/);
    ((cls_105643d0 *)param_1)->field40_0x40 = 0;
    ((cls_105643d0 *)param_1)->field41_0x41 = '\0';
    ((cls_105643d0 *)param_1)->field42_0x42 = 0;
    ((cls_105643d0 *)param_1)->field44_0x44 = 0;
    ((cls_105643d0 *)param_1)->field45_0x45 = 0;
    ((cls_105643d0 *)param_1)->field46_0x46 = 0;
    ((cls_105643d0 *)param_1)->field47_0x47 = 0;
  }
  return (cls_105643d0 *)param_1;
}
