/* @k10d cls_1059d568_new @ 0x104224d2
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x1059d568; returns param_1)
 * unit: 098_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059d568 (vtable 0x1059d568, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x1059d568; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_1059d568_new(cls_1059d568 *param_1)

{
  if ((param_1 != (cls_1059d568 *)0x0) ||
     (param_1 = (cls_1059d568 *)heap_alloc((void *)0x50), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)(&DAT_1059d568/*ROM*/);
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
    ((cls_1059e380 *)param_1)->field11_0x2c = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field12_0x30 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field13_0x34 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field14_0x38 = (uintptr_t)((void *)0x0);
    ((cls_1059e380 *)param_1)->field15_0x3c = (uintptr_t)((void *)0x0);
    *(uint32_t *)&((cls_1059e380 *)param_1)->field16_0x40 = 0;
    ((cls_1059e380 *)param_1)->field20_0x44 = 0;
    ((cls_1059e380 *)param_1)->field21_0x48 = 0;
    ((cls_1059e380 *)param_1)->field22_0x4c = 0;
  }
  return (cls_1059e380 *)param_1;
}
