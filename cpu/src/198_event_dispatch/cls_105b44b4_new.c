/* @k10d cls_105b44b4_new @ 0x104934d4
 * name: verified (structural evidence: heap_alloc(0x68) when NULL; stores vtable 0x105b44b4; returns param_1)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b44b4 (vtable 0x105b44b4, 0x68 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x68) when NULL; stores vtable 0x105b44b4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b44b4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x68), param_1 != (uint32_t *)0x0)) {
    cls_105b48dc_new(param_1);
    param_1[3] = (uint32_t)&DAT_105b44b4/*ROM*/;
    cls_105a5c2c_new(param_1 + 0x12,0);
    param_1[0x18] = 0;
    *(uint8_t *)(param_1 + 0x19) = 1;
  }
  return param_1;
}
