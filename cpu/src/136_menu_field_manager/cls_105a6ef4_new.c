/* @k10d cls_105a6ef4_new @ 0x1046045c
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105a6ef4; returns param_1)
 * unit: 136_menu_field_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6ef4 (vtable 0x105a6ef4, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105a6ef4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6ef4_new(cls_105a6ef4 *obj_ptr)

{
  int byte_off;
  int iter_count;

  if ((obj_ptr != (cls_105a6ef4 *)0x0) ||
     (obj_ptr = (cls_105a6ef4 *)heap_alloc((void *)0x20), obj_ptr != (cls_105a6ef4 *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj_ptr);
    ((cls_105b5264 *)obj_ptr)->field_0x0 = (uintptr_t)(&DAT_105a6ef4/*ROM*/);
    byte_off = 0;
    iter_count = 8;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_off) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_off + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_off + 2) = 0;
      iter_count = iter_count + -1;
      byte_off = byte_off + 3;
    } while (-1 < iter_count);
  }
  return (cls_105b5264 *)obj_ptr;
}
