/* @k10d cls_105aafd8_new @ 0x1047f9da
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105aafd8; returns param_1)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aafd8 (vtable 0x105aafd8, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105aafd8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aafd8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105aafd8/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    initialize_lens_update_object(param_1 + 3,8);
    param_1[4] = (uint32_t)retry_virtual_operation_with_timeout;
    param_1[3] = (uint32_t)retry_virtual_operation_with_lock;
  }
  return param_1;
}
