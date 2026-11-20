/* @k10d cls_105b7f20_new @ 0x104b28b2
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105b7f20; returns param_1)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7f20 (vtable 0x105b7f20, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105b7f20; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7f08 * cls_105b7f20_new(cls_105b7f20 *param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((param_1 != (cls_105b7f20 *)0x0) ||
     (param_1 = (cls_105b7f20 *)heap_alloc((void *)0x14), (cls_105b7f08 *)param_1 != (cls_105b7f08 *)0x0)) {
    cls_105b7f08_new((cls_105b7f08 *)param_1);
    ((cls_105b7f08 *)param_1)->field_0x0 = 0x105b7f20/*ROM*/;
    ((cls_105b7f08 *)param_1)->field1_0x4 = 0;
    ((cls_105b7f08 *)param_1)->field2_0x8 = 0;
    iVar1 = extract_bitfield_with_offset(param_2,4,1);
    uVar2 = heap_alloc_2(iVar1 << 2);
    ((cls_105b7f08 *)param_1)->field3_0xc = uVar2;
    uVar2 = (uintptr_t)(alloc_and_zero_small_object((uint32_t *)0x0));
    ((cls_105b7f08 *)param_1)->field4_0x10 = uVar2;
    (*(code *)0x104ad2d4/*ROM*/)(uVar2,((cls_105b7f08 *)param_1)->field3_0xc,param_2,0);
    clear_two_fields_and_reset((uint32_t *)(((cls_105b7f08 *)param_1)->field4_0x10),(int)(1));
  }
  return (cls_105b7f08 *)param_1;
}
