/* @k10d cls_105579a8_new @ 0x10367aba
 * name: verified (structural evidence: heap_alloc(0xac) when NULL; stores vtable 0x105579a8; returns param_1)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105579a8 (vtable 0x105579a8, 0xac bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xac) when NULL; stores vtable 0x105579a8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_105579a8_new(cls_105579a8 *param_1)

{
  if ((param_1 != (cls_105579a8 *)0x0) ||
     (param_1 = (cls_105579a8 *)heap_alloc((void *)0xac), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0)) {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105579a8/*ROM*/);
    ((cls_10557c88 *)param_1)->field8_0x14 = 0;
    ((cls_10557c88 *)param_1)->field_0x15 = 0;
    ((cls_10557c88 *)param_1)->field_0x16 = 0;
    cls_10558da4_new((cls_10558da4 *)&((cls_10557c88 *)param_1)->field_0x18);
    alloc_and_zero_struct_104bb416(&((cls_10557c88 *)param_1)->field_0x40);
    ((cls_10557c88 *)param_1)->field_0x9c = 0;
    ((cls_10557c88 *)param_1)->field_0xa0 = 0;
    ((cls_10557c88 *)param_1)->field_0xa2 = 0;
    ((cls_10557c88 *)param_1)->field_0xa3 = 1;
    ((cls_10557c88 *)param_1)->field_0xa4 = 0;
    ((cls_10557c88 *)param_1)->field_0xa5 = 0;
    ((cls_10557c88 *)param_1)->field_0xa6 = 0;
    ((cls_10557c88 *)param_1)->field_0xa8 = 0x2e;
  }
  return (cls_10557c88 *)param_1;
}
