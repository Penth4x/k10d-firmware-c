/* @k10d cls_1061e14c_new @ 0x10531614
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x1061e14c; returns param_1)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1061e14c (vtable 0x1061e14c, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x1061e14c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b81b0 *
cls_1061e14c_new(cls_1061e14c *param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
  uint32_t uVar1;
  
  if ((param_1 != (cls_1061e14c *)0x0) ||
     (param_1 = (cls_1061e14c *)heap_alloc((void *)0x20), (cls_105b81b0 *)param_1 != (cls_105b81b0 *)0x0)) {
    cls_105b81b0_new((cls_105b81b0 *)param_1);
    ((cls_105b81b0 *)param_1)->field_0x0 = 0x1061e14c;
    ((cls_105b81b0 *)param_1)->field1_0x4 = 0;
    ((cls_105b81b0 *)param_1)->field2_0x8 = param_2;
    ((cls_105b81b0 *)param_1)->field3_0xc = 0;
    ((cls_105b81b0 *)param_1)->field4_0x10 = param_3;
    ((cls_105b81b0 *)param_1)->field5_0x14 = param_4;
    uVar1 = (uintptr_t)(alloc_and_zero_small_object((uint32_t *)0x0));
    ((cls_105b81b0 *)param_1)->field6_0x18 = uVar1;
    ((cls_105b81b0 *)param_1)->field7_0x1c = 0;
  }
  return (cls_105b81b0 *)param_1;
}
