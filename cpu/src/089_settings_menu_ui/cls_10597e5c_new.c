/* @k10d cls_10597e5c_new @ 0x103fdb60
 * name: verified (structural evidence: heap_alloc(0x430) when NULL; stores vtable 0x10597e5c; returns param_1)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10597e5c (vtable 0x10597e5c, 0x430 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x430) when NULL; stores vtable 0x10597e5c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10597e5c_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  uint32_t *puVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x430), param_1 != (uint32_t *)0x0)) {
    cls_1059e458_new(param_1);
    *param_1 = 0x10597e5c/*ROM*/;
    cls_105d6d48_new(param_1 + 1);
    puVar3 = param_1 + 8;
    *puVar3 = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(uint16_t *)(param_1 + 0xb) = 0;
    param_1[3] = (uint32_t)(uintptr_t)param_1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    iVar1 = 0;
    iVar2 = 0x7f;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0x30) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x230) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x31) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x231) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x32) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x232) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x33) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x233) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
    set_object_fields_8_and_c(puVar3,param_1 + 0xc,0x200);
    copy_third_field_to_first_two(puVar3);
  }
  return param_1;
}
