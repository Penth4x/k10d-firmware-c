/* @k10d cls_10562e10_new @ 0x10395b24
 * name: verified (structural evidence: heap_alloc(0xc8) when NULL; stores vtable 0x10562e10; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562e10 (vtable 0x10562e10, 0xc8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc8) when NULL; stores vtable 0x10562e10; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_10562e10_new(cls_10562e10 *param_1)

{
  if ((param_1 != (cls_10562e10 *)0x0) ||
     (param_1 = (cls_10562e10 *)heap_alloc((void *)200), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10562e10/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    cls_105639fc_new((cls_105639fc *)&((cls_10562b98 *)param_1)->field_0x8);
    ((cls_10562b98 *)param_1)->field141_0xb4 = 0;
    ((cls_10562b98 *)param_1)->field142_0xb8 = 0;
    alloc_and_zero_two_words_1045c3bc(&((cls_10562b98 *)param_1)->field143_0xbc);
    ((cls_10562b98 *)param_1)->field151_0xc4 = 0;
  }
  return (cls_10562b98 *)param_1;
}
