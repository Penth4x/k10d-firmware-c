/* @k10d cls_105575b0_new @ 0x10363bb0
 * name: verified (structural evidence: heap_alloc(0x298) when NULL; stores vtable 0x105575b0; returns param_1)
 * unit: 002_settings_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105575b0 (vtable 0x105575b0, 0x298 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x298) when NULL; stores vtable 0x105575b0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_105575b0_new(cls_105575b0 *param_1)

{
  if ((param_1 != (cls_105575b0 *)0x0) ||
     (param_1 = (cls_105575b0 *)heap_alloc((void *)0x298), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0))
  {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105575b0/*ROM*/);
    ((cls_10557c88 *)param_1)->field8_0x14 = 0;
    ((cls_10557c88 *)param_1)->field_0x15 = 0;
    *(uint8_t *)&((cls_10557c88 *)param_1)->field_0x16 = 0;
    ((cls_10557c88 *)param_1)->field_0x18 = 0;
    init_0x50_byte_object_1051e422(&((cls_10557c88 *)param_1)->field_0x1c);
    ((cls_10557c88 *)param_1)->field65_0x6c = 0;
    ((cls_10557c88 *)param_1)->field_0x70 = 0;
    cls_105586cc_new((cls_105586cc *)&((cls_10557c88 *)param_1)->field_0x74);
    cls_10558830_new((cls_10558830 *)&((cls_10557c88 *)param_1)->field_0xd8);
    cls_10558568_new((cls_10558568 *)&((cls_10557c88 *)param_1)->field_0x144);
    cls_10559218_new((cls_10559218 *)&((cls_10557c88 *)param_1)->field_0x1b4);
    cls_10558a60_new((cls_10558a60 *)&((cls_10557c88 *)param_1)->field_0x1dc);
    ((cls_10557c88 *)param_1)->field_0x204 = 0;
    ((cls_10557c88 *)param_1)->field_0x208 = 0;
    ((cls_10557c88 *)param_1)->field_0x20c = 0;
    ((cls_10557c88 *)param_1)->field_0x210 = 0x2e;
    ((cls_10557c88 *)param_1)->field_0x214 = 0;
    ((cls_10557c88 *)param_1)->field_0x218 = 0;
    ((cls_10557c88 *)param_1)->field_0x21a = 0;
    ((cls_10557c88 *)param_1)->field_0x21c = 0;
    ((cls_10557c88 *)param_1)->field_0x21e = 0;
    ((cls_10557c88 *)param_1)->field_0x220 = 0;
    cls_105aae94_new((cls_105aae94 *)&((cls_10557c88 *)param_1)->field_0x224);
    alloc_and_zero_struct_104bb416(&((cls_10557c88 *)param_1)->field_0x23c);
  }
  return (cls_10557c88 *)param_1;
}
