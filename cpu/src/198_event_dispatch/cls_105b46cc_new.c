/* @k10d cls_105b46cc_new @ 0x10493ede
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105b46cc; returns param_1)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b46cc (vtable 0x105b46cc, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105b46cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b46cc_new(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_105b49ec_new(param_1);
    param_1[3] = (uint32_t)&DAT_105b46cc/*ROM*/;
    uVar1 = heap_alloc_2(0x280);
    param_1[4] = uVar1;
    *(uint16_t *)((int)param_1 + 0x16) = 0;
    *(uint16_t *)(param_1 + 5) = 0;
  }
  return param_1;
}
