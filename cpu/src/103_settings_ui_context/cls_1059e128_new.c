/* @k10d cls_1059e128_new @ 0x10426e96
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x1059e128; returns param_1)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e128 (vtable 0x1059e128, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x1059e128; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059e128_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_1059e100_new(param_1);
    cls_1059e458_new((void *)(param_1 + 1));
    cls_1059e3b0_new((void *)(param_1 + 2));
    cls_105a2c1c_new((void *)(param_1 + 7));
    cls_1059e490_new((void *)(param_1 + 0xc));
    cls_105b5224_new((void *)(param_1 + 0xd));
    *param_1 = (uint32_t)&DAT_1059e128/*ROM*/;
    param_1[1] = (uint32_t)&DAT_1059e1c0/*ROM*/;
    param_1[6] = (uint32_t)&DAT_1059e1e0/*ROM*/;
    param_1[0xb] = (uint32_t)&DAT_1059e210/*ROM*/;
    param_1[0xc] = (uint32_t)&DAT_1059e228/*ROM*/;
    param_1[0xd] = (uint32_t)&DAT_1059e248/*ROM*/;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return param_1;
}
