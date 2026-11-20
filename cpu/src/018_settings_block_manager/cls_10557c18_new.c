/* @k10d cls_10557c18_new @ 0x1036b1c4
 * name: verified (structural evidence: heap_alloc(0x3c) when NULL; stores vtable 0x10557c18; returns param_1)
 * unit: 018_settings_block_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557c18 (vtable 0x10557c18, 0x3c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3c) when NULL; stores vtable 0x10557c18; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_10557c18_new(cls_10557c18 *param_1)

{
  if ((param_1 != (cls_10557c18 *)0x0) ||
     (param_1 = (cls_10557c18 *)heap_alloc((void *)0x3c), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0)) {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10557c18/*ROM*/);
    cls_10559678_new((cls_10559678 *)&((cls_10557c88 *)param_1)->field8_0x14);
  }
  return (cls_10557c88 *)param_1;
}
