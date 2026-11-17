/* @k10d cls_105b9e6c_new @ 0x104d1c32
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105b9e6c; returns param_1)
 * unit: 243_module_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9e6c (vtable 0x105b9e6c, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105b9e6c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d1c4c) overlaps instruction at (ram,0x104d1c4a)
    */

uint32_t * cls_105b9e6c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,0x18,0x19);
    *param_1 = 0x105b9e6c/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return param_1;
}
