/* @k10d cls_105b5524_new @ 0x10497208
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b5524; returns param_1)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5524 (vtable 0x105b5524, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b5524; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10497222) overlaps instruction at (ram,0x10497220)
    */

uint32_t * cls_105b5524_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,0xff,0x1d);
    *param_1 = 0x105b5524/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}
