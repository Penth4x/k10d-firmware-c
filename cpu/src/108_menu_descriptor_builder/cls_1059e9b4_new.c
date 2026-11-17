/* @k10d cls_1059e9b4_new @ 0x1042bad6
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x1059e9b4; returns param_1)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e9b4 (vtable 0x1059e9b4, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x1059e9b4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042baf0) overlaps instruction at (ram,0x1042baee)
    */

uint32_t * cls_1059e9b4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,0x10,0x11);
    cls_1059e478_new(param_1 + 2);
    *param_1 = 0x1059e9b4/*ROM*/;
    param_1[2] = 0x1059e9ec/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    cls_105a2af8_new(param_1 + 0xb);
  }
  return param_1;
}
