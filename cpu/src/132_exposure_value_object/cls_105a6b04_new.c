/* @k10d cls_105a6b04_new @ 0x1045f3ac
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105a6b04; returns param_1)
 * unit: 132_exposure_value_object (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6b04 (vtable 0x105a6b04, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105a6b04; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6b04_new(cls_105a6b04 *this_obj)

{
  int byte_off;
  int word_cnt;

  if ((this_obj != (cls_105a6b04 *)0x0) ||
     (this_obj = (cls_105a6b04 *)heap_alloc((void *)0x10), this_obj != (cls_105a6b04 *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)this_obj);
    ((cls_105b5264 *)this_obj)->field_0x0 = (uintptr_t)(&DAT_105a6b04/*ROM*/);
    byte_off = 0;
    word_cnt = 2;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(this_obj + 1))->field_0x0 + byte_off) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(this_obj + 1))->field_0x0 + byte_off + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(this_obj + 1))->field_0x0 + byte_off + 2) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(this_obj + 1))->field_0x0 + byte_off + 3) = 0;
      word_cnt = word_cnt + -1;
      byte_off = byte_off + 4;
    } while (-1 < word_cnt);
  }
  return (cls_105b5264 *)this_obj;
}
