/* @k10d cls_10562eec_new @ 0x10396440
 * name: verified (structural evidence: heap_alloc(0x84) when NULL; stores vtable 0x10562eec; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562eec (vtable 0x10562eec, 0x84 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x84) when NULL; stores vtable 0x10562eec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_10562eec_new(cls_10562eec *param_1)

{
  if ((param_1 != (cls_10562eec *)0x0) || (param_1 = (cls_10562eec *)heap_alloc((void *)0x84), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uint32_t)(&DAT_10562eec/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    ((cls_10562b98 *)param_1)->field_0x8 = 0;
    cls_10563ae8_new((cls_10563ae8 *)&((cls_10562b98 *)param_1)->field_0xc);
    alloc_and_zero_two_words_1045c3bc(&((cls_10562b98 *)param_1)->field_0x74);
    ((cls_10562b98 *)param_1)->field_0x7c = 0;
    ((cls_10562b98 *)param_1)->field_0x80 = 1;
    ((cls_10562b98 *)param_1)->field93_0x81 = 0;
  }
  return (cls_10562b98 *)param_1;
}
