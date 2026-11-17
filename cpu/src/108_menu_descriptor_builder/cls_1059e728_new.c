/* @k10d cls_1059e728_new @ 0x1042a83e
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x1059e728; returns param_1)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e728 (vtable 0x1059e728, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x1059e728; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042a858) overlaps instruction at (ram,0x1042a856)
    */

uint32_t * cls_1059e728_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,0x16,0x17);
    *param_1 = 0x1059e728/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return param_1;
}
