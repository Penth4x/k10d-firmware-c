/* @k10d cls_105b7f50_new @ 0x104b2e90
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105b7f50; returns param_1)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7f50 (vtable 0x105b7f50, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105b7f50; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7f08 * cls_105b7f50_new(cls_105b7f50 *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  if ((param_1 != (cls_105b7f50 *)0x0) ||
     (param_1 = (cls_105b7f50 *)heap_alloc((void *)0x1c), (cls_105b7f08 *)param_1 != (cls_105b7f08 *)0x0)) {
    cls_105b7f08_new((cls_105b7f08 *)param_1);
    ((cls_105b7f08 *)param_1)->field_0x0 = 0x105b7f50/*ROM*/;
    ((cls_105b7f08 *)param_1)->field1_0x4 = 0;
    ((cls_105b7f08 *)param_1)->field2_0x8 = 0;
    uVar1 = (uintptr_t)(alloc_and_zero_small_object((uint32_t *)0x0));
    ((cls_105b7f08 *)param_1)->field3_0xc = uVar1;
    iVar2 = extract_bitfield_with_offset(0x200,4,1);
    uVar1 = heap_alloc_2(iVar2 << 2);
    ((cls_105b7f08 *)param_1)->field4_0x10 = uVar1;
    ((cls_105b7f08 *)param_1)->field5_0x14 = 0;
    ((cls_105b7f08 *)param_1)->field6_0x18 = 0;
  }
  return (cls_105b7f08 *)param_1;
}
