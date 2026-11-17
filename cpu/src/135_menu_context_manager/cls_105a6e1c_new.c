/* @k10d cls_105a6e1c_new @ 0x104600de
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105a6e1c; returns param_1)
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6e1c (vtable 0x105a6e1c, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105a6e1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a6e1c_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_105b5264_new(param_1);
    *param_1 = (uint32_t)&DAT_105a6e1c/*ROM*/;
    iVar1 = 0;
    iVar2 = 3;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 4) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 5) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 6) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 7) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
  }
  return param_1;
}
