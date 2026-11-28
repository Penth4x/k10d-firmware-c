/* @k10d cls_105a6c24_new @ 0x1045f89c
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105a6c24; returns param_1)
 * unit: 133_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6c24 (vtable 0x105a6c24, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105a6c24; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6c24_new(cls_105a6c24 *obj_ptr)

{
  int byte_off;
  int iter_count;

  if ((obj_ptr != (cls_105a6c24 *)0x0) ||
     (obj_ptr = (cls_105a6c24 *)heap_alloc((void *)0x24), obj_ptr != (cls_105a6c24 *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj_ptr);
    ((cls_105b5264 *)obj_ptr)->field_0x0 = (uintptr_t)(&DAT_105a6c24/*ROM*/);
    byte_off = 0;
    iter_count = 7;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_off) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_off + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_off + 2) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_off + 3) = 0;
      iter_count = iter_count + -1;
      byte_off = byte_off + 4;
    } while (-1 < iter_count);
  }
  return (cls_105b5264 *)obj_ptr;
}
