/* @k10d cls_1059e380_new @ 0x1042790a
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059e380; returns param_1)
 * unit: 105_memory_block_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e380 (vtable 0x1059e380, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059e380; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e380_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    *param_1 = (uint32_t)&DAT_1059e380/*ROM*/;
  }
  return;
}
