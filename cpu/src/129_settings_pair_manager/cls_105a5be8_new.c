/* @k10d cls_105a5be8_new @ 0x1045b692
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105a5be8; returns param_1)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a5be8 (vtable 0x105a5be8, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105a5be8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a5be8_new(uint32_t *param_1,uint32_t param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    param_1[4] = 0x105a5be8/*ROM*/;
    *param_1 = 0;
    param_1[1] = param_2;
    param_1[2] = 0;
    *(uint8_t *)(param_1 + 3) = 0;
    initialize_object_with_vtable_1045b8d6(param_1);
  }
  return param_1;
}
