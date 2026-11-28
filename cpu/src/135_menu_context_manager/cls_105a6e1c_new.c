/* @k10d cls_105a6e1c_new @ 0x104600de
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105a6e1c; returns param_1)
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6e1c (vtable 0x105a6e1c, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105a6e1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6e1c_new(cls_105a6e1c *obj)

{
  int byte_off;
  int iter;

  if ((obj != (cls_105a6e1c *)0x0) ||
     (obj = (cls_105a6e1c *)heap_alloc((void *)0x14), obj != (cls_105a6e1c *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj);
    ((cls_105b5264 *)obj)->field_0x0 = (uintptr_t)(&DAT_105a6e1c/*ROM*/);
    byte_off = 0;
    iter = 3;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off + 2) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off + 3) = 0;
      iter = iter + -1;
      byte_off = byte_off + 4;
    } while (-1 < iter);
  }
  return (cls_105b5264 *)obj;
}
