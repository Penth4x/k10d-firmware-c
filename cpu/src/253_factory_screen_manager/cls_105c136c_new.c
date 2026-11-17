/* @k10d cls_105c136c_new @ 0x104e7812
 * name: verified (structural evidence: heap_alloc(0x48) when NULL; stores vtable 0x105c136c; returns param_1)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c136c (vtable 0x105c136c, 0x48 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x48) when NULL; stores vtable 0x105c136c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

uint32_t * cls_105c136c_new(uint32_t *param_1)

{
  short sVar1;
  uint32_t **ppuVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  uint32_t *puVar5;
  uint32_t *puVar6;
  int *piVar7;
  int iVar8;
  uint16_t *puVar9;
  int *piVar10;
  uint32_t uVar11;
  int iVar12;
  uintptr_t sp;
  uint32_t *apuStack_34 [5];
  uint8_t local_20 [8];
  uint8_t auStack_18 [4];
  uint32_t uStack_14;
  uint8_t local_10 [8];
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x48), param_1 != (uint32_t *)0x0)) {
    cls_105b49ec_new(param_1);
    param_1[3] = &DAT_105c136c/*ROM*/;
    puVar4 = param_1 + 4;
    cls_105b989c_new((int)puVar4);
    puVar5 = param_1 + 8;
    cls_105b4bbc_new((int)puVar5);
    puVar6 = param_1 + 0xc;
    cls_105b4bbc_new((int)puVar6);
    piVar7 = param_1 + 0x10;
    alloc_two_word_pair_1045c3dc(piVar7,0x1e0,0x30);
    iVar12 = param_1[7];
    sVar1 = *(short *)(iVar12 + 0x80);
    iVar8 = heap_alloc((void *)0x30);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      cls_105b3cfc_new(iVar8);
    }
    (**(code **)(iVar12 + 0x84))((int)sVar1 + (int)puVar4,iVar8,0);
    iVar8 = param_1[0xb];
    sVar1 = *(short *)(iVar8 + 0x80);
    puVar9 = (uint16_t *)heap_alloc((void *)0x2c);
    if (puVar9 == (uint16_t *)0x0) {
      puVar9 = (uint16_t *)0x0;
    }
    else {
      cls_105b3d9c_new(puVar9);
    }
    (**(code **)(iVar8 + 0x84))((int)sVar1 + (int)puVar5,puVar9,0);
    iVar8 = param_1[0xf];
    sVar1 = *(short *)(iVar8 + 0x80);
    puVar9 = (uint16_t *)heap_alloc((void *)0x2c);
    if (puVar9 == (uint16_t *)0x0) {
      puVar9 = (uint16_t *)0x0;
    }
    else {
      cls_105b3d9c_new(puVar9);
    }
    (**(code **)(iVar8 + 0x84))((int)sVar1 + (int)puVar6,puVar9,0);
    uVar11 = apuStack_34 + 5;
    piVar10 = (int *)alloc_two_word_pair_1045c3dc((uint32_t *)uVar11,0x10,0x10);
    add_two_structs_into_param1(local_10,piVar7,piVar10);
    iVar8 = 8;
    do {
      iVar12 = iVar8 + -4;
      *(uint32_t *)(iVar12 + (int)(apuStack_34 + 3)) = *(uint32_t *)((int)&uStack_14 + iVar8);
      iVar8 = iVar12;
    } while (iVar12 != 0);
    ppuVar2 = apuStack_34 + 1;
    apuStack_34[1] = apuStack_34[3];
    apuStack_34[2] = apuStack_34[4];
    dispatch_two_word_event(puVar4,ppuVar2);
    free_heap_if_flagged_1045c402(ppuVar2,2);
    free_heap_if_flagged_1045c402(apuStack_34 + 3,2);
    free_heap_if_flagged_1045c402((void *)uVar11,2);
    uVar3 = apuStack_34 + 7;
    apuStack_34[0] = puVar6;
    piVar10 = (int *)alloc_two_word_pair_1045c3dc((uint32_t *)uVar3,8,8);
    add_two_structs_into_param1(apuStack_34 + 1,piVar7,piVar10);
    iVar8 = 8;
    do {
      iVar12 = iVar8 + -4;
      *(uint32_t *)((int)apuStack_34 + iVar8 + 0x10U) = *(uint32_t *)((int)apuStack_34 + iVar8);
      iVar8 = iVar12;
    } while (iVar12 != 0);
    dispatch_two_word_event(apuStack_34[0],uVar11);
    free_heap_if_flagged_1045c402((void *)uVar11,2);
    free_heap_if_flagged_1045c402(ppuVar2,2);
    free_heap_if_flagged_1045c402((void *)uVar3,2);
    uVar11 = alloc_two_word_pair_1045c3dc((uint32_t *)uVar3,0,0);
    dispatch_two_word_event(puVar5,uVar11);
    free_heap_if_flagged_1045c402((void *)uVar3,2);
  }
  return param_1;
}
