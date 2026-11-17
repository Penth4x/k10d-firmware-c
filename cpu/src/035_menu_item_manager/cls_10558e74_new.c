/* @k10d cls_10558e74_new @ 0x1037fbae
 * name: verified (structural evidence: heap_alloc(0xa8) when NULL; stores vtable 0x10558e74; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10558e74 (vtable 0x10558e74, 0xa8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xa8) when NULL; stores vtable 0x10558e74; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10558e74_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xa8), param_1 != (uint32_t *)0x0)) {
    cls_10559c4c_new(param_1);
    *param_1 = (uint32_t)&DAT_10558e74/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10558f8c/*ROM*/;
    param_1[2] = (uint32_t)&DAT_10558fb4/*ROM*/;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *(uint16_t *)(param_1 + 0x16) = 0;
    *(uint16_t *)((int)param_1 + 0x5a) = 0;
    param_1[0x17] = 0;
    iVar3 = 0;
    iVar4 = 0;
    iVar1 = 0;
    do {
      *(uint16_t *)((int)param_1 + iVar4 + 0x60) = 0;
      iVar2 = 2;
      iVar5 = iVar1;
      do {
        *(uint8_t *)((int)param_1 + iVar5 + 0x6c) = 0;
        *(uint8_t *)((int)param_1 + iVar5 + 0x6d) = 0;
        *(uint8_t *)((int)param_1 + iVar5 + 0x6e) = 0;
        iVar2 = iVar2 + -1;
        iVar5 = iVar5 + 3;
      } while (-1 < iVar2);
      *(uint8_t *)((int)param_1 + iVar3 + 0xa2) = 0;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 9;
      iVar4 = iVar4 + 2;
    } while (iVar3 < 6);
  }
  return param_1;
}
