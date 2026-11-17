/* @k10d cls_105a6d8c_new @ 0x1045fe72
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a6d8c; returns param_1)
 * unit: 134_settings_struct_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6d8c (vtable 0x105a6d8c, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a6d8c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a6d8c_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_105b5264_new(param_1);
    *param_1 = (uint32_t)&DAT_105a6d8c/*ROM*/;
    iVar1 = 0;
    iVar2 = 0x14;
    do {
      iVar3 = iVar2;
      *(uint8_t *)((int)param_1 + iVar1 + 4) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 5) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 6) = 0;
      iVar2 = iVar3 + -3;
      iVar1 = iVar1 + 3;
    } while (-1 < iVar2);
    iVar3 = iVar3 + -1;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 4) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 1;
    } while (-1 < iVar3);
  }
  return param_1;
}
