/* @k10d cls_105bd93c_new @ 0x104e11e6
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105bd93c; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bd93c (vtable 0x105bd93c, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105bd93c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bd93c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    param_1[2] = (uint32_t)&DAT_105bd93c/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
