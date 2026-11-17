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

uint32_t * cls_105b719c_new(uint32_t *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint *puVar5;
  uint8_t auStack_14 [4];
  
  puVar4 = auStack_14;
  puVar5 = (uint *)auStack_14;
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x48), puVar5 = (uint *)puVar4,
     param_1 != (uint32_t *)0x0)) {
    param_2 = param_2 * 4;
    pvVar2 = *(void **)(&DAT_800490cc/*SDRAM*/ + param_2);
    iVar3 = *(int *)(param_2 + -0x7ffef9dc);
    uVar1 = *(uint *)(iVar3 + 0xc) | *(uint *)(iVar3 + 8) | *(uint *)(iVar3 + 0x10) |
            *(uint *)(iVar3 + 0x14) | *(uint *)(iVar3 + 0x18) | *(uint *)(iVar3 + 0x1c) |
            *(uint *)(iVar3 + 0x20) | *(uint *)(iVar3 + 0x24) | *(uint *)(iVar3 + 0x28) |
            *(uint *)(iVar3 + 0x2c);
    *puVar5 = uVar1;
    cls_105b7448_new(param_1,pvVar2,0,uVar1,*puVar5);
    param_1[4] = 0x105b719c/*ROM*/;
    param_1[5] = **(uint32_t **)(param_2 + -0x7ffef9dc);
    param_1[6] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 4);
    param_1[7] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 8);
    param_1[8] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 0xc);
    param_1[9] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 0x10);
    param_1[10] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 0x14);
    param_1[0xb] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 0x18);
    param_1[0xc] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 0x1c);
    param_1[0xd] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 0x20);
    param_1[0xe] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 0x24);
    param_1[0xf] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 0x28);
    param_1[0x10] = *(uint32_t *)(*(int *)(param_2 + -0x7ffef9dc) + 0x2c);
    iVar3 = *(int *)(param_2 + -0x7ffef9dc);
    param_1[0x11] =
         *(uint *)(iVar3 + 0xc) | *(uint *)(iVar3 + 0x10) | *(uint *)(iVar3 + 0x14) |
         *(uint *)(iVar3 + 0x18) | *(uint *)(iVar3 + 0x1c) | *(uint *)(iVar3 + 0x20) |
         *(uint *)(iVar3 + 0x24) | *(uint *)(iVar3 + 0x28);
  }
  return param_1;
}
