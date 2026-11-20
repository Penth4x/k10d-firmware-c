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

cls_105b49ec * cls_105c136c_new(cls_105c136c *param_1)

{
  short sVar1;
  cls_105b4bbc **ppcVar2;
  uint32_t uVar3;
  uint8_t *puVar4;
  uint32_t *puVar5;
  uint8_t *puVar6;
  cls_105b3cfc *pcVar7;
  cls_105b3d9c *pcVar8;
  int *piVar9;
  uint32_t uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uintptr_t sp;
  cls_105b4bbc *apcStack_34 [5];
  uint8_t local_20 [8];
  uint8_t auStack_18 [4];
  uint32_t uStack_14;
  uint8_t local_10 [8];
  
  if ((param_1 != (cls_105c136c *)0x0) || (param_1 = (cls_105c136c *)heap_alloc((void *)0x48), (cls_105b49ec *)param_1 != (cls_105b49ec *)0x0)) {
    cls_105b49ec_new((cls_105b49ec *)param_1);
    ((cls_105b49ec *)param_1)->field_0xc = (uintptr_t)(&DAT_105c136c/*ROM*/);
    piVar9 = &((cls_105b49ec *)param_1)->field_0x10;
    cls_105b989c_new((cls_105b989c *)piVar9);
    puVar4 = &((cls_105b49ec *)param_1)->field_0x20;
    cls_105b4bbc_new((cls_105b4bbc *)puVar4);
    puVar5 = &((cls_105b49ec *)param_1)->field_0x30;
    cls_105b4bbc_new((cls_105b4bbc *)puVar5);
    puVar6 = &((cls_105b49ec *)param_1)->field_0x40;
    alloc_two_word_pair_1045c3dc((uint32_t *)puVar6,0x1e0,0x30);
    piVar11 = (int *)((uintptr_t)(((cls_105b49ec *)param_1)->field_0x1c));
    sVar1 = *(short *)(piVar11 + 0x20);
    pcVar7 = (cls_105b3cfc *)heap_alloc((void *)0x30);
    if (pcVar7 == (cls_105b3cfc *)0x0) {
      pcVar7 = (cls_105b3cfc *)0x0;
    }
    else {
      cls_105b3cfc_new(pcVar7);
    }
    (*(code *)piVar11[0x21])((int)piVar9 + (int)sVar1,pcVar7,0);
    iVar12 = *(int *)&((cls_105b49ec *)param_1)->field_0x2c;
    sVar1 = *(short *)(iVar12 + 0x80);
    pcVar8 = (cls_105b3d9c *)heap_alloc((void *)0x2c);
    if (pcVar8 == (cls_105b3d9c *)0x0) {
      pcVar8 = (cls_105b3d9c *)0x0;
    }
    else {
      cls_105b3d9c_new(pcVar8);
    }
    (((vtbl_entry*)(iVar12))[16].fn)(puVar4 + sVar1,pcVar8,0);
    iVar12 = ((cls_105b49ec *)param_1)->field_0x3c;
    sVar1 = *(short *)(iVar12 + 0x80);
    pcVar8 = (cls_105b3d9c *)heap_alloc((void *)0x2c);
    if (pcVar8 == (cls_105b3d9c *)0x0) {
      pcVar8 = (cls_105b3d9c *)0x0;
    }
    else {
      cls_105b3d9c_new(pcVar8);
    }
    (((vtbl_entry*)(iVar12))[16].fn)((int)puVar5 + (int)sVar1,pcVar8,0);
    uVar10 = (uintptr_t)(apcStack_34 + 5);
    piVar11 = (int *)alloc_two_word_pair_1045c3dc((uint32_t *)uVar10,0x10,0x10);
    add_two_structs_into_param1(local_10,(int *)puVar6,piVar11);
    iVar12 = 8;
    do {
      iVar13 = iVar12 + -4;
      *(uint32_t *)(iVar13 + (int)(apcStack_34 + 3)) = *(uint32_t *)((int)&uStack_14 + iVar12);
      iVar12 = iVar13;
    } while (iVar13 != 0);
    ppcVar2 = apcStack_34 + 1;
    apcStack_34[1] = apcStack_34[3];
    apcStack_34[2] = apcStack_34[4];
    dispatch_two_word_event(piVar9,ppcVar2);
    free_heap_if_flagged_1045c402(ppcVar2,2);
    free_heap_if_flagged_1045c402(apcStack_34 + 3,2);
    free_heap_if_flagged_1045c402((void *)uVar10,2);
    uVar3 = (uintptr_t)(apcStack_34 + 7);
    apcStack_34[0] = (cls_105b4bbc *)puVar5;
    piVar9 = (int *)alloc_two_word_pair_1045c3dc((uint32_t *)uVar3,8,8);
    add_two_structs_into_param1(apcStack_34 + 1,(int *)puVar6,piVar9);
    iVar12 = 8;
    do {
      iVar13 = iVar12 + -4;
      *(uint32_t *)((int)apcStack_34 + iVar12 + 0x10U) =
           *(uint32_t *)((int)apcStack_34 + iVar12);
      iVar12 = iVar13;
    } while (iVar13 != 0);
    dispatch_two_word_event((uint32_t *)(apcStack_34[0]),(uint32_t *)(uVar10));
    free_heap_if_flagged_1045c402((void *)uVar10,2);
    free_heap_if_flagged_1045c402(ppcVar2,2);
    free_heap_if_flagged_1045c402((void *)uVar3,2);
    uVar10 = (uintptr_t)(alloc_two_word_pair_1045c3dc((uint32_t *)uVar3,0,0));
    dispatch_two_word_event((uint32_t *)(puVar4),(uint32_t *)(uVar10));
    free_heap_if_flagged_1045c402((void *)uVar3,2);
  }
  return (cls_105b49ec *)param_1;
}
