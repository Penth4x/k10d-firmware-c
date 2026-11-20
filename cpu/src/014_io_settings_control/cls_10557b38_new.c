/* @k10d cls_10557b38_new @ 0x103693ac
 * name: verified (structural evidence: heap_alloc(0x2c4) when NULL; stores vtable 0x10557b38; returns param_1)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557b38 (vtable 0x10557b38, 0x2c4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c4) when NULL; stores vtable 0x10557b38; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_10557b38_new(cls_10557b38 *param_1)

{
  if ((param_1 != (cls_10557b38 *)0x0) ||
     (param_1 = (cls_10557b38 *)heap_alloc((void *)0x2c4), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0))
  {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10557b38/*ROM*/);
    cls_10558fd4_new((cls_10558fd4 *)&((cls_10557c88 *)param_1)->field8_0x14);
    alloc_and_zero_struct_104bb416(&((cls_10557c88 *)param_1)->field_0x3c);
    cls_105b9458_new((cls_105b9458 *)&((cls_10557c88 *)param_1)->field_0x98);
    ((cls_10557c88 *)param_1)->field_0x2ac = 0;
    ((cls_10557c88 *)param_1)->field_0x2b0 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b1 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b2 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b3 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b4 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b5 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b6 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b7 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b8 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b9 = 1;
    ((cls_10557c88 *)param_1)->field_0x2ba = 1;
    ((cls_10557c88 *)param_1)->field_0x2bb = 1;
    ((cls_10557c88 *)param_1)->field_0x2bc = 1;
    ((cls_10557c88 *)param_1)->field_0x2bd = 0;
    ((cls_10557c88 *)param_1)->field_0x2be = 0;
    ((cls_10557c88 *)param_1)->field_0x2bf = 1;
    ((cls_10557c88 *)param_1)->field_0x2c0 = 1;
    ((cls_10557c88 *)param_1)->field_0x2c1 = 0;
    ((cls_10557c88 *)param_1)->field_0x2c2 = 0;
  }
  return (cls_10557c88 *)param_1;
}
