/* @k10d cls_105d6524_new @ 0x10517d8a
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105d6524; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6524 (vtable 0x105d6524, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105d6524; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d6524_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    cls_105b6a50_new(param_1);
    *param_1 = (uint32_t)&DAT_105d6524/*ROM*/;
    param_1[1] = 0;
  }
  return param_1;
}
