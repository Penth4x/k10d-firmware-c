/* @k10d cls_105bb314_new @ 0x104df1da
 * name: verified (structural evidence: heap_alloc(0x2c1c) when NULL; stores vtable 0x105bb314; returns param_1)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bb314 (vtable 0x105bb314, 0x2c1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c1c) when NULL; stores vtable 0x105bb314; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105bb314_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c1c), param_1 != (uint32_t *)0x0)) {
    cls_105bb0ec_new(param_1);
    cls_105d74ac_new(param_1 + 0x26);
    *param_1 = 0x105bb314/*ROM*/;
    param_1[1] = 0x105bb444/*ROM*/;
    param_1[6] = 0x105bb464/*ROM*/;
    param_1[0xb] = 0x105bb494/*ROM*/;
    param_1[0xc] = 0x105bb4ac/*ROM*/;
    param_1[0xd] = 0x105bb4cc/*ROM*/;
    param_1[0x10] = 0x105bb50c/*ROM*/;
    param_1[0x26] = 0x105bb554/*ROM*/;
    cls_105f9f74_new(param_1 + 0x27);
  }
  return param_1;
}
