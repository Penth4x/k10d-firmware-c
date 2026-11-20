/* @k10d cls_105a6e64_new @ 0x104601c4
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a6e64; returns param_1)
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6e64 (vtable 0x105a6e64, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a6e64; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a6e64 * cls_105a6e64_new(cls_105a6e64 *param_1)

{
  if ((param_1 != (cls_105a6e64 *)0x0) ||
     (param_1 = (cls_105a6e64 *)heap_alloc((void *)8), param_1 != (cls_105a6e64 *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)param_1);
    param_1->field_0x0 = (uint32_t)&DAT_105a6e64/*ROM*/;
    param_1->field_0x4 = 0;
    param_1->field_0x5 = 0;
    param_1->field_0x6 = 0;
    param_1->field_0x7 = 0;
  }
  return param_1;
}
