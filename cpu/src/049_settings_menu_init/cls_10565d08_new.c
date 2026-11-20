/* @k10d cls_10565d08_new @ 0x103ada9c
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x10565d08; returns param_1)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10565d08 (vtable 0x10565d08, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x10565d08; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105643d0 * cls_10565d08_new(cls_10565d08 *param_1)

{
  if ((param_1 != (cls_10565d08 *)0x0) ||
     (param_1 = (cls_10565d08 *)heap_alloc((void *)0x58), (cls_105643d0 *)param_1 != (cls_105643d0 *)0x0)) {
    cls_105643d0_new((cls_105643d0 *)param_1);
    cls_105a2a8c_new((cls_105a2a8c *)&((cls_105643d0 *)param_1)->field40_0x40);
    ((cls_105643d0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x10565d08/*ROM*/);
    ((cls_105643d0 *)param_1)->field44_0x44 = 0x10;
    ((cls_105643d0 *)param_1)->field45_0x45 = 0x56;
    ((cls_105643d0 *)param_1)->field46_0x46 = 0x5d;
    ((cls_105643d0 *)param_1)->field47_0x47 = 0xa8;
    ((cls_105643d0 *)param_1)->field48_0x48 = 0;
    ((cls_105643d0 *)param_1)->field49_0x49 = 0;
    ((cls_105643d0 *)param_1)->field50_0x4a = 0;
    ((cls_105643d0 *)param_1)->field51_0x4b = 0;
    ((cls_105643d0 *)param_1)->field52_0x4c = '\0';
    ((cls_105643d0 *)param_1)->field53_0x4d = 0;
    ((cls_105643d0 *)param_1)->field54_0x4e = 0;
    ((cls_105643d0 *)param_1)->field55_0x4f = 0;
    *(uint8_t *)&((cls_105643d0 *)param_1)->field56_0x50 = 0;
    ((cls_105643d0 *)param_1)->field57_0x54 = 0;
    ((cls_105643d0 *)param_1)->field58_0x56 = 1;
    ((cls_105643d0 *)param_1)->field59_0x57 = ',';
  }
  return (cls_105643d0 *)param_1;
}
