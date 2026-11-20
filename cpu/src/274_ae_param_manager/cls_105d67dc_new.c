/* @k10d cls_105d67dc_new @ 0x1051b896
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105d67dc; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d67dc (vtable 0x105d67dc, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105d67dc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a5c3c * cls_105d67dc_new(cls_105d67dc *param_1)

{
  if ((param_1 != (cls_105d67dc *)0x0) ||
     (param_1 = (cls_105d67dc *)heap_alloc((void *)4), param_1 != (cls_105d67dc *)0x0)) {
    cls_105a5c3c_new((cls_105a5c3c *)param_1);
    ((cls_105a5c3c *)param_1)->field_0x0 = (uintptr_t)((void *)0x105d67dc/*ROM*/);
  }
  return (cls_105a5c3c *)param_1;
}
