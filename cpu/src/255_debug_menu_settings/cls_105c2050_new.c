/* @k10d cls_105c2050_new @ 0x104ea1c4
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105c2050; returns param_1)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c2050 (vtable 0x105c2050, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105c2050; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c2050_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_1059e490_new((void *)param_1);
    cls_1059e478_new((void *)(param_1 + 1));
    cls_1059e458_new((void *)(param_1 + 2));
    *param_1 = 0x105c2050/*ROM*/;
    param_1[1] = 0x105c2098/*ROM*/;
    param_1[2] = 0x105c20b0/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1;
}
