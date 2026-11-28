/* @k10d cls_1059e3e0_new @ 0x10427c76
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059e3e0; returns param_1)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e3e0 (vtable 0x1059e3e0, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059e3e0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e3e0_new(cls_1059e3e0 *this_ptr)

{
  if ((this_ptr != (cls_1059e3e0 *)0x0) ||
     (this_ptr = (cls_1059e3e0 *)heap_alloc((void *)4), this_ptr != (cls_1059e3e0 *)0x0)) {
    this_ptr->field_0x0 = (uint32_t)&DAT_1059e3e0/*ROM*/;
  }
  return;
}
