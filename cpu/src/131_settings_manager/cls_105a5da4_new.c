/* @k10d cls_105a5da4_new @ 0x1045dc68
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105a5da4; returns param_1)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a5da4 (vtable 0x105a5da4, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105a5da4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105a5da4_new(cls_105a5da4 *param_1)

{
  if ((param_1 != (cls_105a5da4 *)0x0) ||
     (param_1 = (cls_105a5da4 *)heap_alloc((void *)0x2c), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105a5da4/*ROM*/);
    ((cls_1059e380 *)param_1)->field1_0x4 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field2_0x8 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field3_0xc = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field4_0x10 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field5_0x14 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field6_0x18 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field7_0x1c = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field8_0x20 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field9_0x24 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field10_0x28 = (uintptr_t)((void *)0x0);
  }
  return (cls_1059e380 *)param_1;
}
