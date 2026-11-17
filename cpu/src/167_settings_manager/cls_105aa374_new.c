/* @k10d cls_105aa374_new @ 0x10474514
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x105aa374; returns param_1)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aa374 (vtable 0x105aa374, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x105aa374; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aa374_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x4c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105aa374/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    alloc_and_init_0x3c_object(param_1 + 3);
    param_1[0x12] = 0;
  }
  return param_1;
}
