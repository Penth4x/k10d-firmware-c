/* @k10d cls_105aa4f0_new @ 0x10476a2e
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105aa4f0; returns param_1)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aa4f0 (vtable 0x105aa4f0, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105aa4f0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aa4f0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105aa4f0/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    alloc_and_init_timer_object(param_1 + 3);
    *(uint16_t *)(param_1 + 0xb) = 0;
    *(uint16_t *)((int)param_1 + 0x2e) = 0;
  }
  return param_1;
}
