/* @k10d cls_10594c54_new @ 0x103b88dc
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x10594c54; returns param_1)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10594c54 (vtable 0x10594c54, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x10594c54; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

cls_1059e128 * cls_10594c54_new(cls_10594c54 *param_1)

{
  if ((param_1 != (cls_10594c54 *)0x0) || (param_1 = (cls_10594c54 *)heap_alloc((void *)0x6c), (cls_1059e128 *)param_1 != (cls_1059e128 *)0x0)) {
    cls_1059e128_new((cls_1059e128 *)param_1);
    cls_105a2a8c_new((cls_105a2a8c *)&((cls_1059e128 *)param_1)->field_0x40);
    ((cls_1059e128 *)param_1)->field_0x0 = (uintptr_t)((void *)0x10594c54/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x4 = (uintptr_t)((void *)0x10594d24/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x18 = (uintptr_t)((void *)0x10594d44/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x2c = (uintptr_t)((void *)0x10594d74/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x30 = (uintptr_t)((void *)0x10594d8c/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x34 = (uintptr_t)((void *)0x10594dac/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x44 = (uintptr_t)((void *)0x10594dec/*ROM*/);
    cls_105a2af8_new((cls_105a2af8 *)&((cls_1059e128 *)param_1)->field_0x48);
    ((cls_1059e128 *)param_1)->field_0x50 = (uintptr_t)((void *)0x0);
    ((cls_1059e128 *)param_1)->field_0x54 = 0;
    ((cls_1059e128 *)param_1)->field_0x58 = 0;
    *(uint16_t *)&((cls_1059e128 *)param_1)->field_0x5c = 0;
    ((cls_1059e128 *)param_1)->field_0x60 = 0;
    ((cls_1059e128 *)param_1)->field46_0x64 = '\0';
    ((cls_1059e128 *)param_1)->field_0x65 = '\0';
    ((cls_1059e128 *)param_1)->field_0x68 = 0;
  }
  return (cls_1059e128 *)param_1;
}
