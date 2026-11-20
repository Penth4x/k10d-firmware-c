/* @k10d cls_105b7458_new @ 0x104acff8
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b7458; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7458 (vtable 0x105b7458, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b7458; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7458 * cls_105b7458_new(cls_105b7458 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  if ((param_1 != (cls_105b7458 *)0x0) ||
     (param_1 = (cls_105b7458 *)heap_alloc((void *)0x10), param_1 != (cls_105b7458 *)0x0)) {
    cls_105b74d8_new((cls_105b74d8 *)param_1);
    param_1->field_0x0 = 0x105b7458/*ROM*/;
    param_1->field_0x4 = param_2;
    param_1->field_0x8 = 1;
    uVar3 = heap_alloc_2(param_2 << 1);
    param_1->field_0xc = uVar3;
    if (0 < param_2) {
      iVar4 = param_2 + -3;
      iVar1 = 0;
      if (2 < iVar4) {
        do {
          *(uint16_t *)(iVar1 + param_1->field_0xc) = *(uint16_t *)(iVar1 + param_3);
          iVar2 = iVar1 + 4;
          *(uint16_t *)(iVar1 + 2 + param_1->field_0xc) = *(uint16_t *)(iVar1 + 2 + param_3);
          iVar1 = iVar1 + 6;
          iVar4 = iVar4 + -3;
          *(uint16_t *)(iVar2 + param_1->field_0xc) = *(uint16_t *)(iVar2 + param_3);
        } while (-1 < iVar4);
      }
      for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
        *(uint16_t *)(iVar1 + param_1->field_0xc) = *(uint16_t *)(iVar1 + param_3);
        iVar1 = iVar1 + 2;
      }
    }
  }
  return param_1;
}
