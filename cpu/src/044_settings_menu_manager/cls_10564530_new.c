/* @k10d cls_10564530_new @ 0x1039fe1e
 * name: verified (structural evidence: heap_alloc(0xa0) when NULL; stores vtable 0x10564530; returns param_1)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10564530 (vtable 0x10564530, 0xa0 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xa0) when NULL; stores vtable 0x10564530; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105643d0 * cls_10564530_new(cls_10564530 *param_1)

{
  if ((param_1 != (cls_10564530 *)0x0) ||
     (param_1 = (cls_10564530 *)heap_alloc((void *)0xa0), (cls_105643d0 *)param_1 != (cls_105643d0 *)0x0)) {
    cls_105643d0_new((cls_105643d0 *)param_1);
    ((cls_105643d0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x10564530/*ROM*/);
    initialize_lens_update_object(&((cls_105643d0 *)param_1)->field40_0x40,0x10);
    ((cls_105643d0 *)param_1)->field56_0x50 = 0;
    ((cls_105643d0 *)param_1)->field57_0x54 = 0x2b;
    ((cls_105643d0 *)param_1)->field58_0x56 = 0;
    ((cls_105643d0 *)param_1)->field59_0x57 = '0';
    *(uint16_t *)&((cls_105643d0 *)param_1)->field_0x58 = 0x23;
    ((cls_105643d0 *)param_1)->field62_0x5a = 0;
    ((cls_105643d0 *)param_1)->field63_0x5b = 2;
    ((cls_105643d0 *)param_1)->field64_0x5c = 2;
    ((cls_105643d0 *)param_1)->field65_0x5e = 0x23;
    ((cls_105643d0 *)param_1)->field66_0x60 = 0x27;
    ((cls_105643d0 *)param_1)->field67_0x62 = 0x2b;
    ((cls_105643d0 *)param_1)->field68_0x64 = 0x1d;
    ((cls_105643d0 *)param_1)->field69_0x66 = 0x3c;
    ((cls_105643d0 *)param_1)->field70_0x68 = 0x3c;
    ((cls_105643d0 *)param_1)->field71_0x6a = 0x1d;
    ((cls_105643d0 *)param_1)->field72_0x6c = 0x24;
    ((cls_105643d0 *)param_1)->field73_0x6e = 6;
    ((cls_105643d0 *)param_1)->field74_0x70 = 0x25;
    ((cls_105643d0 *)param_1)->field75_0x72 = 6;
    ((cls_105643d0 *)param_1)->field76_0x74 = 0;
    ((cls_105643d0 *)param_1)->field77_0x75 = 0x25;
    ((cls_105643d0 *)param_1)->field78_0x76 = 6;
    ((cls_105643d0 *)param_1)->field79_0x78 = 0x27;
    ((cls_105643d0 *)param_1)->field80_0x7a = 7;
    ((cls_105643d0 *)param_1)->field81_0x7c = 0x1a;
    ((cls_105643d0 *)param_1)->field82_0x7e = 0x25;
    ((cls_105643d0 *)param_1)->field83_0x80 = 0x1a;
    ((cls_105643d0 *)param_1)->field84_0x82 = 0x25;
    ((cls_105643d0 *)param_1)->field85_0x84 = 0;
    ((cls_105643d0 *)param_1)->field86_0x85 = 0;
    ((cls_105643d0 *)param_1)->field87_0x86 = 0;
    ((cls_105643d0 *)param_1)->field88_0x87 = 0x24;
    ((cls_105643d0 *)param_1)->field89_0x88 = 0;
    ((cls_105643d0 *)param_1)->field90_0x89 = 6;
    ((cls_105643d0 *)param_1)->field91_0x8a = 0;
    ((cls_105643d0 *)param_1)->field92_0x8b = 0x25;
    ((cls_105643d0 *)param_1)->field93_0x8c = 0;
    ((cls_105643d0 *)param_1)->field94_0x8d = 6;
    ((cls_105643d0 *)param_1)->field97_0x90 = 4000;
    ((cls_105643d0 *)param_1)->field98_0x94 = 0;
    ((cls_105643d0 *)param_1)->field99_0x95 = 0;
    ((cls_105643d0 *)param_1)->field100_0x96 = 0xf;
    ((cls_105643d0 *)param_1)->field101_0x97 = 0xa0;
    ((cls_105643d0 *)param_1)->field102_0x98 = 0;
    ((cls_105643d0 *)param_1)->field103_0x99 = 0;
    ((cls_105643d0 *)param_1)->field104_0x9a = 0xf;
    ((cls_105643d0 *)param_1)->field105_0x9b = 0xa0;
    ((cls_105643d0 *)param_1)->field106_0x9c = 0;
    ((cls_105643d0 *)param_1)->field107_0x9d = 0;
    ((cls_105643d0 *)param_1)->field108_0x9e = 0xf;
    ((cls_105643d0 *)param_1)->field109_0x9f = 0xa0;
  }
  return (cls_105643d0 *)param_1;
}
