/* @k10d cls_105b43cc_new @ 0x1049308a
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105b43cc; returns param_1)
 * unit: 197_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b43cc (vtable 0x105b43cc, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105b43cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b49ec * cls_105b43cc_new(cls_105b43cc *param_1)

{
  if ((param_1 != (cls_105b43cc *)0x0) ||
     (param_1 = (cls_105b43cc *)heap_alloc((void *)0x40), (cls_105b49ec *)param_1 != (cls_105b49ec *)0x0)) {
    cls_105b49ec_new((cls_105b49ec *)param_1);
    ((cls_105b49ec *)param_1)->field_0xc = (uint32_t)&DAT_105b43cc/*ROM*/;
    alloc_and_zero_two_words_1045bc0e(&((cls_105b49ec *)param_1)->field_0x10);
    cls_105a5c2c_new((cls_105a5c2c *)&((cls_105b49ec *)param_1)->field_0x18,0);
    ((cls_105b49ec *)param_1)->field_0x30 = 0;
    ((cls_105b49ec *)param_1)->field_0x34 = 0;
    ((cls_105b49ec *)param_1)->field_0x38 = 0;
    ((cls_105b49ec *)param_1)->field_0x3c = 7;
  }
  return (cls_105b49ec *)param_1;
}
