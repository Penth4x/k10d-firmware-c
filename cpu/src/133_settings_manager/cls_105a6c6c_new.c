/* @k10d cls_105a6c6c_new @ 0x1045f9be
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105a6c6c; returns param_1)
 * unit: 133_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6c6c (vtable 0x105a6c6c, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105a6c6c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6c6c_new(cls_105a6c6c *obj)

{
  int byte_off;
  int remaining_words;

  if ((obj != (cls_105a6c6c *)0x0) ||
     (obj = (cls_105a6c6c *)heap_alloc((void *)0x24), obj != (cls_105a6c6c *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj);
    ((cls_105b5264 *)obj)->field_0x0 = (uintptr_t)(&DAT_105a6c6c/*ROM*/);
    byte_off = 0;
    remaining_words = 7;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off + 2) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(obj + 1))->field_0x0 + byte_off + 3) = 0;
      remaining_words = remaining_words + -1;
      byte_off = byte_off + 4;
    } while (-1 < remaining_words);
  }
  return (cls_105b5264 *)obj;
}
