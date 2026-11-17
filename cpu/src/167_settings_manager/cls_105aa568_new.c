/* @k10d cls_105aa568_new @ 0x10477c10
 * name: verified (structural evidence: heap_alloc(0x8c) when NULL; stores vtable 0x105aa568; returns param_1)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aa568 (vtable 0x105aa568, 0x8c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8c) when NULL; stores vtable 0x105aa568; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aa568_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x8c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    *param_1 = 0x105aa568/*ROM*/;
    param_1[1] = 0x105aa598/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    alloc_and_init_0x3c_object(param_1 + 10);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    alloc_and_zero_20_bytes(param_1 + 0x1d);
    param_1[0x22] = 0;
  }
  return param_1;
}
