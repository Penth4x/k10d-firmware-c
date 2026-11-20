/* @k10d cls_105aae94_new @ 0x1047e0fe
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105aae94; returns param_1)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aae94 (vtable 0x105aae94, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105aae94; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105aae94_new(cls_105aae94 *param_1)

{
  if ((param_1 != (cls_105aae94 *)0x0) ||
     (param_1 = (cls_105aae94 *)heap_alloc((void *)0x18), (cls_105aaebc *)param_1 != (cls_105aaebc *)0x0)) {
    cls_105aaebc_new((cls_105aaebc *)param_1);
    ((cls_105aaebc *)param_1)->field_0xc = (uint32_t)&DAT_105aae94/*ROM*/;
    ((cls_105aaebc *)param_1)->field_0x10 = 0;
    ((cls_105aaebc *)param_1)->field_0x12 = 0;
    ((cls_105aaebc *)param_1)->field_0x14 = 0;
  }
  return (int)(cls_105aaebc *)param_1;
}
