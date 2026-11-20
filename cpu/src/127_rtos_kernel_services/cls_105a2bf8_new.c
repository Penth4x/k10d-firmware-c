/* @k10d cls_105a2bf8_new @ 0x10459e94
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a2bf8; returns param_1)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a2bf8 (vtable 0x105a2bf8, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a2bf8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2bf8_new(cls_105a2bf8 *param_1)

{
  if ((param_1 != (cls_105a2bf8 *)0x0) ||
     (param_1 = (cls_105a2bf8 *)heap_alloc((void *)8), param_1 != (cls_105a2bf8 *)0x0)) {
    param_1->field_0x4 = (uint32_t)&DAT_105a2bf8/*ROM*/;
    param_1->field_0x0 = 0;
  }
  return;
}
