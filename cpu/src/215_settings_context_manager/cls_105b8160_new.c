/* @k10d cls_105b8160_new @ 0x104b3c00
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b8160; returns param_1)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b8160 (vtable 0x105b8160, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b8160; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b81b0 * cls_105b8160_new(cls_105b8160 *param_1)

{
  if ((param_1 != (cls_105b8160 *)0x0) ||
     (param_1 = (cls_105b8160 *)heap_alloc((void *)0xc), (cls_105b81b0 *)param_1 != (cls_105b81b0 *)0x0)) {
    cls_105b81b0_new((cls_105b81b0 *)param_1);
    ((cls_105b81b0 *)param_1)->field_0x0 = 0x105b8160/*ROM*/;
    ((cls_105b81b0 *)param_1)->field1_0x4 = 0;
    ((cls_105b81b0 *)param_1)->field2_0x8 = 0;
  }
  return (cls_105b81b0 *)param_1;
}
