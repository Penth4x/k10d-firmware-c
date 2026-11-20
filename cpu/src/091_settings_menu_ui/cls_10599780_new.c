/* @k10d cls_10599780_new @ 0x10408686
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x10599780; returns param_1)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10599780 (vtable 0x10599780, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x10599780; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10599780 * cls_10599780_new(cls_10599780 *param_1)

{
  if ((param_1 != (cls_10599780 *)0x0) ||
     (param_1 = (cls_10599780 *)heap_alloc((void *)0x28), param_1 != (cls_10599780 *)0x0)) {
    cls_10559fc0_new((cls_10559fc0 *)param_1);
    param_1->field_0x0 = (uint32_t)&DAT_10599780/*ROM*/;
    param_1->field_0x4 = (uint32_t)&DAT_10599808/*ROM*/;
    param_1->field_0x8 = (uint32_t)&DAT_10599830/*ROM*/;
  }
  return param_1;
}
