/* @k10d cls_105d8bc8_new @ 0x10522532
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105d8bc8; returns param_1)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d8bc8 (vtable 0x105d8bc8, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105d8bc8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d8bc8_new(uint32_t *param_1,uint32_t param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    cls_105b7748_new(param_1);
    param_1[6] = 0x105d8bc8/*ROM*/;
    param_1[8] = 0;
    *(uint16_t *)(param_1 + 9) = 0;
    param_1[10] = 0;
    param_1[0xb] = param_2;
    *(uint8_t *)(param_1 + 0xc) = 0;
  }
  return param_1;
}
