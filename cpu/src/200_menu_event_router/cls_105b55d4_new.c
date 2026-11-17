/* @k10d cls_105b55d4_new @ 0x104983ca
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b55d4; returns param_1)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b55d4 (vtable 0x105b55d4, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b55d4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b55d4_new(uint32_t *param_1,int param_2)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    param_1[2] = (uint32_t)&DAT_105b55d4/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    if (param_2 == 0) {
      uVar1 = (uint32_t)cls_105b55bc_new(0,1);
      *param_1 = uVar1;
    }
    else if (param_2 == 1) {
      uVar1 = (uint32_t)cls_105b55bc_new(0,0);
      param_1[1] = uVar1;
    }
    else if (param_2 == 2) {
      uVar1 = (uint32_t)cls_105b55bc_new(0,1);
      *param_1 = uVar1;
      uVar1 = (uint32_t)cls_105b55bc_new(0,0);
      param_1[1] = uVar1;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  return param_1;
}
