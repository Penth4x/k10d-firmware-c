/* @k10d cls_1059e330_new @ 0x104276ba
 * name: verified (structural evidence: heap_alloc(0x10c) when NULL; stores vtable 0x1059e330; returns param_1)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e330 (vtable 0x1059e330, 0x10c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10c) when NULL; stores vtable 0x1059e330; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059e330_new(cls_1059e330 *param_1)

{
  if ((param_1 != (cls_1059e330 *)0x0) ||
     (param_1 = (cls_1059e330 *)heap_alloc((void *)0x10c), param_1 != (cls_1059e330 *)0x0)) {
    cls_1059e2b8_new((cls_1059e2b8 *)param_1);
    cls_1059e430_new((cls_1059e430 *)&param_1->field_0x8);
    param_1->field_0x4 = 0x1059e330/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = 0x1059e358/*ROM*/;
  }
  return (int)param_1;
}
