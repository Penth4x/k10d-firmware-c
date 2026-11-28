/* @k10d cls_105ab830_new @ 0x10483458
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105ab830; returns param_1)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab830 (vtable 0x105ab830, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105ab830; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ab830_new(cls_105ab830 *this)

{
  if ((this != (cls_105ab830 *)0x0) ||
     (this = (cls_105ab830 *)heap_alloc((void *)4), this != (cls_105ab830 *)0x0)) {
    this->field_0x0 = (uint32_t)&DAT_105ab830/*ROM*/;
  }
  return;
}
