/* @k10d cls_105c2d24_new @ 0x104eda28
 * name: verified (structural evidence: heap_alloc(0x3130) when NULL; stores vtable 0x105c2d24; returns param_1)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c2d24 (vtable 0x105c2d24, 0x3130 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3130) when NULL; stores vtable 0x105c2d24; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c2d24_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x3130), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105c2d24/*ROM*/;
    initialize_seven_subobject_container(param_1 + 1);
    param_1[0xc48] = 0x105f9304/*ROM*/;
    *(uint8_t *)(param_1 + 0xc49) = 0;
    cls_105fa760_new(param_1 + 0xc4a);
    alloc_if_null(param_1 + 0xc4b);
  }
  return param_1;
}
