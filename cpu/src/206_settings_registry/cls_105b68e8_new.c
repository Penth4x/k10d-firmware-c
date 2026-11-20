/* @k10d cls_105b68e8_new @ 0x104a7420
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105b68e8; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b68e8 (vtable 0x105b68e8, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105b68e8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b99ec * cls_105b68e8_new(cls_105b68e8 *param_1)

{
  if ((param_1 != (cls_105b68e8 *)0x0) ||
     (param_1 = (cls_105b68e8 *)heap_alloc((void *)0x14), (cls_105b99ec *)param_1 != (cls_105b99ec *)0x0)) {
    cls_105b99ec_new((cls_105b99ec *)param_1);
    ((cls_105b99ec *)param_1)->field_0x0 = 0x105b68e8/*ROM*/;
    ((cls_105b99ec *)param_1)->field1_0x4 = 0;
    ((cls_105b99ec *)param_1)->field2_0x5 = 0;
    *(uint16_t *)&((cls_105b99ec *)param_1)->field_0x6 = 0;
    ((cls_105b99ec *)param_1)->field5_0x8 = 0;
    *(uint8_t *)&((cls_105b99ec *)param_1)->field6_0xc = 1;
    *(uint8_t *)((int)&((cls_105b99ec *)param_1)->field6_0xc + 1) = 0;
    ((cls_105b99ec *)param_1)->field7_0x10 = 0;
  }
  return (cls_105b99ec *)param_1;
}
