/* @k10d cls_1059e680_new @ 0x1042a2f2
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x1059e680; returns param_1)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e680 (vtable 0x1059e680, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x1059e680; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042a30c) overlaps instruction at (ram,0x1042a30a)
    */

uint32_t * cls_1059e680_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,0xff,0x23);
    *param_1 = 0x1059e680/*ROM*/;
    param_1[2] = 0;
    cls_105a2af8_new(param_1 + 3);
    param_1[5] = 0;
  }
  return param_1;
}
