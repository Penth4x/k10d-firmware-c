/* @k10d cls_105a6d8c_new @ 0x1045fe72
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a6d8c; returns param_1)
 * unit: 134_settings_struct_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6d8c (vtable 0x105a6d8c, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a6d8c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6d8c_new(cls_105a6d8c *obj)

{
  int off;
  int n3;
  int n1;

  if ((obj != (cls_105a6d8c *)0x0) ||
     (obj = (cls_105a6d8c *)heap_alloc((void *)0x1c), obj != (cls_105a6d8c *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj);
    ((cls_105b5264 *)obj)->field_0x0 = (uintptr_t)(&DAT_105a6d8c/*ROM*/);
    off = 0;
    n3 = 0x14;
    do {
      n1 = n3;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + off) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + off + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + off + 2) = 0;
      n3 = n1 + -3;
      off = off + 3;
    } while (-1 < n3);
    n1 = n1 + -1;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + off) = 0;
      n1 = n1 + -1;
      off = off + 1;
    } while (-1 < n1);
  }
  return (cls_105b5264 *)obj;
}
