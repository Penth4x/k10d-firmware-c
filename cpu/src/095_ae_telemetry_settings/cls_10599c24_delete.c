/* @k10d cls_10599c24_delete @ 0x1040b734
 * name: verified (structural evidence: stores vtable 0x10599c24 to *this; heap_free(this) under (param_2 & 1))
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10599c24 (vtable 0x10599c24): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10599c24 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10599c24_delete(cls_10599c24 *param_1,uint param_2)

{
  if (param_1 != (cls_10599c24 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_10599c24/*ROM*/;
    cls_10557c88_delete((cls_10557c88 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
