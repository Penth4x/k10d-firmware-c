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

int cls_105a2b50_new(cls_105a2b50 *obj)

{
  if ((obj != (cls_105a2b50 *)0x0) ||
     (obj = (cls_105a2b50 *)heap_alloc((void *)0x1c), obj != (cls_105a2b50 *)0x0)) {
    cls_105a2c1c_new((cls_105a2c1c *)obj);
    obj->field_0x10 = (uintptr_t)(&DAT_105a2b50/*ROM*/);
    cls_105a2b30_new(&obj->field_0x14);
    send_mailbox_message((int *)&obj->field_0x14);
  }
  return (int)obj;
}
