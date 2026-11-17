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

uint32_t * cls_105b703c_new(uint32_t *param_1,int param_2)

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
  uint uVar12;
  int iVar13;
  uintptr_t sp;
  uint8_t *puVar14;
  uint *puVar15;
  uint8_t auStack_38 [4];
  
  puVar14 = auStack_38;
  puVar15 = (uint *)auStack_38;
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x5c), puVar15 = (uint *)puVar14,
     param_1 != (uint32_t *)0x0)) {
    param_2 = param_2 * 4;
    pvVar5 = *(void **)(&DAT_800490a4/*SDRAM*/ + param_2);
    iVar13 = *(int *)(param_2 + -0x7ffef9f0);
    uVar6 = *(uint *)(iVar13 + 0x1c);
    uVar7 = *(uint *)(iVar13 + 0x20);
    uVar8 = *(uint *)(iVar13 + 0x24);
    uVar9 = *(uint *)(iVar13 + 0x28);
    uVar10 = *(uint *)(iVar13 + 0x2c);
    uVar12 = *(uint *)(iVar13 + 0x30);
    uVar11 = *(uint *)(iVar13 + 0x34);
    uVar4 = *(uint *)(iVar13 + 0x38);
    uVar3 = *(uint *)(iVar13 + 0x40);
    uVar2 = *(uint *)(iVar13 + 0x3c);
    uVar1 = *(uint *)(iVar13 + 0x44);
    *puVar15 = *(uint *)(iVar13 + 0x10) | *(uint *)(iVar13 + 0xc) | uVar6 | uVar7 | uVar8 | uVar9 |
               uVar10 | uVar12 | uVar11 | uVar4 | uVar3 | uVar2 | uVar1;
    cls_105b7448_new(param_1,pvVar5,
                     uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar12 | uVar11 | uVar4 | uVar3 |
                     uVar2 | uVar1,0,*puVar15);
    param_1[4] = 0x105b703c/*ROM*/;
    param_1[5] = **(uint32_t **)(param_2 + -0x7ffef9f0);
    param_1[6] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 4);
    param_1[7] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 8);
    param_1[8] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0xc);
    param_1[9] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x10);
    param_1[10] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x14);
    param_1[0xb] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x18);
    param_1[0xc] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x1c);
    param_1[0xd] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x20);
    param_1[0xe] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x24);
    param_1[0xf] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x28);
    param_1[0x10] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x2c);
    param_1[0x11] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x30);
    param_1[0x12] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x34);
    param_1[0x13] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x38);
    param_1[0x14] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x40);
    param_1[0x15] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9f0) + 0x3c);
    iVar13 = *(int *)(param_2 + -0x7ffef9f0);
    param_1[0x16] =
         *(uint *)(iVar13 + 0x1c) | *(uint *)(iVar13 + 0x20) | *(uint *)(iVar13 + 0x24) |
         *(uint *)(iVar13 + 0x28) | *(uint *)(iVar13 + 0x2c) | *(uint *)(iVar13 + 0x30) |
         *(uint *)(iVar13 + 0x34) | *(uint *)(iVar13 + 0x38) | *(uint *)(iVar13 + 0x40) |
         *(uint *)(iVar13 + 0x3c);
  }
  return param_1;
}
