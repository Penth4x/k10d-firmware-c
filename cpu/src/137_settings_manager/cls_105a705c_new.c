/* @k10d cls_105a705c_new @ 0x10460c2a
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105a705c; returns param_1)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a705c (vtable 0x105a705c, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105a705c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a705c_new(cls_105a705c *obj)

{
  int off;
  int count;

  if ((obj != (cls_105a705c *)0x0) ||
     (obj = (cls_105a705c *)heap_alloc((void *)0x10), obj != (cls_105a705c *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj);
    ((cls_105b5264 *)obj)->field_0x0 = (uint32_t)(&DAT_105a705c/*ROM*/);
    off = 0;
    count = 2;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + off) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + off + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + off + 2) = 0;
      count = count + -1;
      off = off + 3;
    } while (-1 < count);
  }
  return (cls_105b5264 *)obj;
}
