/* @k10d cls_10557d80_new @ 0x1036d01c
 * name: verified (structural evidence: heap_alloc(0x254) when NULL; stores vtable 0x10557d80; returns param_1)
 * unit: 022_capture_settings_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557d80 (vtable 0x10557d80, 0x254 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x254) when NULL; stores vtable 0x10557d80; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_10557d80_new(cls_10557d80 *param_1)

{
  if ((param_1 != (cls_10557d80 *)0x0) || (param_1 = (cls_10557d80 *)heap_alloc((void *)0x254), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0))
  {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uint32_t)(&DAT_10557d80/*ROM*/);
    ((cls_10557c88 *)param_1)->field8_0x14 = 0;
    ((cls_10557c88 *)param_1)->field_0x15 = 0;
    ((cls_10557c88 *)param_1)->field_0x18 = 0;
    init_0x50_byte_object_1051e422(&((cls_10557c88 *)param_1)->field_0x1c);
    ((cls_10557c88 *)param_1)->field65_0x6c = 0;
    ((cls_10557c88 *)param_1)->field_0x70 = 0;
    cls_105592e8_new((cls_105592e8 *)&((cls_10557c88 *)param_1)->field_0x74);
    cls_10559448_new((cls_10559448 *)&((cls_10557c88 *)param_1)->field149_0xe4);
    cls_105590b8_new((cls_105590b8 *)&((cls_10557c88 *)param_1)->field277_0x170);
    cls_1056b154_new((cls_1056b154 *)&((cls_10557c88 *)param_1)->field_0x21c);
    ((cls_10557c88 *)param_1)->field458_0x244 = 0;
    ((cls_10557c88 *)param_1)->field459_0x248 = 0;
    ((cls_10557c88 *)param_1)->field460_0x24c = 0;
    ((cls_10557c88 *)param_1)->field461_0x250 = 0;
    ((cls_10557c88 *)param_1)->field462_0x252 = 0;
  }
  return (cls_10557c88 *)param_1;
}
