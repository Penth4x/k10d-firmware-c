/* @k10d cls_105a5d5c_new @ 0x1045d2ba
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105a5d5c; returns param_1)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a5d5c (vtable 0x105a5d5c, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105a5d5c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a5d5c_new(cls_105a5d5c *obj)

{
  int byte_off;
  int remaining;

  if ((obj != (cls_105a5d5c *)0x0) ||
     (obj = (cls_105a5d5c *)heap_alloc((void *)0xc), obj != (cls_105a5d5c *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj);
    ((cls_105b5264 *)obj)->field_0x0 = (uintptr_t)(&DAT_105a5d5c/*ROM*/);
    byte_off = 0;
    remaining = 1;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off + 2) = 0;
      remaining = remaining + -1;
      byte_off = byte_off + 3;
    } while (-1 < remaining);
  }
  return (cls_105b5264 *)obj;
}
