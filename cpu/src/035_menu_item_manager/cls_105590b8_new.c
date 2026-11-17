/* @k10d cls_105590b8_new @ 0x10383606
 * name: verified (structural evidence: heap_alloc(0xac) when NULL; stores vtable 0x105590b8; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105590b8 (vtable 0x105590b8, 0xac bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xac) when NULL; stores vtable 0x105590b8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105590b8_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xac), param_1 != (uint32_t *)0x0)) {
    cls_10559c4c_new(param_1);
    *param_1 = (uint32_t)&DAT_105590b8/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105591d0/*ROM*/;
    param_1[2] = (uint32_t)&DAT_105591f8/*ROM*/;
    param_1[0xc] = 0;
    iVar1 = 0;
    *(uint16_t *)(param_1 + 0x21) = 0;
    *(uint16_t *)((int)param_1 + 0x86) = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    iVar2 = 0;
    iVar3 = 3;
    do {
      *(uint16_t *)((int)param_1 + iVar1 + 0x34) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x54) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0x74) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x36) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x56) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0x75) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x38) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x58) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0x76) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x3a) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x5a) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0x77) = 0;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 8;
    } while (-1 < iVar3);
  }
  return param_1;
}
