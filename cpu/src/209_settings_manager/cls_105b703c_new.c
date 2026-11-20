/* @k10d cls_105b703c_new @ 0x104aa8dc
 * name: verified (structural evidence: heap_alloc(0x5c) when NULL; stores vtable 0x105b703c; returns param_1)
 * unit: 209_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b703c (vtable 0x105b703c, 0x5c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x5c) when NULL; stores vtable 0x105b703c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b703c * cls_105b703c_new(cls_105b703c *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uintptr_t sp;
  uint8_t *puVar15;
  uint *puVar16;
  uint8_t auStack_38 [4];
  
  puVar15 = auStack_38;
  puVar16 = (uint *)auStack_38;
  if ((param_1 != (cls_105b703c *)0x0) ||
     (param_1 = (cls_105b703c *)heap_alloc((void *)0x5c), puVar16 = (uint *)puVar15,
     param_1 != (cls_105b703c *)0x0)) {
    iVar12 = param_2 * 4;
    pvVar5 = *(void **)(&DAT_800490a4/*SDRAM*/ + iVar12);
    iVar14 = *(int *)(iVar12 + -0x7ffef9f0);
    uVar6 = *(uint *)(iVar14 + 0x1c);
    uVar7 = *(uint *)(iVar14 + 0x20);
    uVar8 = *(uint *)(iVar14 + 0x24);
    uVar9 = *(uint *)(iVar14 + 0x28);
    uVar10 = *(uint *)(iVar14 + 0x2c);
    uVar13 = *(uint *)(iVar14 + 0x30);
    uVar11 = *(uint *)(iVar14 + 0x34);
    uVar4 = *(uint *)(iVar14 + 0x38);
    uVar3 = *(uint *)(iVar14 + 0x40);
    uVar2 = *(uint *)(iVar14 + 0x3c);
    uVar1 = *(uint *)(iVar14 + 0x44);
    *puVar16 = *(uint *)(iVar14 + 0x10) | *(uint *)(iVar14 + 0xc) | uVar6 | uVar7 | uVar8 | uVar9 |
               uVar10 | uVar13 | uVar11 | uVar4 | uVar3 | uVar2 | uVar1;
    cls_105b7448_new((cls_105b7448 *)param_1,pvVar5,
                     uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar13 | uVar11 | uVar4 | uVar3 |
                     uVar2 | uVar1,0,*puVar16);
    param_1->field_0x10 = 0x105b703c/*ROM*/;
    param_1->field_0x14 = **(uint32_t **)(iVar12 + -0x7ffef9f0);
    param_1->field_0x18 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 4);
    param_1->field_0x1c = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 8);
    param_1->field_0x20 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0xc);
    param_1->field_0x24 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x10);
    param_1->field_0x28 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x14);
    param_1->field_0x2c = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x18);
    param_1->field_0x30 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x1c);
    param_1->field_0x34 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x20);
    param_1->field_0x38 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x24);
    param_1->field_0x3c = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x28);
    param_1->field_0x40 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x2c);
    param_1->field_0x44 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x30);
    param_1->field_0x48 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x34);
    param_1->field_0x4c = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x38);
    param_1->field_0x50 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x40);
    param_1->field_0x54 = *(uint32_t *)(*(int *)(iVar12 + -0x7ffef9f0) + 0x3c);
    iVar12 = *(int *)(iVar12 + -0x7ffef9f0);
    param_1->field_0x58 =
         *(uint *)(iVar12 + 0x1c) | *(uint *)(iVar12 + 0x20) | *(uint *)(iVar12 + 0x24) |
         *(uint *)(iVar12 + 0x28) | *(uint *)(iVar12 + 0x2c) | *(uint *)(iVar12 + 0x30) |
         *(uint *)(iVar12 + 0x34) | *(uint *)(iVar12 + 0x38) | *(uint *)(iVar12 + 0x40) |
         *(uint *)(iVar12 + 0x3c);
  }
  return param_1;
}
