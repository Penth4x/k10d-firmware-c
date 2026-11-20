/* @k10d cls_105d6484_new @ 0x1051749a
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105d6484; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6484 (vtable 0x105d6484, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105d6484; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6a50 * cls_105d6484_new(cls_105d6484 *param_1)

{
  if ((param_1 != (cls_105d6484 *)0x0) ||
     (param_1 = (cls_105d6484 *)heap_alloc((void *)0x10), (cls_105b6a50 *)param_1 != (cls_105b6a50 *)0x0)) {
    cls_105b6a50_new((cls_105b6a50 *)param_1);
    ((cls_105b6a50 *)param_1)->field_0x0 = (uint32_t)&DAT_105d6484/*ROM*/;
    ((cls_105b6a50 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
    ((cls_105b6a50 *)param_1)->field2_0x8 = (uint32_t)(void *)0x0;
    ((cls_105b6a50 *)param_1)->field3_0xc = (uint32_t)(void *)0x0;
  }
  return (cls_105b6a50 *)param_1;
}
