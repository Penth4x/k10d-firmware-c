/* @k10d cls_10559448_new @ 0x103865bc
 * name: verified (structural evidence: heap_alloc(0x8c) when NULL; stores vtable 0x10559448; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10559448 (vtable 0x10559448, 0x8c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8c) when NULL; stores vtable 0x10559448; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10559448_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x8c), param_1 != (uint32_t *)0x0)) {
    cls_10559c4c_new(param_1);
    *param_1 = (uint32_t)&DAT_10559448/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10559560/*ROM*/;
    param_1[2] = (uint32_t)&DAT_10559588/*ROM*/;
    param_1[0xc] = 0;
    iVar1 = 0;
    *(uint16_t *)((int)param_1 + 0x62) = 0;
    *(uint16_t *)(param_1 + 0x19) = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    iVar2 = 0;
    iVar3 = 2;
    do {
      *(uint16_t *)((int)param_1 + iVar1 + 0x34) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x46) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0x58) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x36) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x48) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0x59) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x38) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x4a) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0x5a) = 0;
      iVar2 = iVar2 + 3;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 6;
    } while (-1 < iVar3);
  }
  return param_1;
}
