/* @k10d cls_1059e430_new @ 0x10427d7a
 * name: verified (structural evidence: heap_alloc(0x104) when NULL; stores vtable 0x1059e430; returns param_1)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e430 (vtable 0x1059e430, 0x104 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x104) when NULL; stores vtable 0x1059e430; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059e430_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x104), param_1 != (uint32_t *)0x0)) {
    cls_1059e3e0_new(param_1);
    *param_1 = 0x1059e430/*ROM*/;
    iVar2 = 7;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 4) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x84) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 8) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x88) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0xc) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x8c) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x10) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x90) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return param_1;
}
