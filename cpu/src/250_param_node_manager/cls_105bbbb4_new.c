/* @k10d cls_105bbbb4_new @ 0x104df8c0
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105bbbb4; returns param_1)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bbbb4 (vtable 0x105bbbb4, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105bbbb4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bbbb4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    param_1[5] = (uint32_t)&DAT_105bbbb4/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}
