/* @k10d cls_105a6abc_new @ 0x1045f20c
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105a6abc; returns param_1)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6abc (vtable 0x105a6abc, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105a6abc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6abc_new(cls_105a6abc *obj_ptr)

{
  int byte_offset;
  int loop_count;

  if ((obj_ptr != (cls_105a6abc *)0x0) ||
     (obj_ptr = (cls_105a6abc *)heap_alloc((void *)0x14), obj_ptr != (cls_105a6abc *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj_ptr);
    ((cls_105b5264 *)obj_ptr)->field_0x0 = (uintptr_t)(&DAT_105a6abc/*ROM*/);
    byte_offset = 0;
    loop_count = 3;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_offset) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_offset + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_offset + 2) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_offset + 3) = 0;
      loop_count = loop_count + -1;
      byte_offset = byte_offset + 4;
    } while (-1 < loop_count);
  }
  return (cls_105b5264 *)obj_ptr;
}
