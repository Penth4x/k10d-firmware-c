/* @k10d cls_105b3ea0_new @ 0x1048e340
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105b3ea0; returns param_1)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3ea0 (vtable 0x105b3ea0, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105b3ea0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3ea0_new(cls_105b3ea0 *param_1)

{
  if ((param_1 != (cls_105b3ea0 *)0x0) ||
     (param_1 = (cls_105b3ea0 *)heap_alloc((void *)0x28), (cls_105b3cdc *)param_1 != (cls_105b3cdc *)0x0)) {
    cls_105b3cdc_new((cls_105b3cdc *)param_1);
    ((cls_105b3cdc *)param_1)->field_0x20 = (uint32_t)&DAT_105b3ea0/*ROM*/;
    ((cls_105b3cdc *)param_1)->field14_0x24 = 0;
  }
  return (int)(cls_105b3cdc *)param_1;
}
