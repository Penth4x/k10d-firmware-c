/* @k10d cls_105a6dd4_new @ 0x1045fff8
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105a6dd4; returns param_1)
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6dd4 (vtable 0x105a6dd4, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105a6dd4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6dd4_new(cls_105a6dd4 *this)

{
  int byte_off;
  int remaining_words;

  if ((this != (cls_105a6dd4 *)0x0) ||
     (this = (cls_105a6dd4 *)heap_alloc((void *)0x14), this != (cls_105a6dd4 *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)this);
    ((cls_105b5264 *)this)->field_0x0 = (uintptr_t)(&DAT_105a6dd4/*ROM*/);
    byte_off = 0;
    remaining_words = 3;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(this + 1))->field_0x0 + byte_off) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(this + 1))->field_0x0 + byte_off + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(this + 1))->field_0x0 + byte_off + 2) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(this + 1))->field_0x0 + byte_off + 3) = 0;
      remaining_words = remaining_words + -1;
      byte_off = byte_off + 4;
    } while (-1 < remaining_words);
  }
  return (cls_105b5264 *)this;
}
