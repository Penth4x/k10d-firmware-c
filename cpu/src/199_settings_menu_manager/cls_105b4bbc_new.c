/* @k10d cls_105b4bbc_new @ 0x10494b04
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b4bbc; returns param_1)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4bbc (vtable 0x105b4bbc, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b4bbc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b4bbc_new(cls_105b4bbc *param_1)

{
  if ((param_1 != (cls_105b4bbc *)0x0) ||
     (param_1 = (cls_105b4bbc *)heap_alloc((void *)0x10), (cls_105b49ec *)param_1 != (cls_105b49ec *)0x0)) {
    cls_105b49ec_new((cls_105b49ec *)param_1);
    ((cls_105b49ec *)param_1)->field_0xc = (uint32_t)&DAT_105b4bbc/*ROM*/;
  }
  return (int)(cls_105b49ec *)param_1;
}
