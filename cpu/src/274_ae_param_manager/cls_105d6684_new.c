/* @k10d cls_105d6684_new @ 0x1051a890
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105d6684; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6684 (vtable 0x105d6684, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105d6684; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d6684_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x58), param_1 != (uint32_t *)0x0)) {
    cls_105b56ec_new(param_1);
    param_1[4] = 0x105d6684/*ROM*/;
    cls_105d677c_new(param_1 + 5);
    alloc_and_init_object_1049c2dc(param_1 + 0xf);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0xffffffff;
  }
  return param_1;
}
