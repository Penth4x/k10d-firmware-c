/* @k10d cls_105a6cfc_new @ 0x1045fbd6
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x105a6cfc; returns param_1)
 * unit: 133_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6cfc (vtable 0x105a6cfc, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x105a6cfc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6cfc_new(cls_105a6cfc *this_ptr)

{
  int byte_off;
  int triple_count;

  if ((this_ptr != (cls_105a6cfc *)0x0) ||
     (this_ptr = (cls_105a6cfc *)heap_alloc((void *)0x4c), this_ptr != (cls_105a6cfc *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)this_ptr);
    ((cls_105b5264 *)this_ptr)->field_0x0 = (uintptr_t)(&DAT_105a6cfc/*ROM*/);
    byte_off = 0;
    triple_count = 0x16;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(this_ptr + 1))->field_0x0 + byte_off) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(this_ptr + 1))->field_0x0 + byte_off + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(this_ptr + 1))->field_0x0 + byte_off + 2) = 0;
      triple_count = triple_count + -1;
      byte_off = byte_off + 3;
    } while (-1 < triple_count);
  }
  return (cls_105b5264 *)this_ptr;
}
