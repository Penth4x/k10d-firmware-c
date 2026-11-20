/* @k10d cls_105fa6ac_new @ 0x1052c7ec
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105fa6ac; returns param_1)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105fa6ac (vtable 0x105fa6ac, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105fa6ac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7ee0 * cls_105fa6ac_new(cls_105fa6ac *param_1)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  
  if ((param_1 != (cls_105fa6ac *)0x0) ||
     (param_1 = (cls_105fa6ac *)heap_alloc((void *)0x14), (cls_105b7ee0 *)param_1 != (cls_105b7ee0 *)0x0)) {
    cls_105b7ee0_new((cls_105b7ee0 *)param_1);
    ((cls_105b7ee0 *)param_1)->field_0x0 = 0x105fa6ac/*ROM*/;
    ((cls_105b7ee0 *)param_1)->field1_0x4 = 0;
    ((cls_105b7ee0 *)param_1)->field2_0x8 = 0;
    iVar1 = extract_bitfield_with_offset(0x200,4,1);
    puVar2 = (uint32_t *)heap_alloc_2(iVar1 << 2);
    ((cls_105b7ee0 *)param_1)->field3_0xc = (uintptr_t)(puVar2);
    uVar3 = (uintptr_t)(alloc_and_zero_small_object((uint32_t *)0x0));
    ((cls_105b7ee0 *)param_1)->field4_0x10 = uVar3;
    zero_memory_region((uint32_t *)(((cls_105b7ee0 *)param_1)->field3_0xc),(uint)(0x200),(uint32_t)(0));
    set_field_at_offset_c(param_1,0,0x200);
    set_field_at_offset_c(param_1,2,0x2001);
  }
  return (cls_105b7ee0 *)param_1;
}
