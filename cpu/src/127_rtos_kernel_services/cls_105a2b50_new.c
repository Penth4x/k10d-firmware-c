/* @k10d cls_105a2b50_new @ 0x10459a2a
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a2b50; returns param_1)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a2b50 (vtable 0x105a2b50, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a2b50; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a2b50_new(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x1c), param_1 != (void *)0x0)) {
    cls_105a2c1c_new(param_1);
    *(void **)((int)param_1 + 0x10) = &DAT_105a2b50/*ROM*/;
    cls_105a2b30_new((int *)((int)param_1 + 0x14));
    send_mailbox_message((int *)((int)param_1 + 0x14));
  }
  return (int)param_1;
}
