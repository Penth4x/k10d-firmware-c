/* @k10d cls_1059e2b8_new @ 0x10427572
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x1059e2b8; returns param_1)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e2b8 (vtable 0x1059e2b8, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x1059e2b8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e2b8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    param_1[1] = 0x1059e2b8/*ROM*/;
    *param_1 = 0;
  }
  return;
}
