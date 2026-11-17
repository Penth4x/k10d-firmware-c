/* @k10d cls_105d518c_new @ 0x10506cea
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105d518c; returns param_1)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d518c (vtable 0x105d518c, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105d518c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d518c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e408_new(param_1 + 1);
    *param_1 = 0x105d518c/*ROM*/;
    param_1[1] = 0x105d51bc/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    cls_1059e288_new(param_1 + 5);
  }
  return param_1;
}
