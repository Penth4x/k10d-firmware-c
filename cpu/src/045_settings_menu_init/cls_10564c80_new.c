/* @k10d cls_10564c80_new @ 0x103a42d4
 * name: verified (structural evidence: heap_alloc(0x68) when NULL; stores vtable 0x10564c80; returns param_1)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10564c80 (vtable 0x10564c80, 0x68 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x68) when NULL; stores vtable 0x10564c80; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105643d0 * cls_10564c80_new(cls_10564c80 *param_1)

{
  if ((param_1 != (cls_10564c80 *)0x0) ||
     (param_1 = (cls_10564c80 *)heap_alloc((void *)0x68), (cls_105643d0 *)param_1 != (cls_105643d0 *)0x0)) {
    cls_105643d0_new((cls_105643d0 *)param_1);
    ((cls_105643d0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x10564c80/*ROM*/);
    initialize_lens_update_object(&((cls_105643d0 *)param_1)->field40_0x40,0x10);
    *(uint8_t *)&((cls_105643d0 *)param_1)->field56_0x50 = 0;
    ((cls_105643d0 *)param_1)->field57_0x54 = 0;
    ((cls_105643d0 *)param_1)->field58_0x56 = 0;
    ((cls_105643d0 *)param_1)->field59_0x57 = '\0';
    *(uint32_t *)&((cls_105643d0 *)param_1)->field_0x58 = 0;
    ((cls_105643d0 *)param_1)->field64_0x5c = 0x140;
    ((cls_105643d0 *)param_1)->field65_0x5e = 0xf0;
    ((cls_105643d0 *)param_1)->field66_0x60 = 0;
    ((cls_105643d0 *)param_1)->field67_0x62 = 0;
    *(uint8_t *)&((cls_105643d0 *)param_1)->field68_0x64 = 1;
    *(uint8_t *)((int)&((cls_105643d0 *)param_1)->field68_0x64 + 1) = 0;
    *(uint8_t *)&((cls_105643d0 *)param_1)->field69_0x66 = 0;
    *(uint8_t *)((int)&((cls_105643d0 *)param_1)->field69_0x66 + 1) = 0;
  }
  return (cls_105643d0 *)param_1;
}
