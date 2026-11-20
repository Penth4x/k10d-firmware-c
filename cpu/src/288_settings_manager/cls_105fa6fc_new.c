/* @k10d cls_105fa6fc_new @ 0x1052ca5c
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105fa6fc; returns param_1)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105fa6fc (vtable 0x105fa6fc, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105fa6fc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7ee0 * cls_105fa6fc_new(cls_105fa6fc *param_1)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  
  if ((param_1 != (cls_105fa6fc *)0x0) ||
     (param_1 = (cls_105fa6fc *)heap_alloc((void *)0x18), (cls_105b7ee0 *)param_1 != (cls_105b7ee0 *)0x0)) {
    cls_105b7ee0_new((cls_105b7ee0 *)param_1);
    ((cls_105b7ee0 *)param_1)->field_0x0 = 0x105fa6fc/*ROM*/;
    ((cls_105b7ee0 *)param_1)->field1_0x4 = 0;
    ((cls_105b7ee0 *)param_1)->field2_0x8 = 0;
    puVar1 = (uint32_t *)heap_alloc_2(8);
    ((cls_105b7ee0 *)param_1)->field3_0xc = (uintptr_t)(puVar1);
    uVar2 = (uintptr_t)(alloc_and_zero_small_object((uint32_t *)0x0));
    ((cls_105b7ee0 *)param_1)->field4_0x10 = uVar2;
    ((cls_105b7ee0 *)param_1)->field5_0x14 = 0;
    (*(code *)0x104ad2d4/*ROM*/)(uVar2,((cls_105b7ee0 *)param_1)->field3_0xc,6,0);
  }
  return (cls_105b7ee0 *)param_1;
}
