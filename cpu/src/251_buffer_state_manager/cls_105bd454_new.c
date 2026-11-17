/* @k10d cls_105bd454_new @ 0x104e1052
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105bd454; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bd454 (vtable 0x105bd454, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105bd454; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bd454_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_105bbbb4_new(param_1);
    param_1[5] = 0x105bd454/*ROM*/;
  }
  return (int)param_1;
}
