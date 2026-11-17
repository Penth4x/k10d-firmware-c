/* @k10d cls_1059ed94_new @ 0x1042e612
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x1059ed94; returns param_1)
 * unit: 110_io_control_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059ed94 (vtable 0x1059ed94, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x1059ed94; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042e62c) overlaps instruction at (ram,0x1042e62a)
    */

uint32_t * cls_1059ed94_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,4,5);
    *param_1 = 0x1059ed94/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}
