/* @k10d cls_105b3fbc_new @ 0x1048f268
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x105b3fbc; returns param_1)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3fbc (vtable 0x105b3fbc, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x105b3fbc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b3fbc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x38), param_1 != (uint32_t *)0x0)) {
    cls_1059e478_new(param_1);
    cls_1059e4e0_new(param_1 + 1);
    *param_1 = 0x105b3fbc/*ROM*/;
    param_1[1] = 0x105b3fec/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    cls_105a2af8_new(param_1 + 9);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(uint8_t *)(param_1 + 0xd) = 0;
    *(uint8_t *)((int)param_1 + 0x35) = 0;
    *(uint8_t *)((int)param_1 + 0x36) = 0;
    *(uint8_t *)((int)param_1 + 0x37) = 0;
  }
  return param_1;
}
