/* @k10d cls_105ab430_new @ 0x1048095c
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105ab430; returns param_1)
 * unit: 173_screen_activation (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab430 (vtable 0x105ab430, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105ab430; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ab430_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0x105ab430/*ROM*/;
  }
  return;
}
