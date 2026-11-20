/* @k10d cls_105aa710_new @ 0x1047a8dc
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105aa710; returns param_1)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aa710 (vtable 0x105aa710, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105aa710; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105aa710_new(cls_105aa710 *param_1)

{
  if ((param_1 != (cls_105aa710 *)0x0) || (param_1 = (cls_105aa710 *)heap_alloc((void *)0xc), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)((void *)0x105aa710/*ROM*/);
    ((cls_1059e380 *)param_1)->field1_0x4 = (uint32_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field2_0x8 = (uint32_t)((void *)0x0);
  }
  return (cls_1059e380 *)param_1;
}
