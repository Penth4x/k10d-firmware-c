/* @k10d cls_105b432c_new @ 0x10492d58
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105b432c; returns param_1)
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b432c (vtable 0x105b432c, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105b432c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b432c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_105a2b50_new(param_1 + 1);
    *param_1 = 0x105b432c/*ROM*/;
    param_1[5] = 0x105b435c/*ROM*/;
    *(uint8_t *)(param_1 + 8) = 0;
    *(uint8_t *)((int)param_1 + 0x21) = 0;
    cls_105a2be0_new(param_1 + 9);
    cls_105a2bf8_new(param_1 + 0xb);
    cls_105a2bf8_new(param_1 + 0xd);
    param_1[0xf] = 0;
  }
  return param_1;
}
