/* @k10d cls_105f9e98_new @ 0x1052bb0e
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105f9e98; returns param_1)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105f9e98 (vtable 0x105f9e98, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105f9e98; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105f9e98_new(cls_105f9e98 *param_1)

{
  if ((param_1 != (cls_105f9e98 *)0x0) ||
     (param_1 = (cls_105f9e98 *)heap_alloc((void *)0x18), param_1 != (cls_105f9e98 *)0x0)) {
    cls_105bbbb4_new((cls_105bbbb4 *)param_1);
    ((cls_105bbbb4 *)param_1)->field_0x14 = (uintptr_t)((void *)0x105f9e98/*ROM*/);
  }
  return (int)(cls_105bbbb4 *)param_1;
}
