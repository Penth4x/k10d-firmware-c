/* @k10d cls_105a6fcc_new @ 0x10460a7a
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a6fcc; returns param_1)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6fcc (vtable 0x105a6fcc, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a6fcc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a6fcc * cls_105a6fcc_new(cls_105a6fcc *param_1)

{
  if ((param_1 != (cls_105a6fcc *)0x0) ||
     (param_1 = (cls_105a6fcc *)heap_alloc((void *)8), param_1 != (cls_105a6fcc *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)param_1);
    param_1->field_0x0 = (uintptr_t)((void *)0x105a6fcc/*ROM*/);
    param_1->field_0x4 = 0;
  }
  return param_1;
}
