/* @k10d cls_105d436c_new @ 0x104fc616
 * name: verified (structural evidence: heap_alloc(0x80) when NULL; stores vtable 0x105d436c; returns param_1)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d436c (vtable 0x105d436c, 0x80 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x80) when NULL; stores vtable 0x105d436c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105d436c_new(cls_105d436c *param_1)

{
  if ((param_1 != (cls_105d436c *)0x0) ||
     (param_1 = (cls_105d436c *)heap_alloc((void *)0x80), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105d436c/*ROM*/);
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
    ((cls_1059e380 *)param_1)->field23_0x50 = 0;
    ((cls_1059e380 *)param_1)->field24_0x54 = 0;
    ((cls_1059e380 *)param_1)->field25_0x58 = 0;
    ((cls_1059e380 *)param_1)->field26_0x5c = 0;
    ((cls_1059e380 *)param_1)->field27_0x60 = 0;
    ((cls_1059e380 *)param_1)->field28_0x64 = 0;
    ((cls_1059e380 *)param_1)->field29_0x68 = 0;
    ((cls_1059e380 *)param_1)->field30_0x6c = 0;
    ((cls_1059e380 *)param_1)->field31_0x70 = 0;
    ((cls_1059e380 *)param_1)->field32_0x74 = 0;
    ((cls_1059e380 *)param_1)->field33_0x78 = 0;
    ((cls_1059e380 *)param_1)->field34_0x7c = 0;
  }
  return (cls_1059e380 *)param_1;
}
