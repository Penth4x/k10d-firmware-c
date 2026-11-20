/* @k10d cls_105576e0_new @ 0x10365906
 * name: verified (structural evidence: heap_alloc(0xe4) when NULL; stores vtable 0x105576e0; returns param_1)
 * unit: 004_settings_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105576e0 (vtable 0x105576e0, 0xe4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xe4) when NULL; stores vtable 0x105576e0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_105576e0_new(cls_105576e0 *param_1)

{
  if ((param_1 != (cls_105576e0 *)0x0) ||
     (param_1 = (cls_105576e0 *)heap_alloc((void *)0xe4), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0)) {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105576e0/*ROM*/);
    ((cls_10557c88 *)param_1)->field8_0x14 = 0;
    ((cls_10557c88 *)param_1)->field_0x15 = 0;
    ((cls_10557c88 *)param_1)->field_0x16 = 0;
    cls_10558b34_new((cls_10558b34 *)&((cls_10557c88 *)param_1)->field_0x18);
    cls_10558990_new((cls_10558990 *)&((cls_10557c88 *)param_1)->field_0x40);
    ((cls_10557c88 *)param_1)->field_0x68 = 0;
    ((cls_10557c88 *)param_1)->field62_0x69 = 0;
    ((cls_10557c88 *)param_1)->field63_0x6a = 0;
    ((cls_10557c88 *)param_1)->field64_0x6b = 0;
    ((cls_10557c88 *)param_1)->field65_0x6c = 0;
    ((cls_10557c88 *)param_1)->field66_0x6d = 0;
    ((cls_10557c88 *)param_1)->field_0x6e = 0x2e;
    ((cls_10557c88 *)param_1)->field_0x70 = 0;
    ((cls_10557c88 *)param_1)->field_0x74 = 0;
    ((cls_10557c88 *)param_1)->field70_0x75 = 0;
    ((cls_10557c88 *)param_1)->field71_0x76 = 0;
    ((cls_10557c88 *)param_1)->field_0x78 = 0xffffffff;
    ((cls_10557c88 *)param_1)->field_0x7c = 0xffffffff;
    ((cls_10557c88 *)param_1)->field_0x80 = 0;
    ((cls_10557c88 *)param_1)->field_0x81 = 0;
    alloc_and_zero_struct_104bb416(&((cls_10557c88 *)param_1)->field_0x84);
    ((cls_10557c88 *)param_1)->field_0xe0 = 0;
  }
  return (cls_10557c88 *)param_1;
}
