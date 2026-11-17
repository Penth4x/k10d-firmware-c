/* @k10d cls_105d677c_new @ 0x1051b2ac
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105d677c; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d677c (vtable 0x105d677c, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105d677c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d677c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    cls_105b999c_new(param_1);
    *param_1 = 0x105d677c/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(uint8_t *)(param_1 + 8) = 1;
    *(uint8_t *)((int)param_1 + 0x21) = 0;
    param_1[9] = 0;
  }
  return param_1;
}
