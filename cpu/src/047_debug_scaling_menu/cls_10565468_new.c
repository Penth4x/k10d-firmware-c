/* @k10d cls_10565468_new @ 0x103a8ad8
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x10565468; returns param_1)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10565468 (vtable 0x10565468, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x10565468; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10565468_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x44), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    *param_1 = 0x10565468/*ROM*/;
    *(uint8_t *)(param_1 + 0x10) = 0;
  }
  return param_1;
}
