/* @k10d cls_10565770_new @ 0x103aa490
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x10565770; returns param_1)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10565770 (vtable 0x10565770, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x10565770; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105643d0 * cls_10565770_new(cls_10565770 *param_1)

{
  if ((param_1 != (cls_10565770 *)0x0) ||
     (param_1 = (cls_10565770 *)heap_alloc((void *)0x50), (cls_105643d0 *)param_1 != (cls_105643d0 *)0x0)) {
    cls_105643d0_new((cls_105643d0 *)param_1);
    cls_105a2a8c_new((cls_105a2a8c *)&((cls_105643d0 *)param_1)->field40_0x40);
    ((cls_105643d0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x10565770/*ROM*/);
    ((cls_105643d0 *)param_1)->field44_0x44 = 0x10;
    ((cls_105643d0 *)param_1)->field45_0x45 = 0x56;
    ((cls_105643d0 *)param_1)->field46_0x46 = 0x58;
    ((cls_105643d0 *)param_1)->field47_0x47 = 0x10;
    ((cls_105643d0 *)param_1)->field48_0x48 = 0;
    ((cls_105643d0 *)param_1)->field49_0x49 = 0;
    ((cls_105643d0 *)param_1)->field50_0x4a = 0;
    ((cls_105643d0 *)param_1)->field51_0x4b = 0;
    ((cls_105643d0 *)param_1)->field52_0x4c = '\0';
    ((cls_105643d0 *)param_1)->field53_0x4d = 0;
    ((cls_105643d0 *)param_1)->field54_0x4e = 0;
  }
  return (cls_105643d0 *)param_1;
}
