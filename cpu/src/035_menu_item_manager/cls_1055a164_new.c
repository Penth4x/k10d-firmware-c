/* @k10d cls_1055a164_new @ 0x1038eca0
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x1055a164; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1055a164 (vtable 0x1055a164, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x1055a164; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559fc0 * cls_1055a164_new(cls_1055a164 *param_1)

{
  if ((param_1 != (cls_1055a164 *)0x0) ||
     (param_1 = (cls_1055a164 *)heap_alloc((void *)0x28), param_1 != (cls_1055a164 *)0x0)) {
    cls_10559fc0_new((cls_10559fc0 *)param_1);
    ((cls_10559fc0 *)param_1)->field_0x0 = (uint32_t)&DAT_1055a164/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x4 = (uint32_t)&DAT_1055a1ec/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x8 = (uint32_t)&DAT_1055a214/*ROM*/;
  }
  return (cls_10559fc0 *)param_1;
}
