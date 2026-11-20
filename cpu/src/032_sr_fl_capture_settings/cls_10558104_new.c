/* @k10d cls_10558104_new @ 0x10371742
 * name: verified (structural evidence: heap_alloc(0x700) when NULL; stores vtable 0x10558104; returns param_1)
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10558104 (vtable 0x10558104, 0x700 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x700) when NULL; stores vtable 0x10558104; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_10558104_new(cls_10558104 *param_1)

{
  if ((param_1 != (cls_10558104 *)0x0) || (param_1 = (cls_10558104 *)heap_alloc((void *)0x700), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0))
  {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uint32_t)(&DAT_10558104/*ROM*/);
    ((cls_10557c88 *)param_1)->field8_0x14 = 0;
    ((cls_10557c88 *)param_1)->field_0x15 = 0;
    ((cls_10557c88 *)param_1)->field_0x18 = 0;
    ((cls_10557c88 *)param_1)->field_0x1c = 0;
    ((cls_10557c88 *)param_1)->field13_0x1d = 0;
    ((cls_10557c88 *)param_1)->field14_0x1e = 0;
    ((cls_10557c88 *)param_1)->field15_0x1f = 1;
    cls_10598538_new((cls_10598538 *)&((cls_10557c88 *)param_1)->field_0x20);
    ((cls_10557c88 *)param_1)->field_0x4c = 0;
    ((cls_10557c88 *)param_1)->field_0x50 = 0;
    ((cls_10557c88 *)param_1)->field_0x54 = 0;
    ((cls_10557c88 *)param_1)->field_0x55 = 0;
    ((cls_10557c88 *)param_1)->field_0x56 = 0;
    ((cls_10557c88 *)param_1)->field_0x57 = 0;
    ((cls_10557c88 *)param_1)->field_0x58 = 0;
    ((cls_10557c88 *)param_1)->field_0x59 = 0;
    ((cls_10557c88 *)param_1)->field_0x5a = 0;
    ((cls_10557c88 *)param_1)->field48_0x5b = 0;
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
    ((cls_10557c88 *)param_1)->field_0x7c = 0;
    cls_105b9458_new((cls_105b9458 *)&((cls_10557c88 *)param_1)->field_0x80);
    cls_105b9458_new((cls_105b9458 *)&((cls_10557c88 *)param_1)->field524_0x294);
    construct_0x254_byte_object(&((cls_10557c88 *)param_1)->field1053_0x4a8);
    ((cls_10557c88 *)param_1)->field1649_0x6fc = 0;
    ((cls_10557c88 *)param_1)->field65_0x6c = 0;
    ((cls_10557c88 *)param_1)->field66_0x6d = 0;
    ((cls_10557c88 *)param_1)->field_0x6e = 0;
    ((cls_10557c88 *)param_1)->field_0x70 = 0;
    ((cls_10557c88 *)param_1)->field_0x74 = 0;
    ((cls_10557c88 *)param_1)->field70_0x75 = 0;
    ((cls_10557c88 *)param_1)->field71_0x76 = 0;
    ((cls_10557c88 *)param_1)->field_0x78 = 0;
  }
  return (cls_10557c88 *)param_1;
}
