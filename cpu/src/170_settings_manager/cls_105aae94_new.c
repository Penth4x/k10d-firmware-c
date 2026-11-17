/* @k10d cls_105aae94_new @ 0x1047e0fe
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105aae94; returns param_1)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aae94 (vtable 0x105aae94, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105aae94; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105aae94_new(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x18), param_1 != (void *)0x0)) {
    cls_105aaebc_new(param_1);
    *(void **)((int)param_1 + 0xc) = &DAT_105aae94/*ROM*/;
    *(uint32_t *)((int)param_1 + 0x10) = 0;
    *(uint32_t *)((int)param_1 + 0x14) = 0;
  }
  return (int)param_1;
}
