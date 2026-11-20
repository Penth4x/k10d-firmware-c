/* @k10d cls_10566478_new @ 0x103b2f42
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x10566478; returns param_1)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10566478 (vtable 0x10566478, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x10566478; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105643d0 * cls_10566478_new(cls_10566478 *param_1)

{
  if ((param_1 != (cls_10566478 *)0x0) ||
     (param_1 = (cls_10566478 *)heap_alloc((void *)0x6c), (cls_105643d0 *)param_1 != (cls_105643d0 *)0x0)) {
    cls_105643d0_new((cls_105643d0 *)param_1);
    ((cls_105643d0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x10566478/*ROM*/);
    ((cls_105643d0 *)param_1)->field40_0x40 = 0;
    ((cls_105643d0 *)param_1)->field41_0x41 = '\0';
    ((cls_105643d0 *)param_1)->field42_0x42 = 0;
    ((cls_105643d0 *)param_1)->field43_0x43 = 0;
    ((cls_105643d0 *)param_1)->field44_0x44 = 0;
    ((cls_105643d0 *)param_1)->field45_0x45 = 0;
    ((cls_105643d0 *)param_1)->field46_0x46 = 0;
    ((cls_105643d0 *)param_1)->field47_0x47 = 0;
    ((cls_105643d0 *)param_1)->field48_0x48 = 0;
    ((cls_105643d0 *)param_1)->field49_0x49 = 0;
    ((cls_105643d0 *)param_1)->field50_0x4a = 0;
    ((cls_105643d0 *)param_1)->field51_0x4b = 0;
    *(uint8_t *)&((cls_105643d0 *)param_1)->field69_0x66 = 0;
    *(uint8_t *)((int)&((cls_105643d0 *)param_1)->field69_0x66 + 1) = 0;
    ((cls_105643d0 *)param_1)->field70_0x68 = 0;
    ((cls_105643d0 *)param_1)->field71_0x6a = 0;
    ((cls_105643d0 *)param_1)->field68_0x64 = 0x24;
    ((cls_105643d0 *)param_1)->field67_0x62 = 0x22;
    ((cls_105643d0 *)param_1)->field66_0x60 = 0x21;
    ((cls_105643d0 *)param_1)->field65_0x5e = 0x20;
    ((cls_105643d0 *)param_1)->field64_0x5c = 0x1e;
    ((cls_105643d0 *)param_1)->field62_0x5a = 0;
    ((cls_105643d0 *)param_1)->field63_0x5b = 0x1c;
    *(uint16_t *)&((cls_105643d0 *)param_1)->field_0x58 = 0x1b;
    ((cls_105643d0 *)param_1)->field58_0x56 = 0;
    ((cls_105643d0 *)param_1)->field59_0x57 = '\x1a';
    ((cls_105643d0 *)param_1)->field57_0x54 = 0x18;
    *(uint16_t *)((int)&((cls_105643d0 *)param_1)->field56_0x50 + 2) = 0x16;
    *(uint16_t *)&((cls_105643d0 *)param_1)->field56_0x50 = 0x15;
    ((cls_105643d0 *)param_1)->field54_0x4e = 0;
    ((cls_105643d0 *)param_1)->field55_0x4f = 0x14;
    ((cls_105643d0 *)param_1)->field52_0x4c = '\0';
    ((cls_105643d0 *)param_1)->field53_0x4d = 0x12;
  }
  return (cls_105643d0 *)param_1;
}
