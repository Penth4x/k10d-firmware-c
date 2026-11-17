/* @k10d cls_105d4d68_new @ 0x10501a5c
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x105d4d68; returns param_1)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d4d68 (vtable 0x105d4d68, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x105d4d68; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d4d68_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x44), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e408_new(param_1 + 1);
    *param_1 = 0x105d4d68/*ROM*/;
    param_1[1] = 0x105d4d98/*ROM*/;
    *(uint8_t *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  return param_1;
}
