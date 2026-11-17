/* @k10d cls_105bca40_new @ 0x104e051e
 * name: verified (structural evidence: heap_alloc(0x102c) when NULL; stores vtable 0x105bca40; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bca40 (vtable 0x105bca40, 0x102c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x102c) when NULL; stores vtable 0x105bca40; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105bca40_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x102c), param_1 != (uint32_t *)0x0)) {
    cls_105b7d6c_new(param_1);
    param_1[1] = 0x105bca40/*ROM*/;
    param_1[2] = 0x105bca58/*ROM*/;
    *param_1 = 0x105bca70/*ROM*/;
    param_1[1] = 0x105bcab8/*ROM*/;
    param_1[2] = 0x105bcad0/*ROM*/;
    param_1[3] = 0;
    param_1[0x404] = 0;
    param_1[0x405] = 0;
    param_1[0x406] = 0;
    param_1[0x407] = 0;
    param_1[0x408] = 0;
    param_1[0x409] = 0;
    param_1[0x40a] = 0;
    fill_byte_array(param_1 + 4,0,0x1000);
  }
  return param_1;
}
