/* @k10d cls_105d6dc8_new @ 0x1051dc12
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105d6dc8; returns param_1)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6dc8 (vtable 0x105d6dc8, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105d6dc8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6dc8_new(cls_105d6dc8 *param_1)

{
  if ((param_1 != (cls_105d6dc8 *)0x0) ||
     (param_1 = (cls_105d6dc8 *)heap_alloc((void *)4), param_1 != (cls_105d6dc8 *)0x0)) {
    param_1->field_0x0 = 0x105d6dc8/*ROM*/;
  }
  return;
}
