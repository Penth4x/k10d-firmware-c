/* @k10d cls_105aa40c_new @ 0x104750fe
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x105aa40c; returns param_1)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aa40c (vtable 0x105aa40c, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x105aa40c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aa40c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x6c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105aa40c/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    alloc_and_init_0x20_object(param_1 + 3);
    alloc_and_init_0x3c_object(param_1 + 0xb);
    *(uint16_t *)(param_1 + 0x1a) = 0;
  }
  return param_1;
}
