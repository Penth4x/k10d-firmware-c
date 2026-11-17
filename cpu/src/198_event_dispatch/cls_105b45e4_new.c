/* @k10d cls_105b45e4_new @ 0x10493d10
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b45e4; returns param_1)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b45e4 (vtable 0x105b45e4, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b45e4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b45e4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    param_1[3] = (uint32_t)&DAT_105b45e4/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 2) = 1;
    *(uint8_t *)((int)param_1 + 9) = 0;
  }
  return;
}
