/* @k10d cls_105b3e0c_new @ 0x1048d774
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105b3e0c; returns param_1)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3e0c (vtable 0x105b3e0c, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105b3e0c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3e0c_new(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x28), param_1 != (uint16_t *)0x0)) {
    cls_105b3cdc_new(param_1);
    *(void **)(param_1 + 0x10) = &DAT_105b3e0c/*ROM*/;
    *(uint32_t *)(param_1 + 0x12) = 0;
  }
  return (int)param_1;
}
