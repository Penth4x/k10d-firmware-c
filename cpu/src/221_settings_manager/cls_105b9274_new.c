/* @k10d cls_105b9274_new @ 0x104b785a
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x105b9274; returns param_1)
 * unit: 221_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9274 (vtable 0x105b9274, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x105b9274; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b9274_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x50), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_1059e458_new(param_1 + 2);
    *param_1 = 0x105b9274/*ROM*/;
    param_1[1] = 0x105b92b4/*ROM*/;
    param_1[2] = 0x105b92cc/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    cls_105a2af8_new(param_1 + 9);
    cls_1059e288_new(param_1 + 0xb);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(uint8_t *)(param_1 + 0x13) = 0;
    *(uint8_t *)((int)param_1 + 0x4d) = 0xff;
    *(uint8_t *)((int)param_1 + 0x4e) = 0;
    *(uint8_t *)((int)param_1 + 0x4f) = 0xff;
  }
  return param_1;
}
