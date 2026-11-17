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

uint32_t * cls_105fa6ac_new(uint32_t *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_105b7ee0_new(param_1);
    *param_1 = 0x105fa6ac/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar1 = extract_bitfield_with_offset(0x200,4,1);
    uVar2 = (uint32_t)heap_alloc_2(iVar1 << 2);
    param_1[3] = uVar2;
    uVar2 = (uint32_t)alloc_and_zero_small_object((uint32_t *)0x0);
    param_1[4] = uVar2;
    zero_memory_region((void *)param_1[3],0x200,0);
    set_field_at_offset_c(param_1,0,0x200);
    set_field_at_offset_c(param_1,2,0x2001);
  }
  return param_1;
}
