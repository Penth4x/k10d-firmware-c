/* @k10d cls_10621600_new @ 0x10535b76
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x10621600; returns param_1)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10621600 (vtable 0x10621600, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x10621600; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10621600_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    cls_105bde1c_new(param_1);
    param_1[2] = (uint32_t)&DAT_10621600;
  }
  return param_1;
}
