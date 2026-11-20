/* @k10d cls_105595a8_new @ 0x10387a28
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105595a8; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105595a8 (vtable 0x105595a8, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105595a8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559fc0 * cls_105595a8_new(cls_105595a8 *param_1)

{
  if ((param_1 != (cls_105595a8 *)0x0) ||
     (param_1 = (cls_105595a8 *)heap_alloc((void *)0x28), (cls_10559fc0 *)param_1 != (cls_10559fc0 *)0x0)) {
    cls_10559fc0_new((cls_10559fc0 *)param_1);
    ((cls_10559fc0 *)param_1)->field_0x0 = (uint32_t)&DAT_105595a8/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x4 = (uint32_t)&DAT_10559630/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x8 = (uint32_t)&DAT_10559658/*ROM*/;
  }
  return (cls_10559fc0 *)param_1;
}
