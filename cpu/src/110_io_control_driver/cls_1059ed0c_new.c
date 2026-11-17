/* @k10d cls_1059ed0c_new @ 0x1042e352
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x1059ed0c; returns param_1)
 * unit: 110_io_control_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059ed0c (vtable 0x1059ed0c, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x1059ed0c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042e36c) overlaps instruction at (ram,0x1042e36a)
    */

uint32_t * cls_1059ed0c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,0xff,0x13);
    *param_1 = 0x1059ed0c/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return param_1;
}
