/* @k10d cls_105b7f38_new @ 0x104b2a86
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105b7f38; returns param_1)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7f38 (vtable 0x105b7f38, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105b7f38; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b7f38_new(uint32_t *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_105b7f08_new(param_1);
    *param_1 = 0x105b7f38/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = (uint32_t)(uintptr_t)alloc_and_zero_small_object((uint32_t *)0x0);
    param_1[3] = uVar1;
    iVar2 = extract_bitfield_with_offset(0x200,4,1);
    uVar1 = (uint32_t)(uintptr_t)heap_alloc_2(iVar2 << 2);
    param_1[4] = uVar1;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1;
}
