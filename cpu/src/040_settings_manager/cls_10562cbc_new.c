/* @k10d cls_10562cbc_new @ 0x103952c2
 * name: verified (structural evidence: heap_alloc(0x7c) when NULL; stores vtable 0x10562cbc; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562cbc (vtable 0x10562cbc, 0x7c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x7c) when NULL; stores vtable 0x10562cbc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_10562cbc_new(cls_10562cbc *param_1)

{
  if ((param_1 != (cls_10562cbc *)0x0) ||
     (param_1 = (cls_10562cbc *)heap_alloc((void *)0x7c), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10562cbc/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    cls_10563824_new((cls_10563824 *)&((cls_10562b98 *)param_1)->field_0x8);
    ((cls_10562b98 *)param_1)->field_0x74 = (uintptr_t)((void *)0x0);
    ((cls_10562b98 *)param_1)->field90_0x78 = 0;
  }
  return (cls_10562b98 *)param_1;
}
