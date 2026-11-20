/* @k10d cls_105b719c_new @ 0x104aac3a
 * name: verified (structural evidence: heap_alloc(0x48) when NULL; stores vtable 0x105b719c; returns param_1)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b719c (vtable 0x105b719c, 0x48 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x48) when NULL; stores vtable 0x105b719c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b719c * cls_105b719c_new(cls_105b719c *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint *puVar6;
  uint8_t auStack_14 [4];
  
  puVar5 = auStack_14;
  puVar6 = (uint *)auStack_14;
  if ((param_1 != (cls_105b719c *)0x0) ||
     (param_1 = (cls_105b719c *)heap_alloc((void *)0x48), puVar6 = (uint *)puVar5,
     param_1 != (cls_105b719c *)0x0)) {
    iVar3 = param_2 * 4;
    pvVar2 = *(void **)(&DAT_800490cc/*SDRAM*/ + iVar3);
    iVar4 = *(int *)(iVar3 + -0x7ffef9dc);
    uVar1 = *(uint *)(iVar4 + 0xc) | *(uint *)(iVar4 + 8) | *(uint *)(iVar4 + 0x10) |
            *(uint *)(iVar4 + 0x14) | *(uint *)(iVar4 + 0x18) | *(uint *)(iVar4 + 0x1c) |
            *(uint *)(iVar4 + 0x20) | *(uint *)(iVar4 + 0x24) | *(uint *)(iVar4 + 0x28) |
            *(uint *)(iVar4 + 0x2c);
    *puVar6 = uVar1;
    cls_105b7448_new((cls_105b7448 *)param_1,pvVar2,0,uVar1,*puVar6);
    param_1->field_0x10 = 0x105b719c/*ROM*/;
    param_1->field_0x14 = **(uint32_t **)(iVar3 + -0x7ffef9dc);
    param_1->field_0x18 = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 4);
    param_1->field_0x1c = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 8);
    param_1->field_0x20 = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 0xc);
    param_1->field_0x24 = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 0x10);
    param_1->field_0x28 = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 0x14);
    param_1->field_0x2c = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 0x18);
    param_1->field_0x30 = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 0x1c);
    param_1->field_0x34 = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 0x20);
    param_1->field_0x38 = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 0x24);
    param_1->field_0x3c = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 0x28);
    param_1->field_0x40 = *(uint32_t *)(*(int *)(iVar3 + -0x7ffef9dc) + 0x2c);
    iVar3 = *(int *)(iVar3 + -0x7ffef9dc);
    param_1->field_0x44 =
         *(uint *)(iVar3 + 0xc) | *(uint *)(iVar3 + 0x10) | *(uint *)(iVar3 + 0x14) |
         *(uint *)(iVar3 + 0x18) | *(uint *)(iVar3 + 0x1c) | *(uint *)(iVar3 + 0x20) |
         *(uint *)(iVar3 + 0x24) | *(uint *)(iVar3 + 0x28);
  }
  return param_1;
}
