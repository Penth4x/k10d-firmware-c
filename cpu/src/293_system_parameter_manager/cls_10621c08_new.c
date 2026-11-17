/* @k10d cls_10621c08_new @ 0x10535ce0
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x10621c08; returns param_1)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10621c08 (vtable 0x10621c08, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x10621c08; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_10621c08_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_105bbbb4_new(param_1);
    param_1[5] = (uint32_t)&DAT_10621c08;
  }
  return (int)param_1;
}
