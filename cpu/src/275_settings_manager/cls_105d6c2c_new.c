/* @k10d cls_105d6c2c_new @ 0x1051c27e
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105d6c2c; returns param_1)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6c2c (vtable 0x105d6c2c, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105d6c2c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105d6c2c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x58), param_1 != (uint32_t *)0x0)) {
    cls_105b6320_new(param_1);
    param_1[1] = 0x105d6c2c/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(uint8_t *)(param_1 + 6) = 0;
    *(uint8_t *)(param_1 + 0xb) = 0;
    *(uint8_t *)(param_1 + 0x10) = 0;
  }
  return (int)param_1;
}
