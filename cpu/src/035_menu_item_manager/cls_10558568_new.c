/* @k10d cls_10558568_new @ 0x10373c7e
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x10558568; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10558568 (vtable 0x10558568, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x10558568; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10558568_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x70), param_1 != (uint32_t *)0x0)) {
    cls_10559c4c_new(param_1);
    *param_1 = (uint32_t)&DAT_10558568/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10558680/*ROM*/;
    param_1[2] = (uint32_t)&DAT_105586a8/*ROM*/;
    param_1[0xc] = 0;
    iVar1 = 0;
    *(uint16_t *)(param_1 + 0x11) = 0;
    *(uint16_t *)((int)param_1 + 0x46) = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    *(uint8_t *)(param_1 + 0x1b) = 0;
    iVar2 = 3;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0x34) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x35) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x36) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x37) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
  }
  return param_1;
}
