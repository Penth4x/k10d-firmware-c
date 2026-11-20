/* @k10d cls_1059e2e0_new @ 0x104275ba
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x1059e2e0; returns param_1)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e2e0 (vtable 0x1059e2e0, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x1059e2e0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059e2e0_new(cls_1059e2e0 *param_1)

{
  if ((param_1 != (cls_1059e2e0 *)0x0) ||
     (param_1 = (cls_1059e2e0 *)heap_alloc((void *)0x10), param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2b8_new((cls_1059e2b8 *)param_1);
    cls_1059e408_new((cls_1059e408 *)&param_1->field_0x8);
    param_1->field_0x4 = 0x1059e2e0/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = 0x1059e308/*ROM*/;
  }
  return (int)param_1;
}
