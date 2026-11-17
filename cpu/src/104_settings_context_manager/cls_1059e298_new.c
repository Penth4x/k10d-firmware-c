/* @k10d cls_1059e298_new @ 0x10427338
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x1059e298; returns param_1)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e298 (vtable 0x1059e298, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x1059e298; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059e298_new(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x20), param_1 != (void *)0x0)) {
    *(uint32_t *)((int)param_1 + 0x1c) = 0x1059e298/*ROM*/;
    cls_105a2bf8_new(param_1);
    *(uint32_t *)((int)param_1 + 8) = 0;
    *(uint32_t *)((int)param_1 + 0xc) = 0;
    *(uint32_t *)((int)param_1 + 0x10) = 0;
    *(uint32_t *)((int)param_1 + 0x14) = 0;
    *(uint8_t *)((int)param_1 + 0x18) = 0;
  }
  return (int)param_1;
}
