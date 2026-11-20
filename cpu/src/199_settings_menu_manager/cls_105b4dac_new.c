/* @k10d cls_105b4dac_new @ 0x10494c28
 * name: verified (structural evidence: heap_alloc(0xb4) when NULL; stores vtable 0x105b4dac; returns param_1)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4dac (vtable 0x105b4dac, 0xb4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xb4) when NULL; stores vtable 0x105b4dac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b4dac_new(cls_105b4dac *param_1,void *param_2,uint8_t param_3,uint32_t *param_4)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (cls_105b4dac *)0x0) ||
     (param_1 = (cls_105b4dac *)heap_alloc((void *)0xb4), param_1 != (cls_105b4dac *)0x0)) {
    cls_105b44b4_new((cls_105b44b4 *)param_1);
    param_1->field_0xc = (uintptr_t)(&DAT_105b4dac/*ROM*/);
    param_1->field_0x7c = 0;
    iVar3 = 8;
    do {
      iVar2 = iVar3 + -4;
      *(uint32_t *)((int)&param_1->field_0x7c + iVar3) = *(uint32_t *)(iVar2 + (int)param_2);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    iVar3 = 8;
    do {
      iVar2 = iVar3 + -4;
      *(uint32_t *)(&param_1->field_0x84 + iVar3) = *(uint32_t *)((int)param_2 + iVar3 + 4);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    allocate_and_init_widget(&param_1->field_0x90);
    param_1->field_0xa0 = param_3;
    param_1->field_0xa4 = *param_4;
    param_1->field_0xa8 = param_4[1];
    param_1->field_0xac = 0;
    param_1->field_0x68 = 0;
    param_1->field_0x6c = 0;
    param_1->field_0x70 = 0;
    param_1->field_0x74 = 0;
    param_1->field_0x78 = 0;
    uVar1 = get_or_init_singleton_10491684();
    param_1->field_0xb0 = uVar1;
  }
  return (int)param_1;
}
