/* @k10d cls_105d6524_new @ 0x10517d8a
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105d6524; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6524 (vtable 0x105d6524, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105d6524; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6a50 * cls_105d6524_new(cls_105d6524 *param_1)

{
  if ((param_1 != (cls_105d6524 *)0x0) ||
     (param_1 = (cls_105d6524 *)heap_alloc((void *)8), (cls_105b6a50 *)param_1 != (cls_105b6a50 *)0x0)) {
    cls_105b6a50_new((cls_105b6a50 *)param_1);
    ((cls_105b6a50 *)param_1)->field_0x0 = (uint32_t)&DAT_105d6524/*ROM*/;
    ((cls_105b6a50 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
  }
  return (cls_105b6a50 *)param_1;
}
