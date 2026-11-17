/* @k10d cls_105c23c4_new @ 0x104ea72e
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105c23c4; returns param_1)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c23c4 (vtable 0x105c23c4, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105c23c4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105c23c4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_105bbbb4_new(param_1);
    param_1[5] = 0x105c23c4/*ROM*/;
    param_1[6] = 0x101d;
  }
  return (int)param_1;
}
