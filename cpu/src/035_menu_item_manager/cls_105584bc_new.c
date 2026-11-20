/* @k10d cls_105584bc_new @ 0x10373438
 * name: verified (structural evidence: heap_alloc(0x490) when NULL; stores vtable 0x105584bc; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105584bc (vtable 0x105584bc, 0x490 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x490) when NULL; stores vtable 0x105584bc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_105584bc_new(cls_105584bc *param_1)

{
  if ((param_1 != (cls_105584bc *)0x0) ||
     (param_1 = (cls_105584bc *)heap_alloc((void *)0x490), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0))
  {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105584bc/*ROM*/);
    ((cls_10557c88 *)param_1)->field8_0x14 = 0;
    ((cls_10557c88 *)param_1)->field_0x15 = 0;
    ((cls_10557c88 *)param_1)->field_0x18 = 3000;
    ((cls_10557c88 *)param_1)->field_0x1c = 0;
    ((cls_10557c88 *)param_1)->field13_0x1d = 0;
    ((cls_10557c88 *)param_1)->field14_0x1e = 0;
    ((cls_10557c88 *)param_1)->field15_0x1f = 0;
    ((cls_10557c88 *)param_1)->field_0x20 = 0;
    ((cls_10557c88 *)param_1)->field17_0x24 = (uintptr_t)((void *)0x0);
    ((cls_10557c88 *)param_1)->field18_0x28 = 0;
    ((cls_10557c88 *)param_1)->field19_0x29 = 0;
    ((cls_10557c88 *)param_1)->field20_0x2a = 0;
    ((cls_10557c88 *)param_1)->field22_0x2c = 0;
    ((cls_10557c88 *)param_1)->field23_0x2e = 0;
    *(uint16_t *)&((cls_10557c88 *)param_1)->field24_0x30 = 0;
    ((cls_10557c88 *)param_1)->field26_0x32 = 0;
    ((cls_10557c88 *)param_1)->field27_0x34 = 0;
    ((cls_10557c88 *)param_1)->field28_0x38 = 0;
    cls_105b9458_new((cls_105b9458 *)&((cls_10557c88 *)param_1)->field_0x3c);
    cls_105b9458_new((cls_105b9458 *)&((cls_10557c88 *)param_1)->field461_0x250);
    cls_1055a234_new((cls_1055a234 *)&((cls_10557c88 *)param_1)->field985_0x464);
  }
  return (cls_10557c88 *)param_1;
}
