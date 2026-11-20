/* @k10d cls_1059ec78_new @ 0x1042e116
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x1059ec78; returns param_1)
 * unit: 109_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059ec78 (vtable 0x1059ec78, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x1059ec78; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042e130) overlaps instruction at (ram,0x1042e12e)
    */

uint32_t * cls_1059ec78_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x38), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,0xff,9);
    cls_1059e478_new(param_1 + 2);
    *param_1 = 0x1059ec78/*ROM*/;
    param_1[2] = 0x1059ecb0/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    init_small_struct_fields(param_1 + 5);
    cls_105a2af8_new((void *)(param_1 + 0xb));
    param_1[0xd] = 0;
  }
  return param_1;
}
