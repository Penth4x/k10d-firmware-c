/* @k10d cls_105b2e98_new @ 0x104866d2
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x105b2e98; returns param_1)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2e98 (vtable 0x105b2e98, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x105b2e98; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b2e98 * cls_105b2e98_new(cls_105b2e98 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_105b2e98 *)0x0) ||
     (param_1 = (cls_105b2e98 *)heap_alloc((void *)0x4c), param_1 != (cls_105b2e98 *)0x0)) {
    param_1->field_0x48 = (uintptr_t)(&DAT_105b2e98/*ROM*/);
    param_1->field_0x4 = 0;
    param_1->field_0x30 = 0;
    param_1->field_0x31 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x38 = 0;
    param_1->field_0x3c = 0;
    param_1->field_0x40 = 0;
    param_1->field_0x44 = 0;
    iVar2 = get_or_create_singleton_object_10470d84();
    param_1->field_0x0 = *(uint32_t *)(iVar2 + 4);
    iVar2 = get_sensor_singleton();
    param_1->field_0x4 = *(uint32_t *)(iVar2 + 4);
    iVar1 = 1;
    iVar2 = 0;
    do {
      *(uint32_t *)((int)&param_1->field_0x8 + iVar2) = 0;
      *(uint32_t *)((int)&param_1->field_0xc + iVar2) = 0;
      *(uint32_t *)((int)&param_1->field_0x10 + iVar2) = 0;
      *(uint32_t *)((int)&param_1->field_0x14 + iVar2) = 0;
      *(uint32_t *)((int)&param_1->field_0x18 + iVar2) = 0;
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 0x14;
    } while (-1 < iVar1);
    set_two_fields_to_four((int)param_1);
  }
  return param_1;
}
