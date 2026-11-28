/* @k10d cls_105a6d44_new @ 0x1045fd8c
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105a6d44; returns param_1)
 * unit: 134_settings_struct_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6d44 (vtable 0x105a6d44, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105a6d44; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6d44_new(cls_105a6d44 *obj_ptr)

{
  int byte_offset;
  int remaining_words;

  if ((obj_ptr != (cls_105a6d44 *)0x0) ||
     (obj_ptr = (cls_105a6d44 *)heap_alloc((void *)0x14), obj_ptr != (cls_105a6d44 *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj_ptr);
    ((cls_105b5264 *)obj_ptr)->field_0x0 = (uintptr_t)(&DAT_105a6d44/*ROM*/);
    byte_offset = 0;
    remaining_words = 3;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_offset) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_offset + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_offset + 2) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj_ptr + 1))->field_0x0 + byte_offset + 3) = 0;
      remaining_words = remaining_words + -1;
      byte_offset = byte_offset + 4;
    } while (-1 < remaining_words);
  }
  return (cls_105b5264 *)obj_ptr;
}
