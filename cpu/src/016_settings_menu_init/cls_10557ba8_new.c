/* @k10d cls_10557ba8_new @ 0x1036aba8
 * name: verified (structural evidence: heap_alloc(0x98) when NULL; stores vtable 0x10557ba8; returns param_1)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557ba8 (vtable 0x10557ba8, 0x98 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x98) when NULL; stores vtable 0x10557ba8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_10557ba8_new(cls_10557ba8 *param_1)

{
  if ((param_1 != (cls_10557ba8 *)0x0) ||
     (param_1 = (cls_10557ba8 *)heap_alloc((void *)0x98), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0)) {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10557ba8/*ROM*/);
    cls_105595a8_new((cls_105595a8 *)&((cls_10557c88 *)param_1)->field8_0x14);
    alloc_and_zero_struct_104bb416(&((cls_10557c88 *)param_1)->field_0x3c);
  }
  return (cls_10557c88 *)param_1;
}
