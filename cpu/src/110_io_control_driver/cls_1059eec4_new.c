/* @k10d cls_1059eec4_new @ 0x1042e74c
 * name: verified (structural evidence: heap_alloc(0x7c) when NULL; stores vtable 0x1059eec4; returns param_1)
 * unit: 110_io_control_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059eec4 (vtable 0x1059eec4, 0x7c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x7c) when NULL; stores vtable 0x1059eec4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042e766) overlaps instruction at (ram,0x1042e764)
    */

uint32_t * cls_1059eec4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x7c), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,0,1);
    *param_1 = 0x1059eec4/*ROM*/;
    init_64_byte_struct(param_1 + 2);
    heap_alloc_one_byte_1045926e((int)(param_1 + 0x12));
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    cls_105a2af8_new(param_1 + 0x1d);
  }
  return param_1;
}
