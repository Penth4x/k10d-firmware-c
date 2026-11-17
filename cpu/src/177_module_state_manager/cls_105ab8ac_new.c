/* @k10d cls_105ab8ac_new @ 0x104834e0
 * name: verified (structural evidence: heap_alloc(0x88) when NULL; stores vtable 0x105ab8ac; returns param_1)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab8ac (vtable 0x105ab8ac, 0x88 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x88) when NULL; stores vtable 0x105ab8ac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105ab8ac_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x88), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105ab8ac/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    iVar2 = 5;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x10) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x14) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x18) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x1c) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x20) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x14;
    } while (-1 < iVar2);
  }
  return param_1;
}
