/* @k10d cls_105b3f00_new @ 0x1048efd2
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105b3f00; returns param_1)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3f00 (vtable 0x105b3f00, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105b3f00; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3f00_new(cls_105b3f00 *param_1)

{
  if ((param_1 != (cls_105b3f00 *)0x0) ||
     (param_1 = (cls_105b3f00 *)heap_alloc((void *)0x30), (cls_105b3cdc *)param_1 != (cls_105b3cdc *)0x0)) {
    cls_105b3cdc_new((cls_105b3cdc *)param_1);
    ((cls_105b3cdc *)param_1)->field_0x20 = (uintptr_t)(&DAT_105b3f00/*ROM*/);
    ((cls_105b3cdc *)param_1)->field14_0x24 = 0;
    *(uint8_t *)&((cls_105b3cdc *)param_1)->field15_0x26 = 5;
    *(uint8_t *)((int)&((cls_105b3cdc *)param_1)->field15_0x26 + 1) = 0;
    *(uint16_t *)&((cls_105b3cdc *)param_1)->field16_0x28 = 7;
    *(uint16_t *)((int)&((cls_105b3cdc *)param_1)->field16_0x28 + 2) = 0;
    *(uint16_t *)&((cls_105b3cdc *)param_1)->field17_0x2c = 0;
  }
  return (int)(cls_105b3cdc *)param_1;
}
