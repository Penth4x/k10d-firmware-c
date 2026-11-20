/* @k10d cls_10557fec_new @ 0x10370720
 * name: verified (structural evidence: heap_alloc(0xd8) when NULL; stores vtable 0x10557fec; returns param_1)
 * unit: 030_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557fec (vtable 0x10557fec, 0xd8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xd8) when NULL; stores vtable 0x10557fec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_10557fec_new(cls_10557fec *param_1)

{
  if ((param_1 != (cls_10557fec *)0x0) || (param_1 = (cls_10557fec *)heap_alloc((void *)0xd8), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0)) {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uint32_t)(&DAT_10557fec/*ROM*/);
    ((cls_10557c88 *)param_1)->field8_0x14 = 0;
    ((cls_10557c88 *)param_1)->field_0x15 = 0;
    ((cls_10557c88 *)param_1)->field_0x16 = 0;
    cls_1055a164_new((cls_1055a164 *)&((cls_10557c88 *)param_1)->field_0x18);
    cls_1055a090_new((cls_1055a090 *)&((cls_10557c88 *)param_1)->field_0x40);
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
    alloc_and_zero_struct_104bb416(&((cls_10557c88 *)param_1)->field_0x78);
    ((cls_10557c88 *)param_1)->field136_0xd4 = 0;
  }
  return (cls_10557c88 *)param_1;
}
