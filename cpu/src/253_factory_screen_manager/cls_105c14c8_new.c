/* @k10d cls_105c14c8_new @ 0x104e7de0
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105c14c8; returns param_1)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c14c8 (vtable 0x105c14c8, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105c14c8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105c14c8_new(cls_105c14c8 *param_1)

{
  if ((param_1 != (cls_105c14c8 *)0x0) ||
     (param_1 = (cls_105c14c8 *)heap_alloc((void *)0xc), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_105c14c8/*ROM*/;
    ((cls_1059e380 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
    ((cls_1059e380 *)param_1)->field2_0x8 = (uint32_t)(void *)0x0;
  }
  return (cls_1059e380 *)param_1;
}
