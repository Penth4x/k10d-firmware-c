/* @k10d cls_105b4cbc_new @ 0x10494ba4
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b4cbc; returns param_1)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4cbc (vtable 0x105b4cbc, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b4cbc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b49ec * cls_105b4cbc_new(cls_105b4cbc *param_1)

{
  if ((param_1 != (cls_105b4cbc *)0x0) ||
     (param_1 = (cls_105b4cbc *)heap_alloc((void *)0x10), (cls_105b49ec *)param_1 != (cls_105b49ec *)0x0)) {
    cls_105b49ec_new((cls_105b49ec *)param_1);
    ((cls_105b49ec *)param_1)->field_0xc = (uint32_t)&DAT_105b4cbc/*ROM*/;
  }
  return (cls_105b49ec *)param_1;
}
