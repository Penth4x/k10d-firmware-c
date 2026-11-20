/* @k10d cls_105b42fc_new @ 0x10492a74
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b42fc; returns param_1)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b42fc (vtable 0x105b42fc, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b42fc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105b42fc_new(cls_105b42fc *param_1)

{
  if ((param_1 != (cls_105b42fc *)0x0) ||
     (param_1 = (cls_105b42fc *)heap_alloc((void *)4), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_105b42fc/*ROM*/;
  }
  return (cls_1059e380 *)param_1;
}
