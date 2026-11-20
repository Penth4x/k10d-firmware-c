/* @k10d cls_105577f8_new @ 0x10366a40
 * name: verified (structural evidence: heap_alloc(0x498) when NULL; stores vtable 0x105577f8; returns param_1)
 * unit: 007_mode_settings_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105577f8 (vtable 0x105577f8, 0x498 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x498) when NULL; stores vtable 0x105577f8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_105577f8_new(cls_105577f8 *param_1)

{
  if ((param_1 != (cls_105577f8 *)0x0) ||
     (param_1 = (cls_105577f8 *)heap_alloc((void *)0x498), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0))
  {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105577f8/*ROM*/);
    ((cls_10557c88 *)param_1)->field8_0x14 = 0;
    ((cls_10557c88 *)param_1)->field_0x15 = 0;
    ((cls_10557c88 *)param_1)->field_0x18 = 1;
    ((cls_10557c88 *)param_1)->field_0x1c = 0;
    ((cls_10557c88 *)param_1)->field13_0x1d = 0;
    ((cls_10557c88 *)param_1)->field14_0x1e = 0;
    ((cls_10557c88 *)param_1)->field15_0x1f = 0;
    cls_10558c04_new((cls_10558c04 *)&((cls_10557c88 *)param_1)->field_0x20);
    ((cls_10557c88 *)param_1)->field_0x4c = 0;
    ((cls_10557c88 *)param_1)->field_0x50 = 0;
    ((cls_10557c88 *)param_1)->field_0x54 = 0;
    ((cls_10557c88 *)param_1)->field_0x55 = 0;
    ((cls_10557c88 *)param_1)->field_0x56 = 0;
    ((cls_10557c88 *)param_1)->field_0x57 = 0;
    ((cls_10557c88 *)param_1)->field_0x58 = 0;
    ((cls_10557c88 *)param_1)->field_0x59 = 0;
    ((cls_10557c88 *)param_1)->field_0x5a = 0;
    ((cls_10557c88 *)param_1)->field_0x5c = 0;
    ((cls_10557c88 *)param_1)->field50_0x5d = 0;
    ((cls_10557c88 *)param_1)->field51_0x5e = 0;
    ((cls_10557c88 *)param_1)->field52_0x5f = 0;
    ((cls_10557c88 *)param_1)->field_0x60 = 0;
    ((cls_10557c88 *)param_1)->field54_0x61 = 0;
    ((cls_10557c88 *)param_1)->field55_0x62 = 0;
    ((cls_10557c88 *)param_1)->field56_0x63 = 0;
    ((cls_10557c88 *)param_1)->field_0x64 = 0;
    ((cls_10557c88 *)param_1)->field58_0x65 = 0;
    ((cls_10557c88 *)param_1)->field59_0x66 = 0;
    ((cls_10557c88 *)param_1)->field60_0x67 = 0;
    ((cls_10557c88 *)param_1)->field_0x68 = 0;
    ((cls_10557c88 *)param_1)->field62_0x69 = 0;
    ((cls_10557c88 *)param_1)->field63_0x6a = 0;
    ((cls_10557c88 *)param_1)->field64_0x6b = 0;
    cls_105b9458_new((cls_105b9458 *)&((cls_10557c88 *)param_1)->field65_0x6c);
    cls_105b9458_new((cls_105b9458 *)&((cls_10557c88 *)param_1)->field_0x280);
    ((cls_10557c88 *)param_1)->field_0x494 = 0;
  }
  return (cls_10557c88 *)param_1;
}
