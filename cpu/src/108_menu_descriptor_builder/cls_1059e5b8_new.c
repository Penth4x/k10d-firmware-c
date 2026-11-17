/* @k10d cls_1059e5b8_new @ 0x10429b74
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x1059e5b8; returns param_1)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e5b8 (vtable 0x1059e5b8, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x1059e5b8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10429b8e) overlaps instruction at (ram,0x10429b8c)
    */

uint32_t * cls_1059e5b8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,0x1a,0x1b);
    cls_1059e478_new(param_1 + 2);
    *param_1 = 0x1059e5b8/*ROM*/;
    param_1[2] = 0x1059e5f0/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    cls_105a2af8_new(param_1 + 6);
  }
  return param_1;
}
