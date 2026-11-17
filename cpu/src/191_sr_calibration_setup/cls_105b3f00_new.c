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

int cls_105b3f00_new(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x30), param_1 != (uint16_t *)0x0)) {
    cls_105b3cdc_new(param_1);
    *(void **)(param_1 + 0x10) = &DAT_105b3f00/*ROM*/;
    param_1[0x12] = 0;
    *(uint8_t *)(param_1 + 0x13) = 5;
    *(uint8_t *)((int)param_1 + 0x27) = 0;
    param_1[0x14] = 7;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  return (int)param_1;
}
