/* @k10d cls_105b5628_new @ 0x10498f5a
 * name: verified (structural evidence: heap_alloc(0x54) when NULL; stores vtable 0x105b5628; returns param_1)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5628 (vtable 0x105b5628, 0x54 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x54) when NULL; stores vtable 0x105b5628; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b5628_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x54), param_1 != (uint32_t *)0x0)) {
    cls_105b56ec_new(param_1);
    param_1[4] = 0x105b5628/*ROM*/;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    cls_105d677c_new(param_1 + 9);
    alloc_and_init_object_1049c2dc(param_1 + 0x13);
    param_1[0x14] = 0xffffffff;
  }
  return param_1;
}
