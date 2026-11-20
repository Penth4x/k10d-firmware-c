/* @k10d cls_10599c24_new @ 0x1040b6fa
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x10599c24; returns param_1)
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10599c24 (vtable 0x10599c24, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x10599c24; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10599c24 * cls_10599c24_new(cls_10599c24 *param_1)

{
  if ((param_1 != (cls_10599c24 *)0x0) ||
     (param_1 = (cls_10599c24 *)heap_alloc((void *)0x18), param_1 != (cls_10599c24 *)0x0)) {
    cls_10557c88_new((cls_10557c88 *)param_1);
    param_1->field_0x0 = (uintptr_t)(&DAT_10599c24/*ROM*/);
    param_1->field_0x14 = 0;
  }
  return param_1;
}
