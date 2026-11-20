/* @k10d cls_105bdba0_new @ 0x104e158a
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105bdba0; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bdba0 (vtable 0x105bdba0, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105bdba0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bdba0_new(cls_105bdba0 *param_1)

{
  if ((param_1 != (cls_105bdba0 *)0x0) ||
     (param_1 = (cls_105bdba0 *)heap_alloc((void *)0x18), param_1 != (cls_105bdba0 *)0x0)) {
    cls_105bbbb4_new((cls_105bbbb4 *)param_1);
    ((cls_105bbbb4 *)param_1)->field_0x14 = (uint32_t)((void *)0x105bdba0/*ROM*/);
  }
  return (int)(cls_105bbbb4 *)param_1;
}
