/* @k10d cls_1059ef8c_new @ 0x1042f3f4
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x1059ef8c; returns param_1)
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059ef8c (vtable 0x1059ef8c, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x1059ef8c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042f412) overlaps instruction at (ram,0x1042f410)
    */

int cls_1059ef8c_new(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_1059ef7c_new(param_1,param_2,param_3);
    param_1[4] = 0x1059ef8c/*ROM*/;
  }
  return (int)param_1;
}
