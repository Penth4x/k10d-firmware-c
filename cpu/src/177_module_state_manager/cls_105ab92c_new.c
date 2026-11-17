/* @k10d cls_105ab92c_new @ 0x10485460
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105ab92c; returns param_1)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab92c (vtable 0x105ab92c, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105ab92c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105ab92c_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = (uint32_t)&DAT_105ab92c/*ROM*/;
    iVar2 = 1;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 4) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 8) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0xc) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x10) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
    param_1[9] = 0;
  }
  return param_1;
}
