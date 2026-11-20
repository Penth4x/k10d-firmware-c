/* @k10d cls_10562758_new @ 0x10391f64
 * name: verified (structural evidence: heap_alloc(0x8c) when NULL; stores vtable 0x10562758; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562758 (vtable 0x10562758, 0x8c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8c) when NULL; stores vtable 0x10562758; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_10562758_new(cls_10562758 *param_1)

{
  if ((param_1 != (cls_10562758 *)0x0) ||
     (param_1 = (cls_10562758 *)heap_alloc((void *)0x8c), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10562758/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    ((cls_10562b98 *)param_1)->field_0x8 = 0;
    cls_105631d0_new((cls_105631d0 *)&((cls_10562b98 *)param_1)->field_0xc);
    alloc_and_zero_two_words_1045c3bc(&((cls_10562b98 *)param_1)->field_0x7c);
    ((cls_10562b98 *)param_1)->field_0x84 = 0;
    ((cls_10562b98 *)param_1)->field_0x88 = 1;
    ((cls_10562b98 *)param_1)->field_0x89 = 0;
  }
  return (cls_10562b98 *)param_1;
}
