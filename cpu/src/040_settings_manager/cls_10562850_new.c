/* @k10d cls_10562850_new @ 0x1039286a
 * name: verified (structural evidence: heap_alloc(0x84) when NULL; stores vtable 0x10562850; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562850 (vtable 0x10562850, 0x84 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x84) when NULL; stores vtable 0x10562850; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_10562850_new(cls_10562850 *param_1)

{
  if ((param_1 != (cls_10562850 *)0x0) || (param_1 = (cls_10562850 *)heap_alloc((void *)0x84), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uint32_t)(&DAT_10562850/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    ((cls_10562b98 *)param_1)->field_0x8 = 0;
    cls_10563348_new((cls_10563348 *)&((cls_10562b98 *)param_1)->field_0xc);
    alloc_and_zero_two_words_1045c3bc(&((cls_10562b98 *)param_1)->field_0x74);
    ((cls_10562b98 *)param_1)->field_0x7c = 0;
    ((cls_10562b98 *)param_1)->field_0x80 = 0;
  }
  return (cls_10562b98 *)param_1;
}
