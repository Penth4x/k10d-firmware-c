/* @k10d cls_105b5410_new @ 0x10496978
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x105b5410; returns param_1)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5410 (vtable 0x105b5410, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x105b5410; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b5410_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x44), param_1 != (uint32_t *)0x0)) {
    cls_105f9ac8_new(param_1);
    *param_1 = 0x105b5410/*ROM*/;
    cls_105a8a1c_new(param_1 + 1);
  }
  return param_1;
}
