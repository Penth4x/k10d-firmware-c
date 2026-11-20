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

cls_10597e5c * cls_10597e5c_new(cls_10597e5c *param_1)

{
  int iVar1;
  int iVar2;
  uint32_t *puVar3;
  
  if ((param_1 != (cls_10597e5c *)0x0) ||
     (param_1 = (cls_10597e5c *)heap_alloc((void *)0x430), param_1 != (cls_10597e5c *)0x0)) {
    cls_1059e458_new((cls_1059e458 *)param_1);
    param_1->field_0x0 = (uint32_t)((void *)0x10597e5c/*ROM*/);
    cls_105d6d48_new((cls_105d6d48 *)&param_1->field_0x4);
    puVar3 = &param_1->field_0x20;
    *puVar3 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0;
    param_1->field_0xc = (uint32_t)(&param_1->field_0x0);
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    iVar1 = 0;
    iVar2 = 0x7f;
    do {
      *(uint8_t *)((int)&param_1->field_0x30 + iVar1) = 0;
      *(uint8_t *)((int)&param_1[10].field_0x28 + iVar1) = 0;
      *(uint8_t *)((int)&param_1->field_0x30 + iVar1 + 1) = 0;
      *(uint8_t *)((int)&param_1[10].field_0x28 + iVar1 + 1) = 0;
      *(uint8_t *)((int)&param_1->field_0x30 + iVar1 + 2) = 0;
      *(uint8_t *)((int)&param_1[10].field_0x28 + iVar1 + 2) = 0;
      *(uint8_t *)((int)&param_1->field_0x30 + iVar1 + 3) = 0;
      *(uint8_t *)((int)&param_1[10].field_0x28 + iVar1 + 3) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
    set_object_fields_8_and_c(puVar3,&param_1->field_0x30,0x200);
    copy_third_field_to_first_two(puVar3);
  }
  return param_1;
}
